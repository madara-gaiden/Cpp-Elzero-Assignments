#include <iostream>
using namespace std;

int main(){
    int check = 25;
    int nums[]{'x', 'x', 'x', 70, 100};
    int bLast = (sizeof(nums) / sizeof(nums[0])) - 2; //Before Last
    
    cout << "Type Number 1 : ";
    cin >> nums[0];
    cout << "Type Number 2 : ";
    cin >> nums[1];
    cout << "Type Number 3 : ";
    cin >> nums[2];
    
    if (nums[0] > check || nums[1] > check || nums[2] > check){
        if (nums[0] > check){
            cout /*<< "Number 1 : "*/ << nums[0] + nums[bLast] << "\n";
        }
        else if (nums[1] > check){
            cout /*<< "Number 2 : "*/ << nums[1] + nums[bLast] << "\n";
        }
        else if (nums[2] > check){
            cout /*<< "Number 3 : "*/ << nums[2] + nums[bLast] << "\n";
        }
    }
    return 0;
}