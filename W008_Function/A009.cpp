#include <iostream>
using namespace std;

int sumall(int numbers[], int numssize, int noneed) {
    int i = 0;
    int total = 0;
    for(;i < numssize; i++) {
        if(numbers[i] != noneed){
            total = total + numbers[i];
        }
    }
    return total;
}
    
int main()
{
    int numbers[] = { 13, 20, 3, 30, 5, 7, 40, 13 }; // 20 + 3 + 30 + 5 + 7 + 40 = 105
    int numssize = size(numbers);
    int noneed = 13;
    cout << sumall(numbers, numssize, noneed) << "\n";
    return 0;
}
