#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    bool running = true;
    do {
        system("cls");
        cout << "Menu:" << endl;
        cout << "1. lat11_1" << endl;
        cout << "2. lat11_2" << endl;
        cout << "3. lat12_1" << endl;
        cout << "4. Keluar" << endl;
        cout << "pilihan: ";
        int pilihan;
        cin >> pilihan;

        if(pilihan == 1)
            system("lat11_1");
        else if(pilihan == 2)
            system("lat11_2");
        else if(pilihan == 3)
            system("lat12_1");
        else if(pilihan == 4)
            running = false;
        else cout << "maaf, pilihan anda salah, silahkan ulangi lagi";
        
        cout << endl;
        system("pause");
    } while(running);
}