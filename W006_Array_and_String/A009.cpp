#include <iostream>
#include <array>
using namespace std;

int main(){
    int nums[] = {10, 20, 30, 40, 20, 50};
    // Method 1
    cout << sizeof(nums)/sizeof(nums[0]) << "\n";

    // Method 2
    cout << end(nums) - begin(nums) << "\n";

    // Method 3
    array<int, 6> numss = {10, 20, 30, 40, 20, 50};
    cout << numss.size() << "\n";
    return 0;
}