#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
#define MaxS 100
struct Stack {
    char isi[MaxS];
    unsigned int Top;
};
void initStack(Stack &s);
void push(Stack &s, char data);
void pop(Stack &s, char &hasil);
void balikKalimat(string &asal, string &hasil);
int main() {
    string kalimat, kalimatTerbalik;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);
    balikKalimat(kalimat, kalimatTerbalik);
    if (kalimat == kalimatTerbalik)
        cout << "Kalimat tersebut merupakan palindrom" << endl;
    else 
        cout << "Kalimat tersebut bukan merupakan palindrom" << endl;
}
void initStack(Stack &s) { s.Top = 0; }
void push(Stack &s, char data) {
    if (s.Top < MaxS) {
        s.isi[s.Top] = data;
        s.Top++;
    }
    else
        cout << "Stack penuh..........";
}
void pop(Stack &s, char &hasil){
    if (s.Top != 0){
        s.Top--;
        hasil = s.isi[s.Top];
    }
    else
        cout << "Stack Kosong…..";
}
void balikKalimat(string &asal, string &hasil){
    Stack s;
    initStack(s);
    for (int i = 0; i < asal.size(); i++) 
        push(s, asal[i]);
    while (s.Top > 0) {
        char huruf;
        pop(s, huruf);
        hasil += huruf;
    }
}