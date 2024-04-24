#include<iostream>
using namespace std;

unsigned int factorial(int num) {
    int fact = 1;
    for (int i = 2; i <= num; i++) {
        fact *= i;
        cout << "\t" << fact;
    }
    return fact;
}

unsigned int factorialRecursive(int num) {
    if (num <=1) return 1;
  
    return num*factorialRecursive(num-1);
}

int main() {

    int num = 4;

    int f = factorial(0);
    cout << "\nfact =" << f;

    int fR = factorialRecursive(0);
    cout << "\nfactorialRecursive =" << fR;

    return 0;
}