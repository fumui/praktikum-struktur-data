#include <iostream>
using namespace std;
int main()
{
    int nilai[10] = {8, 12, 20, 15, 7, 5, 6, 4, 32, 3};
    int i, jumlah = 0;
    float rata_rata;
    // Menghitung jumlah
    for (i = 0; i < 10; i++)
        jumlah += nilai[i];
    rata_rata = (float)jumlah / 10;
    // Mencetak Elemen Array
    cout << "\n\nDeretan Bilangan = ";
    for (i = 0; i < 10; i++)
        cout << nilai[i] << " ";
    // Mencetak Harga Jumlah
    cout << "\nJumlah Bilangan =" << jumlah;
    cout << "\nRata-Rata Bilangan = " << rata_rata;
    cout << "\n";
}