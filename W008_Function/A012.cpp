#include <iostream>
using namespace std;

string createurl(string u1, string u2, string u3, bool u4 = true) {
    if (u4 == true) {
        return u1 + "://www." + u2 + "." + u3;
    } else {
        return u1 + "://" + u2 + "." + u3;
    }
}

int main()
{
    cout << createurl("https", "elzero", "org") << "\n"; // https://www.elzero.org
    cout << createurl("https", "google", "com", false) << "\n"; // https://google.com
    cout << createurl("http", "learn", "net") << "\n"; // http://www.learn.net
    return 0;
}
