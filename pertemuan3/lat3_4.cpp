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
    Mahasiswa Mhs[3];
    for(int i = 0; i < 3; i++){
        cout << "NIM : "; cin.getline(Mhs[i].nim, 13);
        cout << "Nama : "; cin.getline(Mhs[i].nama, 25);
        cout << "Alamat : \n";
        cout << "\tJalan : "; cin.getline(Mhs[i].alamat.jalan, 40);
        cout << "\tKota : "; cin.getline(Mhs[i].alamat.kota, 15);
        cout << "\tKode pos : "; cin.getline(Mhs[i].alamat.pos, 6);
        cout << "Tanggal Lahir : \n";
        cout << "\tTanggal : "; cin >> Mhs[i].tanggalLahir.tanggal;
        cout << "\tBulan : "; cin >> Mhs[i].tanggalLahir.bulan;
        cout << "\tTahun : "; cin >> Mhs[i].tanggalLahir.tahun;
        cin.ignore();
    }

    for(int i = 0; i < 3; i++){
        cout << "\n\nMencetak Kembali Nilai Anggota\n\n";
        cout << "NIM : " << Mhs[i].nim;
        cout << "\nNama : " << Mhs[i].nama;
        cout << "\nAlamat : \n";
        cout << "\n\tJalan : " << Mhs[i].alamat.jalan;
        cout << "\n\tKota : " << Mhs[i].alamat.kota;
        cout << "\n\tKode Pos : " << Mhs[i].alamat.pos;
        cout << "\nTanggal Lahir : " << Mhs[i].tanggalLahir.tanggal << "-";
        cout << Mhs[i].tanggalLahir.bulan << "-" << Mhs[i].tanggalLahir.tahun;
    }
}
