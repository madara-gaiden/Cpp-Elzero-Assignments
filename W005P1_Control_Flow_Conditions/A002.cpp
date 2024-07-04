#include <iostream>
using namespace std;

int main(){
    int age,points;
    cout << "Age : ";
    cin >> age;
    cout << "Points : ";
    cin >> points;

    if (age > 18)
        cout << "Yes Age Is Ok\n";
    else
        cout << "No Age Is Not Ok\n";
    if (points > 500)
        cout << "Yes Points Is Ok\n";
    else
        cout << "No Points Is Not Ok\n";
}