#include <iostream>
using namespace std;

int main(){
    int vals[] =  {100, 200, 600, 200, 100};
    int last = (sizeof(vals)/sizeof(vals[0]) - 1);
    if (vals[0] == vals[last] && vals[1] == vals[last - 1])
        cout << "Array Is Palindrome\n";
    else
        cout << "Array Is Not Palindrome\n";

    return 0;
}