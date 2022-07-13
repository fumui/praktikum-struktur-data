#include <iostream>
#include <iomanip>
using namespace std;
#define MaxS 10
struct Stack {
    char isi[MaxS];
    unsigned int Top;
};
void initStack(Stack &s);
void push(Stack &s, char Data);
void cetak(Stack s);
void pop(Stack &s, char &Hsl);

int main() {
    char huruf;
    Stack s;
    initStack(s);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Masukan karakter: ";
            cin >> huruf;
            push(s, huruf);
        }
        cetak(s);
        pop(s, huruf);
        cout << endl
             << "Yang Dihapus ........." << huruf;
        cetak(s);
        cout << endl;
    }
}
void initStack(Stack &s) { s.Top = 0; }
void push(Stack &s, char Data) {
    if (s.Top < MaxS) {
        s.isi[s.Top] = Data;
        s.Top++;
    }
    else
        cout << "Stack penuh..........";
}
void cetak(Stack s) {
    int i;
    cout << endl
         << "Isi Stack : ";
    if (s.Top != 0) 
        for (i = 0; i < s.Top; i++)
            cout << s.isi[i];
    else
        cout << "Stack Kosong …..";
}
void pop(Stack &s, char &Hsl){
    if (s.Top != 0){
        s.Top--;
        Hsl = s.isi[s.Top];
    }
    else
        cout << "Stack Kosong…..";
}