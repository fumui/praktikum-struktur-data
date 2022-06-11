#include <iostream>
#include <string>
using namespace std;
struct Tinggal{
    string jalan, kodePos, kota;
};
struct Tanggal{
    int tanggal, bulan, tahun;
};
struct Biodata{
    string nip, nama, jabatan, agama, unitKerja;
    Tinggal alamat;
    Tanggal tanggalLahir, tanggalMulaiKerja;
};
int main(){
    Biodata staff[2];
    for (int i = 0; i < 2; i++){
        cout << "Masukkan biodata pekerja ke-" << i + 1 << "\n";
        cout << "NIP                  : "; getline(cin, staff[i].nip);
        cout << "Nama                 : ";  getline(cin, staff[i].nama);
        cout << "Agama                : ";  getline(cin, staff[i].agama);
        cout << "Tanggal Lahir        : \n";
        cout << "\tTanggal            : "; cin >> staff[i].tanggalLahir.tanggal;
        cout << "\tBulan              : "; cin >> staff[i].tanggalLahir.bulan;
        cout << "\tTahun              : "; cin >> staff[i].tanggalLahir.tahun;
        cin.ignore();
        cout << "Alamat               : \n";
        cout << "\tJalan              : "; getline(cin, staff[i].alamat.jalan);
        cout << "\tKode Pos           : "; getline(cin, staff[i].alamat.kodePos);
        cout << "\tKota               : "; getline(cin, staff[i].alamat.kota);
        cout << "Jabatan              : "; getline(cin, staff[i].jabatan);
        cout << "Unit Kerja           : "; getline(cin, staff[i].unitKerja);
        cout << "Tanggal Mulai Kerja : \n";
        cout << "\tTanggal            : "; cin >> staff[i].tanggalMulaiKerja.tanggal;
        cout << "\tBulan              : "; cin >> staff[i].tanggalMulaiKerja.tanggal;
        cout << "\tTahun              : "; cin >> staff[i].tanggalMulaiKerja.tanggal;
        cin.ignore();
    }
    for (int i = 0; i < 2; i++){
        cout << "\n=====================================================================\n";
        cout << "Biodata pekerja ke-" << i + 1 << "\n";
        cout << "NIP                  : " << staff[i].nip << "\n";
        cout << "Nama                 : " << staff[i].nama << "\n";
        cout << "Agama                : " << staff[i].agama << "\n";
        cout << "Tanggal Lahir        : "
             << staff[i].tanggalLahir.tanggal << "-"
             << staff[i].tanggalLahir.bulan << "-"
             << staff[i].tanggalLahir.tahun << "\n";
        cout << "Alamat               : \n";
        cout << "\tJalan              : " << staff[i].alamat.jalan << "\n";
        cout << "\tKode Pos           : " << staff[i].alamat.kodePos << "\n";
        cout << "\tKota               : " << staff[i].alamat.kota << "\n";
        cout << "Jabatan              : " << staff[i].jabatan << "\n";
        cout << "Unit Kerja           : " << staff[i].unitKerja << "\n";
        cout << "Tanggal Mulai Kerja : "
             << staff[i].tanggalLahir.tanggal << "-"
             << staff[i].tanggalLahir.bulan << "-"
             << staff[i].tanggalLahir.tahun << "\n";
    }
}