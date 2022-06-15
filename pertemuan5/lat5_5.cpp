#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

const int n = 100;
void baca(int nilai[], int &m);
void cetak(int nilai[n], int &m);
void jumlah(int nilai[n], int &m, int &jlh, float &rata);
int main()
{
    int m;
    int nilai[n];
    int jlh = 0;
    float rata;

    cout << "Banyak Elemen : ";
    cin >> m;

    baca(nilai, m); // memanggil fungsi Baca
    cout << "\nElemen Elemen :";
    cetak(nilai, m);             // memanggil fungsi cetak
    jumlah(nilai, m, jlh, rata); // memanggil fungsi Jumlah
    cout << "\nJumlah Bilangan : " << jlh;
    cout << "\nRata-rata Bilangan :" << rata;
}
void cetak(int nilai[], int &m)
{
    int i;
    for (i = 0; i < m; i++)
    {
        cout << setw(3) << nilai[i];
    }
}
void baca(int nilai[], int &M)
{
    int i;
    for (i = 0; i < M; i++)
    {
        cout << "Elemen ke-" << i << " : ";
        cin >> nilai[i];
    }
}
void jumlah(int nilai[], int &M, int &jlh, float &rata)
{
    int i;
    for (i = 0; i < M; i++)
        jlh += nilai[i];
    rata = (float)jlh / M;
}