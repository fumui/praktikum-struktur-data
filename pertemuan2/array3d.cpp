#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3][3] = {
        {
            {0,1,2},
            {3,4,5},
            {6,7,8},
        },
        {
            {10,11,12},
            {13,14,15},
            {16,17,18},
        },
        {
            {20,21,22},
            {23,24,25},
            {26,27,28},
        },
    };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                cout << "elemen pada index [" << i << "][" << j << "][" << k << "] = " << matrix[i][j][k] << "\n";
            }
        }
    }
}