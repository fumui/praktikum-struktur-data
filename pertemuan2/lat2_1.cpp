#include <iostream>
using namespace std;
int main()
{
    int Nilai[10] = {8, 12, 20, 15, 7, 5, 6, 4, 32, 3};
    int i, Jumlah = 0;
    float Rata_Rata;
    // Menghitung jumlah
    for (i = 0; i < 10; i++)
        Jumlah += Nilai[i];
    Rata_Rata = (float)Jumlah / 10;
    // Mencetak Elemen Array
    cout << "\n\nDeretan Bilangan = ";
    for (i = 0; i < 10; i++)
        cout << Nilai[i] << " ";
    // Mencetak Harga Jumlah
    cout << "\nJumlah Bilangan =" << Jumlah;
    cout << "\nRata-Rata Bilangan = " << Rata_Rata;
    cout << "\n";
}