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
    simpul l = NULL; // Pastikan Bahwa l kosong
    cout << "== OPERASI PADA SINGLE LINKED LIST ==" << endl << endl; 
    cout << "Penyisipan simpul" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Masukan Huruf: ";
        cin >> huruf;
        sisipBelakang(l, huruf);
    }
    cetak(l);
    cout << endl;
    for (int i = 0; i < 3; i++) {
        hapusDepan(l);
        cout << "Setelah hapus simpul: ";
        cetak(l);
        cout << endl;
    }
    cout << "Penyisipan simpul" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Masukan Huruf: ";
        cin >> huruf;
        sisipBelakang(l, huruf);
    }
    cetak(l);
    cout << endl;
    for (int i = 0; i < 2; i++) {
        hapusDepan(l);
        cout << "Setelah hapus simpul: ";
        cetak(l);
        cout << endl;
    }
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