#include <iostream>

// Find the output, and fix if there's a bug.
int main() {
    using namespace std;

    unsigned char c = 150;

    for (unsigned char i = 0; i < 2 * c; i++)
        cout << endl << int(i);

    return 0;
}