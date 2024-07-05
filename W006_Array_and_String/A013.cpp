#include <iostream>
using namespace std;

int main(){
    string fName = "Elzero ";
    string mName = "Web ";
    string lName = "School\n";

    //Methode 1
    cout << fName << mName << lName;

    //Methode 2
    cout << fName + mName + lName;
    
    //Methode 3
    cout << fName.append(mName.append(lName));
    return 0;
}