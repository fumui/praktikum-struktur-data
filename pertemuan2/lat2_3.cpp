#include <iostream>
using namespace std;
int main()
{
    int nilai[20];
    int i, n, terbesar;
    cout << "Masukan banyaknya bilangan = ";
    cin >> n;
    cout << endl;
    // Membaca elemen array
    for (i = 0; i < n; i++)
    {
        cout << "Masukan elemen ke-" << i << "=";
        cin >> nilai[i];
    }
    terbesar = nilai[1]; // elemen pertama dibuat sebagai terbesar
    for (i = 1; i < n; i++)
    {
        if (nilai[i] > terbesar)
            terbesar = nilai[i];
    }
    // Mencetak Bilangan terbesar
    cout << "\nBilangan terbesar = " << terbesar;
    cout << "\n";
}