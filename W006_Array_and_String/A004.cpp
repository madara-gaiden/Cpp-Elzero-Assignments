#include <iostream>
using namespace std;

int main(){
    int vals[]{'x', 'x', 'x', 'x', 'x'};
    int total = (sizeof(vals)/sizeof(vals[0]));
    int middle = total/2;
    int last = total - 1;
    cout << "Type Number 1 : ";
    cin >> vals[0];
    cout << "Type Number 2 : ";
    cin >> vals[1];
    cout << "Type Number 3 : ";
    cin >> vals[2];
    cout << "Type Number 4 : ";
    cin >> vals[3];
    cout << "Type Number 5 : ";
    cin >> vals[4];

    if (vals[0] + vals[last] > vals[middle])
        cout << "First Number + Last Number Is Larger Than Middle Number";
    else if (vals[1] + vals[last - 1] > vals[middle])
        cout << "Second Number + Before Last Number Is Larger Than Middle Number";
    else
        cout << "Middle Number Is The Largest";
    return 0;      
}