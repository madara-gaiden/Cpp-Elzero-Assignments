#include <iostream>
using namespace std;

int main(){
    int num1 = 1;
    int num2 = 0;
    int num3 = 1;
    int num4 = 23;

    if (num1 > num2)
        cout << "Condition 1 Is True\n";
    else
        cout << "Condition 1 Is False\n";

    if (num1 > num2 && num1 < num4)
        cout << "Condition 2 Is True\n";
    else
        cout << "Condition 2 Is False\n";

    if (num1 > num2 && num1 == num3)
        cout << "Condition 3 Is True\n";
    else
        cout << "Condition 3 Is False\n";

    if (num1 + num2 < num4)
        cout << "Condition 4 Is True\n";
    else
        cout << "Condition 4 Is False\n";

    if (num1 + num3 < num4)
        cout << "Condition 5 Is True\n";
    else
        cout << "Condition 5 Is False\n";

    if (num1 + num2 + num3 < num4)
        cout << "Condition 6 Is True\n";
    else
        cout << "Condition 6 Is False\n";

    if (num4 - (num1 + num3) + num2 == 21)
        cout << "Condition 7 Is True\n";
    else
        cout << "Condition 7 Is False\n";

    return 0;
}