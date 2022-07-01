#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
#define MaxS 32
struct Stack {
    int isi[MaxS];
    unsigned int Top;
};
void initStack(Stack &s);
void push(Stack &s, int Data);
void pop(Stack &s, int &Hsl);
int main() {
    double bilangan, hasilBagi;
    Stack s;

    initStack(s);
    cout << "Masukkan bilangan desimal: ";
    cin >> bilangan;
    hasilBagi = bilangan;
    do{
        if ( ((int)hasilBagi) % 2 == 1) push(s,1);
        else push(s,0);
        hasilBagi = floor( hasilBagi / 2 );
    } while(hasilBagi > 0);

    cout << "Hasil: ";
    while (s.Top > 0) {
        int val;
        pop(s, val);
        cout << val;
    }
}
void initStack(Stack &s) { s.Top = 0; }
void push(Stack &s, int Data) {
    if (s.Top < MaxS) {
        s.isi[s.Top] = Data;
        s.Top++;
    }
    else
        cout << "Stack penuh..........";
}
void pop(Stack &s, int &Hsl){
    if (s.Top != 0){
        s.Top--;
        Hsl = s.isi[s.Top];
    }
    else
        cout << "Stack Kosong…..";
}
