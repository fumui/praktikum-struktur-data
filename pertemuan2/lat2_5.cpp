#include<iostream>
using namespace std;

int main(){
    int matrix[3][4] = {
        {1,3,4,5},
        {2,4,6,8},
        {3,5,7,9},
    };
    for (auto &&i : matrix)
    {
        for (auto &&j : i)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}