#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    while (true) {
        system("cls");
        cout << "Menu:" << endl;
        cout << "1. lat8_1" << endl;
        cout << "2. lat8_2" << endl;
        cout << "3. lat8_3" << endl;
        cout << "4. lat8_4" << endl;
        cout << "5. Keluar" << endl;
        cout << "pilihan: ";
        int pilihan;
        cin >> pilihan;
        if (pilihan == 1)
            system("lat8_1");
        else if (pilihan == 2)
            system("lat8_2");
        else if (pilihan == 3)
            system("lat8_3");
        else if (pilihan == 4)
            system("lat8_4");
        else if(pilihan == 5)
            break;
        else 
            cout << "maaf, pilihan anda salah, silahkan ulangi lagi";
        cout << endl;
        system("pause");
    }
}