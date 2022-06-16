#include <iostream>
using namespace std;

int main()
{
    int nilai[20];
    int i, n, angka, bilangan;
    cout << "Masukan Banyaknya Bilangan =";
    cin >> n;
    // Membaca elemen array
    for (i = 0; i < n; i++) {
        cout << "Masukan elemen ke-" << i << " = ";
        cin >> nilai[i];
    }
    // Mencetak elemen array
    cout << "\n\nDeretan Bilangan =";
    for (i = 0; i < n; i++)
        cout << nilai[i] << " ";
    cout << "\n\nMasukan Bilangan yang akan dicari = ";
    cin >> bilangan;
    // melakukan pencarian
    i = 0;
    do {
        if (nilai[i] == bilangan)
            angka = nilai[i];
        i++;
    } while (i < n);
    if (angka == bilangan)
        cout << "Bilangan " << bilangan << " ditemukan ";
    else
        cout << "Bilangan " << bilangan << " tidak ditemukan ";
}
