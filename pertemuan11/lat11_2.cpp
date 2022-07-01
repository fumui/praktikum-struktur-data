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
void push(Stack &s, char Data);
void pop(Stack &s, char &Hsl);
int main() {
    string kalimat;
    char huruf;
    Stack s;

    initStack(s);
    cout << "Masukkan kalimat yang akan dibalik: ";
    getline(cin, kalimat);
    
    for (int i = 0; i < kalimat.size(); i++) 
        push(s, kalimat[i]);
    
    cout << "Hasil: ";
    
    while (s.Top > 0) {
        pop(s, huruf);
        cout<<huruf;
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
void pop(Stack &s, char &Hsl){
    if (s.Top != 0){
        s.Top--;
        Hsl = s.isi[s.Top];
    }
    else
        cout << "Stack Kosong…..";
}
