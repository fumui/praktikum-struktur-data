#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename T>
vector<int> sequentialSearch(vector<T>& arr, T x){
    vector<T> foundIndexes = {};
    for (int i = 0; i < arr.size(); i++) 
        if (arr[i] == x)
            foundIndexes.push_back(i);
    return foundIndexes;
}
template <typename T>
void insertionSort(vector<T>& arr){
    for (int i = 1; i < arr.size() - 1; i++){
        int k = i;
        while (k > 0 && arr[k] < arr[k-1]){
            T temp = arr[k-1];
            arr[k-1] = arr[k];
            arr[k] = temp;
            k--;
        }
    }
}
template <typename T>
void printVector(vector<T>& arr){
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << (i < arr.size()-1 ? "," : "");
}
int main(){
    vector<int> arr = {
        34,  8, 50, 74, 87, 
        90, 12, 25, 20, 30, 
        35, 45, 40, 22, 29, 
        72, 60, 55, 53, 12, 
        32, 33, 12, 41, 12
    };
    int key = 12;
    cout << "array: ";
    printVector(arr);
    cout << endl << "mencari " << key << endl;
    vector<int> findings = sequentialSearch(arr, key);
    if (findings.size() == 0)
        cout << "tidak ditemukan" << endl;
    else {
        cout << "ditemukan sebanyak " << findings.size() << " kali pada index: ";
        printVector(findings);
    }
}