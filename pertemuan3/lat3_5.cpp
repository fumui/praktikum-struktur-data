#include <iostream>
using namespace std;

struct Mahasiswa
{
    char nim[13], nama[25], nilaiHuruf;
    float nilaiTugas, nilaiUTS, nilaiUAS, nilaiAkhir;
    
    void hitungNilai()
    {
        this->nilaiAkhir = (20 * nilaiTugas/100) + (35 * nilaiUTS/100) + (45 * nilaiUAS/100);
        this->nilaiHuruf = nilaiAkhir > 85 ? 'A' : 
                           nilaiAkhir > 70 ? 'B' : 
                           nilaiAkhir > 55 ? 'C' : 
                           nilaiAkhir > 40 ? 'D' : 'E';
    };
};
int main()
{
    Mahasiswa mhs;
    cout << "NIM   : "; cin.getline(mhs.nim, 13);
    cout << "Nama  : "; cin.getline(mhs.nama, 25);
    cout << "Nilai : \n";
    cout << "\tTugas : "; cin >> mhs.nilaiTugas;
    cout << "\tUTS   : "; cin >> mhs.nilaiUTS;
    cout << "\tUAS   : "; cin >> mhs.nilaiUAS;
    cin.ignore();
    mhs.hitungNilai();

    cout << "\n\nMencetak Kembali Nilai Mahasiswa\n\n";
    cout << "NIM  : " << mhs.nim;
    cout << "\nNama : " << mhs.nama;
    cout << "\nNilai : \n";
    cout << "\n\tTugas : " << mhs.nilaiTugas;
    cout << "\n\tUTS   : " << mhs.nilaiUTS;
    cout << "\n\tUAS   : " << mhs.nilaiUAS;
    cout << "\n\tAkhir : " << mhs.nilaiAkhir;
    cout << "\n\tHuruf : " << mhs.nilaiHuruf;
}
