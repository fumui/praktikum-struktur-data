#include <iostream>
#include <iomanip>
using namespace std;
typedef struct node *simpul;
struct node
{
    char Isi;
    simpul Next;
};

void sisipDepan(simpul &l, char elemen);
void sisipBelakang(simpul &l, char elemen);
void sisipTengah(simpul &l, char elemen1, char elemen2);
void sisipTengah2(simpul &l, char elemen1, char elemen2);
void hapusDepan(simpul &l);
void hapusBelakang(simpul &l);
void hapusTengah(simpul &l, char elemen);
void cetak(simpul l);

int main()
{
    char huruf, huruf2;
    simpul l = NULL; // Pastikan Bahwa l kosong
    cout << "== OPERASI PADA SINGLE LINKED LIST ==" << endl
         << endl;
         
    cout << "Penyisipan simpul di depan" << endl;
    cout << "Masukan Huruf: ";
    cin >> huruf;
    sisipDepan(l, huruf);
    cout << "Masukan Huruf: ";
    cin >> huruf;
    sisipDepan(l, huruf);
    cout << "Masukan Huruf: ";
    cin >> huruf;
    sisipDepan(l, huruf);
    cout << "Masukan Huruf: ";
    cin >> huruf;
    sisipDepan(l, huruf);
    cetak(l);
    cout << endl;

    cout << endl << "Penyisipan simpul di belakang" << endl;
    cout << "Masukan Huruf: ";
    cin >> huruf;
    sisipBelakang(l, huruf);
    cout << "Masukan Huruf: ";
    cin >> huruf;
    sisipBelakang(l, huruf);
    cout << "Masukan Huruf: ";
    cin >> huruf;
    sisipBelakang(l, huruf);
    cout << "Masukan Huruf: ";
    cin >> huruf;
    sisipBelakang(l, huruf);
    cetak(l);
    cout << endl;
    
    cout << endl << "Penyisipan simpul di tengah setelah huruf lain" << endl;
    cout << "Masukan Huruf: ";
    cin >> huruf;
    cout << "Disisip Setelah Huruf: ";
    cin >> huruf2;
    cout << huruf << " Disisip Setelah " << huruf2 << endl;
    sisipTengah(l, huruf, huruf2);
    cetak(l);
    cout << endl;
    
    cout << endl << "Penyisipan simpul di tengah sebelum huruf lain" << endl;
    cout << "Masukan Huruf: ";
    cin >> huruf;
    cout << "Disisip Sebelum Huruf: ";
    cin >> huruf2;
    cout << huruf << " Disisip Sebelum " << huruf2 << endl;
    sisipTengah2(l, huruf, huruf2);
    cetak(l);
    cout << endl;
    
    cout << endl <<"Setelah Hapus Simpul Depan " << endl;
    hapusDepan(l);
    cetak(l);
    cout << endl;
    
    cout << endl << "Setelah Hapus Simpul Belakang " << endl;
    hapusBelakang(l);
    cetak(l);
    cout << endl;
    
    cout <<  endl << "Masukkan Huruf Tengah Yang akan dihapus: ";
    cin >> huruf;
    hapusTengah(l, huruf);
    cetak(l);
}

void sisipDepan(simpul &l, char elemen)
{
    simpul baru; // = new simpul ;
    baru = (simpul)malloc(sizeof(simpul));
    baru->Isi = elemen;
    baru->Next = NULL;
    if (l == NULL)
        l = baru;
    else
    {
        baru->Next = l;
        l = baru;
    }
}

void sisipTengah(simpul &l, char elemen1, char elemen2)
{
    simpul bantu, baru;
    baru = (simpul)malloc(sizeof(simpul));
    baru->Isi = elemen1;
    baru->Next = NULL;
    if (l == NULL)
        cout << "List Kosong ............." << endl;
    else
    {
        bantu = l;
        while (bantu->Isi != elemen2)
            bantu = bantu->Next;
        baru->Next = bantu->Next;
        bantu->Next = baru;
    }
}

void sisipTengah2(simpul &l, char elemen1, char elemen2)
{
    simpul bantu, baru;
    baru = (simpul)malloc(sizeof(simpul));
    baru->Isi = elemen1;
    baru->Next = NULL;
    if (l == NULL)
        cout << "List Kosong.............." << endl;
    else
    {
        bantu = l;
        while (bantu->Next->Isi != elemen2)
            bantu = bantu->Next;
        baru->Next = bantu->Next;
        bantu->Next = baru;
    }
}

void sisipBelakang(simpul &l, char elemen)
{
    simpul bantu, baru;
    baru = (simpul)malloc(sizeof(simpul));
    baru->Isi = elemen;
    baru->Next = NULL;
    if (l == NULL)
        l = baru;
    else
    {
        bantu = l;
        while (bantu->Next != NULL)
            bantu = bantu->Next;
        bantu->Next = baru;
    }
}

void cetak(simpul l)
{
    simpul bantu;
    if (l == NULL)
        cout << "Linked List Kosong ........" << endl;
    else
    {
        bantu = l;
        cout << "Isi Linked List : ";
        while (bantu->Next != NULL)
        {
            cout << bantu->Isi << "-->";
            bantu = bantu->Next;
        }
        cout << bantu->Isi;
    }
}

void hapusDepan(simpul &l)
{
    simpul Hapus;
    if (l == NULL)
        cout << "Linked List Kosong.............";
    else
    {
        Hapus = l;
        l = l->Next;
        Hapus->Next = NULL;
        free(Hapus);
    }
}

void hapusBelakang(simpul &l)
{
    simpul bantu, hapus;
    if (l == NULL)
        cout << "Linked List Kosong.............";
    else
    {
        bantu = l;
        while (bantu->Next->Next != NULL)
            bantu = bantu->Next;
        hapus = bantu->Next;
        bantu->Next = NULL;
        free(hapus);
    }
}

void hapusTengah(simpul &l, char elemen)
{
    simpul bantu, hapus;
    if (l == NULL)
        cout << "Linked List Kosong.............";
    else
    {
        bantu = l;
        while (bantu->Next->Isi != elemen)
            bantu = bantu->Next;
        hapus = bantu->Next;
        bantu->Next = bantu->Next->Next;
        hapus->Next = NULL;
        free(hapus);
    }
}