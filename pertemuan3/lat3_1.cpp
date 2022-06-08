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
    Mahasiswa mhs;
    cout << "Nim: ";
    cin.getline(mhs.nim, 13);
    cout << "Nama: ";
    cin.getline(mhs.nama, 25);
    cout << "Alamat: ";
    cin.getline(mhs.alamat, 40);
    cout << "Umur: ";
    cin >> mhs.umur;
    cout << "\n\n\nNim: " << mhs.nim;
    cout << "\nNama: " << mhs.nama;
    cout << "\nAlamat: " << mhs.alamat;
    cout << "\nUmur: " << mhs.umur;
}
