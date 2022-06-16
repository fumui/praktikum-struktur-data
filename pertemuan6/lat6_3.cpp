#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // deklarasi variabel
    int nilai[20];
    int i, j, n;
    int temp, awal, akhir, tengah, bilangan;
    // proses penginputan data
    cout << "Banyak bilangan : ";
    cin >> n;
    for (i = 0; i < n; i++) {
        cout << "Elemen ke-" << i << "= ";
        cin >> nilai[i];
    }
    cout << "\nElemen Sebelumnya diurut = ";
    for (i = 0; i < n; i++)
        cout << setw(3) << nilai[i];
    // proses pengurutan data
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (nilai[i] > nilai[j]) {
                temp = nilai[i];
                nilai[i] = nilai[j];
                nilai[j] = temp;
            }
        }
    }
    cout << "\nElemen Setelah diurut = ";
    for (i = 0; i < n; i++)
        cout << setw(3) << nilai[i];
    cout << "\nindeks Elemen = ";
    for (i = 0; i < n; i++)
        cout << setw(3) << i;
    cout << "\nMasukan data yang akan anda cari : ";
    cin >> bilangan;
    // proses pencarian data
    awal = 0;
    akhir = n - 1;
    do {
        tengah = (akhir + awal) / 2;
        if (bilangan < nilai[tengah])
            akhir = tengah - 1;
        else
            awal = tengah + 1;
    } while ((akhir >= awal) && (nilai[tengah] != bilangan));
    if (nilai[tengah] == bilangan) {
        cout << "\nData " << bilangan << " ada dalam array ";
        cout << " pada posisi " << tengah;
    }
    else
        cout << "\nData " << bilangan << " tidak ada dalam array\n";
}
