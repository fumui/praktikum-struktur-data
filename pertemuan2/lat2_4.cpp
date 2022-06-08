#include <iostream>
using namespace std;
int main()
{
    int nilai[20];
    int posisi[20];
    int i, n, bilangan, banyak = 0;
    bool ketemu;
    cout << "Masukan banyaknya bilangan = ";
    cin >> n;
    cout << endl;
    // Membaca elemen Array
    for (i = 0; i < n; i++)
    {
        cout << "Masukan elemen ke-" << i << " = ";
        cin >> nilai[i];
    }
    // Membaca Elemen Array
    cout << "\n\nDeretan bilangan = ";
    for (i = 0; i < n; i++)
        cout << nilai[i] << " ";
    cout << "\n\nMasukan bilangan yang akan dicabut = ";
    cin >> bilangan;
    // melakukan pencarian
    for (i = 0; i < n; i++)
    {
        if (nilai[i] == bilangan)
        {
            ketemu = true;
            posisi[banyak] = i;
            banyak++;
        }
    }
    if (ketemu)
    {
        cout << "Bilangan " << bilangan << " ditentukan sebanyak " << banyak;
        cout << "\npada posisi ke = ";
        for (i = 0; i < banyak; i++)
            cout << posisi[i] << " ";
    }
    else
        cout << "Bilangan " << bilangan << "tidak ditemukan";
    cout<<"\n";
}