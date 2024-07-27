#include <iostream>
using namespace std;

int firstnegative(int numbers[], int numssize) {
    int i = 0, maxN = numbers[0];
    for(;i < numssize;i++) {
        if(numbers[i] < 0) {
            if (numbers[i] <= maxN) {
                maxN = maxN;
            } else {
               maxN = numbers[i];
            }
        }
    }
    return maxN;
}

int main()
{
  int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0, -5, -10 }; // -5
    int numssize = size(numbers);
    cout << firstnegative(numbers, numssize) << "\n";
    return 0;
}
