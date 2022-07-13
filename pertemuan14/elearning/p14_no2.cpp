#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
typedef struct node *simpul;
struct node{ string nama; int noAntrian; simpul Next; };
void enqueue(simpul &l, string orangBaru, int noAntrian) {
    simpul bantu, baru;
    baru = new node;
    baru->nama = orangBaru;
    baru->noAntrian = noAntrian;
    baru->Next = NULL;
    if (l == NULL)
        l = baru;
    else {
        bantu = l;
        while (bantu->Next != NULL)
            bantu = bantu->Next;
        bantu->Next = baru;
    }
}
void dequeue(simpul &l) {
    simpul Hapus;
    if (l == NULL)
        cout << "Antrian Kosong.............";
    else {
        Hapus = l;
        l = l->Next;
        Hapus->Next = NULL;
        free(Hapus);
    }
}
void cetak(simpul l) {
    simpul bantu;
    if (l == NULL)
        cout << "Antrian Kosong ........" << endl;
    else {
        bantu = l;
        cout << "Isi Antrian: ";
        while (bantu->Next != NULL) {
            cout << bantu->nama << " (" << bantu->noAntrian << ") -->";
            bantu = bantu->Next;
        }
        cout << bantu->nama << " (" << bantu->noAntrian << ") ";
    }
}
int estimasiWaktuTunggu(simpul &l, int noAntrian){
    simpul bantu;
    int estWaktuPerAntrian = 5;
    int hasilEst = 0;
    if (l == NULL)
        cout << "Antrian Kosong ........" << endl;
    else {
        bantu = l;
        while (bantu->noAntrian != noAntrian && bantu->Next != NULL) {
            bantu = bantu->Next;
            hasilEst += estWaktuPerAntrian;
        }
    }
    return estWaktuPerAntrian;
}
int main() {
    string nama;
    int pilihan, noAntrian = 0;;
    bool running = true, tellerMode = false;
    simpul l = NULL;
    do {
        cout << "== ANTRIAN BANK IRIT ADJA ==" << endl << endl; 
        cetak(l);
        cout << endl << "Menu " << (tellerMode ? "Teller:" : "Nasabah: " ) << endl;
        cout << "1. Tambah antrian" << endl;
        if (tellerMode) 
            cout << "2. Kurangi antrian" << endl;
        else 
            cout << "2. Teller Mode" << endl;
        cout << "3. Estimasi waktu antrian" << endl;
        cout << "99. Keluar" << endl;
        cout << "Pilihan: "; cin >> pilihan;
        if (pilihan == 1) {
            cout << "Masukan nama orang baru: ";
            cin.ignore(); getline(cin, nama);
            enqueue(l, nama, ++noAntrian);
        } else if (pilihan == 2 && tellerMode) {
            cout << "selesai melayani: " << l->nama << "(nomor antrian " << l->noAntrian << ")" << endl;
            dequeue(l);
            cetak(l);
            cout << endl;
        } else if (pilihan == 2 && !tellerMode) 
            tellerMode = true;
        else if (pilihan == 3) {
            cout << "Masukan nomor antrian: "; cin >> noAntrian;
            cout << "Estimasi waktu antrian anda: " << estimasiWaktuTunggu(l, noAntrian);
        } else if (pilihan == 99) 
            running = false;
        else 
            cout << "Maaf pilihan anda salah";
        cout << endl << endl;
    } while (running);
}