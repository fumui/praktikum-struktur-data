#include <iostream>
#include <iomanip>
using namespace std;

void cetak(int data[], int n) {
    int i;
    for (i = 0; i < n; i++)
        cout << setw(3) << data[i];
    cout << "\n";
}

int partisi(int data[], int p, int r) {
    int x, i, j, temp;
    x = data[p];
    i = p;
    j = r;
    while (1) {
        while (data[j] > x)
            j--;
        while (data[i] < x)
            i++;
        if (i < j) {
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        } else
            return j;
    }
}

void quickSort(int data[], int p, int r) {
    int q;
    if (q < r) {
        q = partisi(data, p, r);
        quickSort(data, p, q);
        quickSort(data, q + 1, r);
    }
}
int main() {
    int nilai[20];
    int i, n;
    cout << "Masukan Banyak Bilangan : ";
    cin >> n;
    for (i = 0; i < n; i++) {
        cout << "Elemen ke-" << i << " : ";
        cin >> nilai[i];
    }
    cout << "\nData Sebelum di urut : ";
    cetak(nilai, n);
    cout << endl;
    quickSort(nilai, 0, n - 1);
    cout << "\nData Setelah di urut : ";
    cetak(nilai, n);
}