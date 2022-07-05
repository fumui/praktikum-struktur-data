#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;
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
    vector<string> data = {
        "suka", "aku", "sama",
        "kamu", "dulu", "sampai", 
        "dari", "sekarang"
    };
    cout << "data before sort: "; 
    printVector<string>(data);
    cout << endl;
    insertionSort<string>(data);
    cout << "data after sort: "; 
    printVector<string>(data);
}