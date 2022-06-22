#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    bool running = true;
    do {
        system("cls");
        cout << "Menu:" << endl;
        cout << "1. lat7_1" << endl;
        cout << "2. lat7_2" << endl;
        cout << "3. lat7_3" << endl;
        cout << "4. Keluar" << endl;
        cout << "pilihan: ";
        int pilihan;
        cin >> pilihan;
        switch(pilihan){
            case 1:
            system("lat7_1");
            cout << endl;
            system("pause");
            break;
            case 2:
            system("lat7_2");
            cout << endl;
            system("pause");
            break;
            case 3:
            system("lat7_3");
            cout << endl;
            system("pause");
            break;
            default:
            if(pilihan != 4)
                cout << "maaf, pilihan anda salah, silahkan ulangi lagi" << endl;
            else 
                running = false;
            system("pause");
            break;
        } 
    } while(running);
}