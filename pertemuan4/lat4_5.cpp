#include <iostream>
using namespace std;

int main()
{
    const char *x = "UNPAM";
    while(*x){
        cout << *x++;
    }
}