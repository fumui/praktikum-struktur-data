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
        
    for (int i = 1; i < n; i++){
        int key = i;
        while(key > 0 && nilai[key] > nilai[key-1]){
            int temp = nilai[key];
            nilai[key] = nilai[key-1];
            nilai[key-1] = temp;
            key--;
        }
    }
    cout << "\nData Setelah diurut : ";
    for (i = 0; i < n; i++)
        cout << setw(4) << nilai[i];
}