#include <iostream>
using namespace std;

int minpositive(int numbers[], int numssize) {
    int i = 0 , minN;
    for(;i < numssize;i++) {
        if(numbers[i] > 0){
            if (minN < numbers[i]) {
                minN = minN;
            }
            else {
                minN = numbers[i];
            }
        }
    }
    return minN;
}

int main()
{
  int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0 }; // 5
  int numssize = size(numbers);
  cout << minpositive(numbers, numssize) << "\n";
  return 0;
}
