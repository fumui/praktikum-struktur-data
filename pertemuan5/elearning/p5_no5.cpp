#include <iostream>
using namespace std;
struct Item { int value; };
int findIndex(Item stack[], int* length, Item key)
{
    for (int i = 0; i < *length; i++)
        if (stack[i].value == key.value)
            return i;
    return -1;
}
int main()
{
    int length = 10;
    Item stack[] = {{1},{2},{3},{4},{5},{6},{7},{8},{9},{10}};
    cout << "findIndex key 4: " << findIndex(stack, &length, {4});
}