#include<iostream>
#include<vector>
using namespace std;
void inputMatrix(vector<vector<int>>& matrix, int baris, int kolom){
    for (int i = 0; i < baris; i++)
    {
        matrix.push_back(vector<int>());
        for (int j = 0; j < kolom; j++)
        {
            int val;
            cout << "Masukkan elemen baris "<<i+1<< " kolom " << j+1 << ": ";
            cin >> val;
            matrix[i].push_back(val);
        }
        
    }
}
vector<vector<int>> tambahMatrix(vector<vector<int>>& matrixA, vector<vector<int>>& matrixB){
    vector<vector<int>> hasil;
    for (int i = 0; i < matrixA.size(); i++)
    {
        hasil.push_back(vector<int>());
        for (int j = 0; j < matrixA[i].size(); j++)
        {
            hasil[i].push_back(matrixA[i][j] + matrixB[i][j]);
        }
    }
    return hasil;
}
void printMatrix(vector<vector<int>>& matrix){
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j]<< " ";
        }
        cout << "\n";
    }
}
int main(){
    vector<vector<int>> matrixA, matrixB;
    int baris, kolom;
    cout << "Masukkan ordo matriks\n";
    cout << "baris:\n";
    cin >> baris;
    cout << "kolom:\n";
    cin >> kolom;
    cout << "input isi matrix A\n";
    inputMatrix(matrixA, baris, kolom);
    cout << "input isi matrix B\n";
    inputMatrix(matrixB, baris, kolom);

    vector<vector<int>> matrixC = tambahMatrix(matrixA, matrixB);
    cout << "hasil\n";
    printMatrix(matrixC);
}