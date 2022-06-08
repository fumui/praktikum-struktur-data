#include <iostream>
using namespace std;
int main()
{
    int nilai[10];
    int i, jumlah = 0;
    float rata_rata;
    // membaca dan menghitung jumlah
    for (i = 0; i < 10; i++)
    {
        cout << "Masukan elemen ke-" << i << " = ";
        cin >> nilai[i];
        jumlah += nilai[i];
    }
    rata_rata = (float)jumlah / 10;
    // Mencetak Elemen Array
    cout << "\n\nDeretan Bilangan = ";
    for (i = 0; i < 10; i++)
    {
        cout << nilai[i] << " ";
    }
    // Mencetak Harga jumlah
    cout << "\nJumlah Bilangan =" << jumlah;
    cout << "\nRata-Rata Bilangan = " << rata_rata;
}