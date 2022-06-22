#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int nilai[20];
    int i, j, n, l;
    int temp, u, iMin;
    cout << "Masukan Banyaknya Bilangan :";
    cin >> n;
    for (i = 0; i < n; i++) {
        cout << "Elemen ke-" << i << " : ";
        cin >> nilai[i];
    }
    
    cout << "\nData sebelum diurut :";
    for (i = 0; i < n; i++)
        cout << setw(3) << nilai[i];
        
    u = 0;
    for (i = 0; i < n; i++) {
        iMin = i;
        for (j = i; j < n; j++) 
            if (nilai[j] < nilai[iMin])
                iMin = j;
        temp = nilai[u];
        nilai[u] = nilai[iMin];
        nilai[iMin] = temp;
        u++;
        cout << endl;
        for (l = 0; l < n; l++)
            cout << setw(3) << nilai[l];
    }
    cout << "\nData Setelah di urut : ";
    for (i = 0; i < n; i++)
        cout << setw(3) << nilai[i];
}