#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    bool running = true;
    do {
        system("cls");
        cout << "Menu:" << endl;
        cout << "1. lat10_1" << endl;
        cout << "2. lat10_2" << endl;
        cout << "3. Keluar" << endl;
        cout << "pilihan: ";
        int pilihan;
        cin >> pilihan;
        switch(pilihan){
            case 1:
                system("lat10_1");
                break;
            case 2:
                system("lat10_2");
                break;
            case 3:
                running = false;
                break;
            default:
                cout << "maaf, pilihan anda salah, silahkan ulangi lagi";
                break;
        } 
        cout << endl;
        system("pause");
    } while(running);
}