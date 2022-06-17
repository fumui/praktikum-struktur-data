#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int nilai[20];
    int i, j, k, n;
    int temp;
    bool tukar;
    cout << "Masukan Banyak Bilangan : ";
    cin >> n;
    for (i = 0; i < n; i++) {
        cout << "Elemen ke-" << i << " : ";
        cin >> nilai[i];
    }
    // Proses Cetak Sebelum diurutkan
    cout << "\nData sebelumnya diurut :";
    for (i = 0; i < n; i++)
        cout << setw(3) << nilai[i];
    // Proses Pengurutan
    i = 0;
    tukar = true;
    while ((i <= n - 2) && (tukar)) {
        tukar = false;
        for (j = n - 1; j >= i + 1; j--) {
            if (nilai[j] < nilai[j - 1]) {
                temp = nilai[j];
                nilai[j] = nilai[j - 1];
                nilai[j - 1] = temp;
                tukar = true;
                cout << "\nUntuk j = " << j << " : ";
                for (k = 0; k < n; k++)
                    cout << setw(3) << nilai[k];
            }
        }
        i++;
    }
    // Proses Cetak setelah diurutkan
    cout << "\nData setelah di urut : ";
    for (i = 0; i < n; i++)
        cout << setw(3) << nilai[i];
}