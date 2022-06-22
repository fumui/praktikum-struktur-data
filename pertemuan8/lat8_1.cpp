#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int nilai[20];
    int i, j, n, l;
    int temp, u, iMax;
    cout << "Masukan Banyaknya Bilangan :";
    cin >> n;
    for (i = 0; i < n; i++) {
        cout << "Elemen ke-" << i << " : ";
        cin >> nilai[i];
    }
    
    cout << "\nData sebelum diurut :";
    for (i = 0; i < n; i++)
        cout << setw(3) << nilai[i];
        
    u = n - 1;
    for (i = 0; i <= n - 2; i++) {
        iMax = 0;
        for (j = 1; j <= u; j++) 
            if (nilai[j] > nilai[iMax])
                iMax = j;
        temp = nilai[u];
        nilai[u] = nilai[iMax];
        nilai[iMax] = temp;
        u--;
        cout << endl;
        for (l = 0; l < n; l++)
            cout << setw(3) << nilai[l];
    }
    cout << "\nData Setelah di urut : ";
    for (i = 0; i < n; i++)
        cout << setw(3) << nilai[i];
}