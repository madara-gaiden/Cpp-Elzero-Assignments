#include <iostream>
using namespace std;

int books(int smallBook, int mediumBook, int largeBook, int shelfForBook) {

    int resetForBooks = ((shelfForBook * 20) - ((smallBook * 2) + (mediumBook * 4) + (largeBook * 6)));
    if (resetForBooks > 0 ) {
        return resetForBooks;
    } else {
        return 0;
    }
}

int main()
{
    cout << books(10, 4, 3, 4) << "\n"; // 26
    cout << books(10, 4, 3, 2) << "\n"; // 0
    return 0;
}
