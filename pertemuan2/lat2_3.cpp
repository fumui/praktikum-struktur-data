#include <iostream>
using namespace std;
int main()
{
    int Nilai[20];
    int i, N, Terbesar;
    cout << "Masukan Banyaknya Bilangan = ";
    cin >> N;
    cout << endl;
    // Membaca elemen array
    for (i = 0; i < N; i++)
    {
        cout << "Masukan elemen ke-" << i << "=";
        cin >> Nilai[i];
    }
    Terbesar = Nilai[1]; // elemen pertama dibuat sebagai Terbesar
    for (i = 1; i < N; i++)
    {
        if (Nilai[i] > Terbesar)
            Terbesar = Nilai[i];
    }
    // Mencetak Bilangan Terbesar
    cout << "\nBilangan Terbesar = " << Terbesar;
    cout << "\n";
}