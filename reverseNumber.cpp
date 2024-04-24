#include<iostream>
#include<vector>
using namespace std;

int revNum(int num) {
    int rev = 0;
    while (num > 0) {
        rev = (rev*10) + (num % 10);
        num = num / 10;
    }

    return rev;
}

int main() {
    vector<int> v {432, 1, 0, 43434343, 79, 900909};
    for (int n : v)    
        cout << n << " = " << revNum(n) << endl;
}