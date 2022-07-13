#include <iostream>
#include <vector>
using namespace std;
void swap(int& a, int& b){
    int t = a;
    a = b;
    b = t;
}
void printArray(vector<int>& arr)
{
	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] << " ";
	cout << endl;
}

void maximumSortAsc(vector<int>& arr)
{
	for (int i = arr.size() - 1; i > 0; i--){
		int max = i;
		for (int j = i; j > 0; j--)
			if (arr[j-1] > arr[max])
				max = j-1;
		swap(arr[max], arr[i]);
		printArray(arr);
	}
}
void maximumSortDesc(vector<int>& arr)
{
	for (int i = 0; i < arr.size() - 1; i++){
		int max = i;
		for (int j = i; j < arr.size() - 1; j++)
			if (arr[j+1] > arr[max])
				max = j+1;
		swap(arr[max], arr[i]);
		printArray(arr);
	}
}
void minimumSortDesc(vector<int>& arr)
{
	for (int i = arr.size() - 1; i > 0; i--){
		int min = i;
		for (int j = i; j > 0; j--)
			if (arr[j-1] < arr[min])
				min = j-1;
		swap(arr[min], arr[i]);
		printArray(arr);
	}
}
void minimumSortAsc(vector<int>& arr)
{
	for (int i = 0; i < arr.size() - 1; i++){
		int min = i;
		for (int j = i; j < arr.size() - 1; j++)
			if (arr[j+1] < arr[min])
				min = j+1;
		swap(arr[min], arr[i]);
		printArray(arr);
	}
}

int main()
{
	vector<int> arr = {12, 7, 9, 10, 13, 15, 16, 1};
	minimumSortDesc(arr);
	cout << "Sorted array: \n";
	printArray(arr);
	return 0;
}