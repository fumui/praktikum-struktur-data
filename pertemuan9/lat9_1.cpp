#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int nilai[20];
    int i, k, n, l;
    int temp, jarak, s;
    cout << "Masukan Banyak Bilangan : ";
    cin >> n;
    for (i = 0; i < n; i++){
        cout << "Elemen ke-" << i << " : ";
        cin >> nilai[i];
    }
    
    cout << "\nData sebelum diurut : ";
    for (i = 0; i < n; i++)
        cout << setw(4) << nilai[i];
        
    jarak = n / 2;
    cout << "\nJarak= " << jarak;
    while (jarak >= 1){
        do{
            s = 0;
            for (i = 0; i <= (n - jarak) - 1; i++){
                k = i + jarak;
                if (nilai[i] > nilai[k]){
                    temp = nilai[i];
                    nilai[i] = nilai[k];
                    nilai[k] = temp;
                    s = 1;
                    for (l = 0; l < n; l++)
                        cout << setw(4) << nilai[l];
                    cout << "\n\t";
                }
            }
        } while (s != 0);
        jarak /= 2;
        cout << "\nJarak= " << jarak;
    }
    cout << "\nData Setelah diurut : ";
    for (i = 0; i < n; i++)
        cout << setw(4) << nilai[i];
}