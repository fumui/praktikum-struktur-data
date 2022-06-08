#include <iostream>
using namespace std;

struct Alamat
{
    char jalan[40], kota[15], pos[6];
};
struct Tanggal
{
    int tanggal, bulan, tahun;
};
struct Mahasiswa
{
    char nim[13], nama[25];
    Alamat alamat;
    Tanggal tanggalLahir;
};
int main()
{
    Mahasiswa Mhs;
    cout << "NIM : "; cin.getline(Mhs.nim, 13);
    cout << "Nama : "; cin.getline(Mhs.nama, 25);
    cout << "Alamat : \n";
    cout << "\tJalan : "; cin.getline(Mhs.alamat.jalan, 40);
    cout << "\tKota : "; cin.getline(Mhs.alamat.kota, 15);
    cout << "\tKode pos : "; cin.getline(Mhs.alamat.pos, 6);
    cout << "Tanggal Lahir : \n";
    cout << "\tTanggal : "; cin >> Mhs.tanggalLahir.tanggal;
    cout << "\tBulan : "; cin >> Mhs.tanggalLahir.bulan;
    cout << "\tTahun : "; cin >> Mhs.tanggalLahir.tahun;

    cout << "\n\nMencetak Kembali Nilai Anggota\n\n";
    cout << "NIM : " << Mhs.nim;
    cout << "\nNama : " << Mhs.nama;
    cout << "\nAlamat : \n";
    cout << "\n\tJalan : " << Mhs.alamat.jalan;
    cout << "\n\tKota : " << Mhs.alamat.kota;
    cout << "\n\tKode Pos : " << Mhs.alamat.pos;
    cout << "\nTanggal Lahir : " << Mhs.tanggalLahir.tanggal << "-";
    cout << Mhs.tanggalLahir.bulan << "-" << Mhs.tanggalLahir.tahun;
}
