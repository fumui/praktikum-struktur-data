#include <iostream>
#include <string>
#include <vector>
using namespace std;
template <typename T>
int interpolationSearch(vector<T>& arr, int start, int end, T x) {
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
    vector<char> arr;
    char key;
    int n;
    cout << "banyak karakter: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        char in;
        cout << "karakter ke-" << i+1 << ": ";
        cin >> in;
        arr.push_back(in);
    }
    cout << "array karakter: ";
    printVector(arr);
    insertionSort(arr);
    cout << endl << "array di urutkan terlebih dahulu menjadi: ";
    printVector(arr);
    cout << endl << "mencari: ";
    cin >> key;
    int finding = interpolationSearch(arr, 0, arr.size()-1, key);
    if (finding < 0)
        cout << "tidak ditemukan" << endl;
    else 
        cout << "ditemukan pada index ke-" << finding;
}