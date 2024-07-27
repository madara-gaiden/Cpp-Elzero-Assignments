#include <iostream>
using namespace std;

int plusandmultiply(int numbers[], int numssize) {
    int i, even,odd, total;
    i = even = total = 0;
    odd = 1;
    for(;i < numssize;) {
        if(numbers[i] % 2 == 0){
            even+=numbers[i];
        } else {
            odd*=numbers[i];
        }
        i++;
    }
    return total = even + odd;
}

int main()
{
    int numbers[] = { 10, 20, 3, 30, 5, 7, 40 };
    int numssize = size(numbers);
    cout << plusandmultiply(numbers, numssize) << "\n";
    return 0;
}
