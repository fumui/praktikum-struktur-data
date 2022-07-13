#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;
template <typename T>
void printVector(vector<T>& arr){
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << (i < arr.size()-1 ? "," : "");
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
void shellSort(vector<T>& arr){
    int gap = arr.size() / 2;
    while (gap >= 1) {
        int s;
        do {
            s = 0;
            for (int i = 0; i <= (arr.size() - gap) - 1; i++){
                int k = i + gap;
                if (arr[i] > arr[k]){
                    T temp = arr[i];
                    arr[i] = arr[k];
                    arr[k] = temp;
                    s = 1;
                }
            }
        } while (s != 0);
        gap /= 2;
    }
}
int main(){
    vector<string> data = {
        "suka", "aku", "sama",
        "kamu", "dulu", "sampai", 
        "dari", "sekarang"
    };
    cout << "data before insertion sort: "; 
    printVector<string>(data);
    cout << endl;
    insertionSort<string>(data);
    cout << "data after insertion sort: "; 
    printVector<string>(data);
    cout << endl << endl;
    
    data = {
        "suka", "aku", "sama",
        "kamu", "dulu", "sampai", 
        "dari", "sekarang"
    };
    cout << "data before shell sort: "; 
    printVector<string>(data);
    cout << endl;
    shellSort<string>(data);
    cout << "data after shell sort: "; 
    printVector<string>(data);
    cout << endl;
}