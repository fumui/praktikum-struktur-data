#include <iostream>
using namespace std;

int maksimum(int a, int b, int c);
int main()
{
    int a = 8, b = 12, c = -5;
    cout << "Nilai a = " << a;
    cout << "\nNilai b = " << b;
    cout << "\nNilai c = " << c;
    cout << "\nNilai Terbesar : " << maksimum(a, b, c);
}
int maksimum(int x, int y, int z)
{
    return x > y ? x : 
           y > z ? y : z;
}