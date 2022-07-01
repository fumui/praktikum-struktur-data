#include <iostream>
#include <iomanip>
using namespace std;
typedef struct node *simpul;
struct node
{
    char isi;
    simpul kanan;
    simpul kiri;
};

void sisipDepan(simpul &dl, char elemen);
void sisipBelakang(simpul &dl, char elemen);
void sisipTengah(simpul &dl, char elemen1, char elemen2);
void sisipTengah2(simpul &dl, char elemen1, char elemen2);
void hapusDepan(simpul &dl);
void hapusBelakang(simpul &dl);
void hapusTengah(simpul &dl, char elemen);
void cetak(simpul dl);

int main()
{
    char huruf, huruf2;
    simpul dl = NULL; // Pastikan Bahwa dl kosong
    cout << "== OPERASI PADA DOUBLY LINKED LIST ==" << endl
         << endl;

    cout << "Penyisipan simpul di depan" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "Masukan Huruf : ";
        cin >> huruf;
        sisipDepan(dl, huruf);
    }
    cetak(dl);
    cout << endl;

    cout << endl
         << "Penyisipan simpul di belakang" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "Masukan Huruf : ";
        cin >> huruf;
        sisipBelakang(dl, huruf);
    }
    cetak(dl);
    cout << endl;

    cout << endl
         << "Penyisipan simpul di tengah setelah huruf lain" << endl;
    cout << "Masukan Huruf: ";
    cin >> huruf;
    cout << "Disisip Setelah Huruf: ";
    cin >> huruf2;
    cout << huruf << " Disisip Setelah " << huruf2 << endl;
    sisipTengah(dl, huruf, huruf2);
    cetak(dl);
    cout << endl;

    cout << endl
         << "Penyisipan simpul di tengah sebelum huruf lain" << endl;
    cout << "Masukan Huruf: ";
    cin >> huruf;
    cout << "Disisip Sebelum Huruf: ";
    cin >> huruf2;
    cout << huruf << " Disisip Sebelum " << huruf2 << endl;
    sisipTengah2(dl, huruf, huruf2);
    cetak(dl);
    cout << endl;

    cout << endl
         << "Setelah Hapus Simpul Depan " << endl;
    hapusDepan(dl);
    cetak(dl);
    cout << endl;

    cout << endl
         << "Setelah Hapus Simpul Belakang " << endl;
    hapusBelakang(dl);
    cetak(dl);
    cout << endl;

    cout << endl
         << "Masukkan Huruf Tengah Yang akan dihapus: ";
    cin >> huruf;
    hapusTengah(dl, huruf);
    cetak(dl);
}

void sisipDepan(simpul &dl, char elemen)
{
    simpul baru;
    baru = (simpul)malloc(sizeof(simpul));
    baru->isi = elemen;
    baru->kanan = NULL;
    baru->kiri = NULL;
    if (dl == NULL)
        dl = baru;
    else
    {
        baru->kanan = dl;
        dl->kiri = baru;
        dl = baru;
    }
}

void sisipTengah(simpul &dl, char elemen1, char elemen2)
{
    simpul bantu, baru;
    baru = (simpul)malloc(sizeof(simpul));
    baru->isi = elemen1;
    baru->kanan = NULL;
    baru->kiri = NULL;
    if (dl == NULL)
        cout << "List Kosong ............." << endl;
    else
    {
        bantu = dl;
        while (bantu->isi != elemen2)
            bantu = bantu->kanan;
        baru->kanan = bantu->kanan;
        baru->kiri = bantu;
        bantu->kanan->kiri = baru;
        bantu->kanan = baru;
    }
}

void sisipTengah2(simpul &dl, char elemen1, char elemen2)
{
    simpul bantu, baru;
    baru = (simpul)malloc(sizeof(simpul));
    baru->isi = elemen1;
    baru->kanan = NULL;
    baru->kiri = NULL;
    if (dl == NULL)
        cout << "List Kosong.............." << endl;
    else
    {
        bantu = dl;
        while (bantu->kanan->isi != elemen2)
            bantu = bantu->kanan;
        baru->kanan = bantu->kanan;
        baru->kiri = bantu;
        bantu->kanan->kiri = baru;
        bantu->kanan = baru;
    }
}

void sisipBelakang(simpul &dl, char elemen)
{
    simpul bantu, baru;
    baru = (simpul)malloc(sizeof(simpul));
    baru->isi = elemen;
    baru->kanan = NULL;
    baru->kiri = NULL;
    if (dl == NULL)
        dl = baru;
    else
    {
        bantu = dl;
        while (bantu->kanan != NULL)
            bantu = bantu->kanan;
        bantu->kanan = baru;
        baru->kiri = bantu;
    }
}

void cetak(simpul dl)
{
    simpul bantu;
    if (dl == NULL)
        cout << "Linked List Kosong ........" << endl;
    else
    {
        bantu = dl;
        cout << "isi Linked List : ";
        while (bantu->kanan != NULL)
        {
            cout << bantu->isi << "<= =>";
            bantu = bantu->kanan;
        }
        cout << bantu->isi;
    }
}

void hapusDepan(simpul &dl)
{
    simpul Hapus;
    if (dl == NULL)
        cout << "Linked List Kosong.............";
    else
    {
        Hapus = dl;
        dl = dl->kanan;
        dl->kiri = NULL;
        Hapus->kanan = NULL;
        free(Hapus);
    }
}

void hapusBelakang(simpul &dl)
{
    simpul bantu, hapus;
    if (dl == NULL)
        cout << "Linked List Kosong.............";
    else
    {
        bantu = dl;
        while (bantu->kanan->kanan != NULL)
            bantu = bantu->kanan;
        hapus = bantu->kanan;
        bantu->kanan = NULL;
        hapus->kiri = NULL;
        free(hapus);
    }
}

void hapusTengah(simpul &dl, char elemen)
{
    simpul bantu, hapus;
    if (dl == NULL)
        cout << "Linked List Kosong.............";
    else
    {
        bantu = dl;
        while (bantu->kanan->isi != elemen)
            bantu = bantu->kanan;
        hapus = bantu->kanan;
        bantu->kanan->kanan->kiri = bantu;
        bantu->kanan = bantu->kanan->kanan;
        hapus->kanan = NULL;
        hapus->kiri = NULL;
        free(hapus);
    }
}