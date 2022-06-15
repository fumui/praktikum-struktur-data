#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int> *arr){
    for (int i = 1; i < arr->size(); i++){
        int key = i;
        while(key > 0 && (*arr)[key] < (*arr)[key-1]){
            int temp = (*arr)[key];
            (*arr)[key] = (*arr)[key-1];
            (*arr)[key-1] = temp;
            key--;
        }
    }
}

void printVector(vector<int> *arr){
    for (int i = 0; i < arr->size(); i++){
        cout << "data ke-" << i+1 << ": " << (*arr)[i] << endl;
    }
}

int main(){
    int n;
    cout << "Banyak data: ";
    cin >> n;
    vector<int> list;
    list.resize(n);
    for(int i = 0; i< n; i++){
        cout << "data ke-" << i+1 << ": ";
        cin >> list[i];
    }

    cout << endl;
    cout << "data sebelum sorting: " << endl;
    printVector(&list);

    insertionSort(&list);

    cout << endl;
    cout << "data setelah sorting: " << endl;
    printVector(&list);

}