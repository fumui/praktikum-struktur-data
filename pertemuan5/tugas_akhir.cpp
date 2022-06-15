#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int> *arr){
    for (int i = 1; i <= arr->size(); i++){
        int key = i;
        while(arr[key] > arr[key-1]){
            int temp = (*arr)[key];
            (*arr)[key] = (*arr)[key-1];
            (*arr)[key-1] = temp;
        }

    }
}

int main(){
    
}