#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename T>
int binarySearch(vector<T>& arr, T x){
    int start = 0, end = arr.size() - 1;
    int i = arr.size()/2;
    while (start != end && end - start != 1){
        if (arr[i] == x)
            return i;
        if (arr[i] > x)
            end = i;
        else 
            start = i;
        i = (start + end) / 2;
    }
    return -1;
}
template <typename T>
void insertionSort(vector<T>& arr){
    for (int i = 1; i < arr.size(); i++){
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
    int key = 25;
    cout << "array: ";
    printVector(arr);
    insertionSort(arr);
    cout << endl << "array di urutkan terlebih dahulu menjadi: ";
    printVector(arr);
    cout << endl << "mencari " << key << endl;
    int finding = binarySearch(arr, key);
    if (finding < 0)
        cout << "tidak ditemukan" << endl;
    else {
        cout << "ditemukan pada index ke-" << finding;
    }
}