#include <iostream>
using namespace std;
struct Mahasiswa
{
    char nim[13];
    char nama[25];
    char alamat[40];
    short umur;
};

int main()
{
    Mahasiswa mhs[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Nim: ";
        cin >> mhs[i].nim;
        cout << "Nama:";
        cin >> mhs[i].nama;
        cout << "Alamat: ";
        cin >> mhs[i].alamat;
        cout << "Umur: ";
        cin >> mhs[i].umur;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "\n\nNim: " << mhs[i].nim;
        cout << "\n\nNama: " << mhs[i].nama;
        cout << "\n\nAlamat: " << mhs[i].alamat;
        cout << "\n\nUmur: " << mhs[i].umur;
    }
}
