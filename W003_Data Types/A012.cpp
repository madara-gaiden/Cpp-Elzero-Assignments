        #include <iostream>
        using namespace std;

        int main(){
            short a = 1000;
            int b = 10000;
            long double c = 5.560000505012;

            cout << b - (b - a) << "\n"; // 12
            // cout << ??? + ??? << "\n"; // 20
            cout << c * c << "\n"; // 32
            cout << a * int(c) << "\n"; // 5000
            // cout << char(??? * ???) << "\n"; // P = 80
        }   