#include <iostream>
#include <cctype>
using namespace std;

string swapping(string text){
    int textSize = size(text);
    int i = 0;
    for(;i < textSize;i++){
        if(text[i] == char(72)) {
            cout << text[i];
        }
        else if (text[i] == char(104)) {
            cout << text[i];
        }
        else if(isupper(text[i])) {
            cout << char(tolower(text[i]));
        }
        else {
            cout << char(toupper(text[i]));
        }
    }
    return "\n";
}

int main()
{
    cout << swapping("hero Of THe PROgramming") << "\n"; // hERO oF tHE proGRAMMING
    return 0;
}
