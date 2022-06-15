#include <iostream>
using namespace std;

void tukar(int *a, int *b);
int main(){
    int a = 8, b = -5;
    cout << "Nilai a dan b sebelumnya : " << a << " & " << b;
    tukar(&a, &b);
    cout << "\nNilai a dan b Setelah ditukar : " << a << " & " << b;
}
void tukar(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}