#include <iostream>
#include <iomanip>
using namespace std;
typedef struct node *simpul;
struct node {
    char isi;
    simpul next;
};
void sisipBelakang(simpul &l, char elemen);
void hapusBelakang(simpul &l);
void cetak(simpul l);
int main() {
    char huruf;
    simpul l = NULL; // Pastikan bahwa l kosong
    cout << "Operasi Single Linked List Pada Stack\n\n";
    cout << "Penyiapan Stack " << endl;
    for (int i = 0; i < 6; i++) {
        cout << "Masukan elemen: ";
        cin >> huruf;
        sisipBelakang(l, huruf);
    }
    cetak(l);
    cout << endl;
    for (int i = 0; i < 4; i++) {
        cout << "Hapus elemen ";
        hapusBelakang(l);
        cetak(l);
    }
}
void sisipBelakang(simpul &l, char elemen) {
    simpul bantu, baru;
    baru = (simpul)malloc(sizeof(simpul));
    baru->isi = elemen;
    baru->next = NULL;
    if (l == NULL)
        l = baru;
    else
    {
        bantu = l;
        while (bantu->next != NULL)
            bantu = bantu->next;
        bantu->next = baru;
    }
}
void hapusBelakang(simpul &l) {
    simpul bantu, hapus;
    if (l == NULL)
        cout << "Linked List Kosong...........";
    else {
        bantu = l;
        while (bantu->next->next != NULL)
            bantu = bantu->next;
        hapus = bantu->next;
        bantu->next = NULL;
        free(hapus);
    }
}
void cetak(simpul l) {
    simpul bantu;
    if (l == NULL)
        cout << "Linked List Kosong........"<< endl;
    else {
        bantu = l;
        cout << endl << "Isi Linked List : ";
        while (bantu->next != NULL) {
            cout << bantu->isi << "->";
            bantu=bantu->next;
        }
        cout << bantu->isi << endl;
    }
}