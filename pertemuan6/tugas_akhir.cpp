#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> search(vector<int>& arr, int x){
    vector<int> foundIndexes = {};
    for (int i =0; i < arr.size(); i++) {
        if (arr[i] == x){
            foundIndexes.push_back(i);
        }
    }
    return foundIndexes;
}
int main()
{
    vector<int> arr = {
        34,  8, 50, 74, 87, 
        90, 12, 25, 20, 30, 
        35, 45, 40, 22, 29, 
        72, 60, 55, 53, 12, 
        32, 33, 12, 41, 12
    };
    vector<int> keys = {12, 15, 37};
    for (auto &&i : keys)
    {
        cout<< "mencari " << i;
        vector<int> findings = search(arr, i);
        if (findings.size() == 0){
            cout << ": tidak ditemukan" << endl;
            continue;
        }
        cout << ": ditemukan sebanyak " << findings.size() << " kali. Pada index ";
        for (auto &&finding : findings)
            cout << finding << " ";
        cout << endl;
    }
}