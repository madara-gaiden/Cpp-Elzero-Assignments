#include <iostream>
using namespace std;

int pricing (int allPhone, int usedPhone, int newPhonePrice, int taxes) {
    int newPhone = allPhone - usedPhone;
    int winFromNewPhone = newPhone * newPhonePrice;
    int usedPhonePrice = newPhonePrice - 200;
    int winFromUsedPhone = usedPhone * usedPhonePrice;
    int profitWithoutTax = winFromNewPhone + winFromUsedPhone;
    int profitWithTax = profitWithoutTax - (profitWithoutTax * taxes / 100);
    return profitWithTax;
}

int main()
{
    cout << pricing(50, 10, 800, 20) << "\n"; // 30400
    return 0;
}
