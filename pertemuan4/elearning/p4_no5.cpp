#include <iostream>
using namespace std;
struct Segitiga {
    int a, t, m;
    double getLuas(){
        return (double)(a * t) / 2;
    }
    int getKeliling(){
        return a + t + m;
    }
};
int main()
{
    Segitiga s;
    cout << "Program Menghitung Luas & Keliling Segitiga" << endl;
    cout << "===========================================" << endl;
    cout << "masukkan sisi alas segitiga: ";
    cin >> s.a;
    cout << "masukkan sisi tinggi segitiga: ";
    cin >> s.t;
    cout << "masukkan sisi miring segitiga: ";
    cin >> s.m;
    cout << "===========================================" << endl;
    cout << "luas segitiga    : " << s.getLuas() << endl;
    cout << "keliling segitiga: " << s.getKeliling() << endl;
}