#include <iostream>
#include <iomanip>
using namespace std;
typedef struct node *simpul;
struct node{ char Isi; simpul Next; };
void sisipBelakang(simpul &l, char elemen);
void hapusDepan(simpul &l);
void cetak(simpul l);
int main() {
    char huruf, huruf2;
    int pilihan;
    bool running = true;
    simpul l = NULL; // Pastikan Bahwa l kosong
    do {
        system("cls");
        cout << "== OPERASI QUEUE PADA SINGLE LINKED LIST ==" << endl << endl; 
        cetak(l);
        cout << endl << "Menu: " << endl;
        cout << "1. Tambah antrian" << endl;
        cout << "2. Kurangi antrian" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilihan: "; cin >> pilihan;
        if (pilihan == 1) {
            cout << "Masukan Huruf: ";
            cin >> huruf;
            sisipBelakang(l, huruf);
        } else if (pilihan == 2) {
            hapusDepan(l);
            cout << "Setelah hapus simpul: ";
            cetak(l);
            cout << endl;
        } else if (pilihan == 3) {
            running = false;
            system("pause");
        } else 
            cout << "Maaf pilihan anda salah";
    } while (running);
}
void sisipBelakang(simpul &l, char elemen) {
    simpul bantu, baru;
    baru = (simpul)malloc(sizeof(simpul));
    baru->Isi = elemen;
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
void cetak(simpul l) {
    simpul bantu;
    if (l == NULL)
        cout << "Linked List Kosong ........" << endl;
    else {
        bantu = l;
        cout << "Isi Linked List : ";
        while (bantu->Next != NULL) {
            cout << bantu->Isi << "-->";
            bantu = bantu->Next;
        }
        cout << bantu->Isi;
    }
}
void hapusDepan(simpul &l) {
    simpul Hapus;
    if (l == NULL)
        cout << "Linked List Kosong.............";
    else {
        Hapus = l;
        l = l->Next;
        Hapus->Next = NULL;
        free(Hapus);
    }
}