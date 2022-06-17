#include <iostream>
#include <iomanip>
using namespace std;

void cetak(int data[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << setw(3) << data[i];
    cout << "\n";
}

int partisi(int data[], int low, int high)
{
    int pivot, i, j, temp;
    pivot = data[low];
    i = high+1;
    cout << "low: " << low << endl;
    cout << "high: " << high << endl;
    for (j = high; j > low; j--){
        if (data[j] > pivot) {
            i--;
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
            cetak(data, 10);
        }
    }
    temp = data[i];
    data[i] = data[low];
    data[low] = temp;
    cetak(data, 10);
    cout << "i: " << i << endl;
    cout << "j: " << j << endl;
    return i;
}
void quickSort(int data[], int start, int end)
{
    int q;
    if (start < end) {
        q = partisi(data, start, end);
        quickSort(data, start, q);
        quickSort(data, q + 1, end);
    }
}
int main()
{
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