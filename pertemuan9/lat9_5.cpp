#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    bool running = true;
    do {
        system("cls");
        cout << "Menu:" << endl;
        cout << "1. lat9_1" << endl;
        cout << "2. lat9_2" << endl;
        cout << "3. lat9_3" << endl;
        cout << "4. lat9_4" << endl;
        cout << "5. Keluar" << endl;
        cout << "pilihan: ";
        int pilihan;
        cin >> pilihan;
        switch(pilihan){
            case 1:
                system("lat9_1");
                break;
            case 2:
                system("lat9_2");
                break;
            case 3:
                system("lat9_3");
                break;
            case 4:
                system("lat9_4");
                break;
            case 5:
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