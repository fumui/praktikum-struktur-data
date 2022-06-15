#include <stdio.h>
#include <iostream>
using namespace std;

struct Mahasiswa
{
    char nim[13];
    char nama[25];
    char alamat[40];
    short umur;
};
void baca(Mahasiswa &mhs);
void cetak(Mahasiswa &mhs);
int main()
{
    Mahasiswa mhs;
    cout << "Membaca Nilai Anggota Struktur \n";
    baca(mhs);
    cout << "\nMencetak Nilai Anggota Struktur ";
    cetak(mhs);
}
void baca(Mahasiswa &mhs)
{
    cout << "NIM : ";
    cin.getline(mhs.nim, 13);
    cout << "Nama :";
    cin.getline(mhs.nama, 25);
    cout << "Alamat :";
    cin.getline(mhs.alamat, 40);
    cout << "Umur :";
    cin >> mhs.umur;
}
void cetak(Mahasiswa &mhs)
{
    cout << "\nNim : " << mhs.nim;
    cout << "\nNama :" << mhs.nama;
    cout << "\nAlamat :" << mhs.alamat;
    cout << "\nUmur :" << mhs.umur;
}
