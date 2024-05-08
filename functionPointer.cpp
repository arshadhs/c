#include <iostream>

int &fn() {
    static int x = 10;
    return x;
}

int main() {
    fn()=30;
    std::cout << fn();
    return 0;
}