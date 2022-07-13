#include <iostream>
#include <vector>
using namespace std;
void swap(int& a, int& b){
    int t = a;
    a = b;
    b = t;
}
void printArrayOnlyEven(vector<int>& arr)
{
	for (int i = 0; i < arr.size(); i++)
        if (arr[i] % 2 == 0)
		    cout << arr[i] << " ";
	cout << endl;
}

void bubbleSort(vector<int>& arr)
{
	for (int i = 0; i < arr.size() - 1; i++)
		for (int j = 0; j < arr.size() - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
}

int main()
{
	vector<int> arr;
	int n;
    cout << "Masukkan jumlah array: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        int v;
        cout << "Masukkan data ke-" << i + 1 << ": ";
        cin >> v;
        arr.push_back(v);
    }
	bubbleSort(arr);
	cout << "Sorted array: \n";
	printArrayOnlyEven(arr);
	return 0;
}