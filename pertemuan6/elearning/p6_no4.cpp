#include <iostream>
#include <string>
#include <vector>
using namespace std;
template <typename T>
int interpolationSearch(vector<T>& arr, int start, int end, T x)
{
    int pos;
    if (start <= end && x >= arr[start] && x <= arr[end]) {
        pos = start
              + (((double)(end - start) / (arr[end] - arr[start]))
                 * (x - arr[start]));
        if (arr[pos] == x)
            return pos;
        if (arr[pos] < x)
            return interpolationSearch(arr, pos + 1, end, x);
        if (arr[pos] > x)
            return interpolationSearch(arr, start, pos - 1, x);
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
    int finding = interpolationSearch(arr, 0, arr.size()-1, key);
    if (finding < 0)
        cout << "tidak ditemukan" << endl;
    else {
        cout << "ditemukan pada index ke-" << finding;
    }
}