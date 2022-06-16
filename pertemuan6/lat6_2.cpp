#include <iostream>
using namespace std;

int main()
{
    int nilai[20];
    int posisi[20];
    int i, n, bilangan, banyak = 0;
    bool Ketemu;
    cout << "Masukan Banyaknya Bilangan = ";
    cin >> n;
    // Membaca elemen Array
    for (i = 0; i < n; i++){
        cout << "Masukan elemen ke-" << i << " = ";
        cin >> nilai[i];
    }
    // Mencetak Elemen Array
    cout << "\n\nDeretan Bilangan =";
    for (i = 0; i < n; i++)
        cout << nilai[i] << " ";
    cout << "\n\nMasukan Bilangan yang akan dicari = ";
    cin >> bilangan;
    // Melakukan Pencarian
    for (i = 0; i < n; i++){
        if (nilai[i] == bilangan)
        {
            Ketemu = true;
            posisi[banyak] = i;
            banyak++;
        }
    }
    if (Ketemu){
        cout << "Bilangan " << bilangan << " ditemukan Sebanyak " << banyak;
        cout << "\npada posisi ke =";
        for (i = 0; i < banyak; i++)
            cout << posisi[i] << " ";
    }
    else
        cout << "Bilangan " << bilangan << " tidak ditemukan";
}
