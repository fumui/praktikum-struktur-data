#include <iostream>
using namespace std;

int maksimum(int x, int y)
{
    return x > y ? x : y;
}
int maksimum(int x, int y, int z)
{
    return maksimum(x, y) ? maksimum(x, z) : maksimum(y, z);
}
int main()
{
    int a = 8, b = -4, c = 12;
    cout << "Nilai a = " << a;
    cout << "\nNilai b = " << b;
    cout << "\nNilai Terbesar : " << maksimum(a, b);
    
    cout << "\nNilai c = " << c;
    cout << "\nNilai Terbesar : " << maksimum(a, b, c);
}