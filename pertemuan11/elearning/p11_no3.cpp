#include <iostream>
#include <iomanip>
using namespace std;
#define MaxS 10
struct Stack {
    char isi[MaxS];
    unsigned int Top;
};
void initStack(Stack &s) { s.Top = 0; }
bool push(Stack &s, char Data) {
    if (s.Top < MaxS) {
        s.isi[s.Top] = Data;
        s.Top++;
        return true;
    }
    cout << "Stack penuh.........."; 
    return false;
}
int main() {
    char huruf;
    Stack s;
    initStack(s);
    cout << "isi stack hingga penuh: " << endl;
    bool belumPenuh;
    do {
        cout << "Masukan karakter: ";
        cin >> huruf;
        belumPenuh = push(s, huruf);
    } while(belumPenuh);
}