#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        int fibonacciRecursive(int num) {

            if (num == 0 || num == 1)
            {
 //              cout << "\n\t num=" << num;
                return num;
            }
            else
            {
//                                cout << "\n\t number=" << num-1<< "\t number=" << num-2;
                return (fibonacciRecursive(num - 1) + fibonacciRecursive(num - 2));

            }
        }
};

int main() {
    Solution s;

    for (int i = 0; i < 7; i++)
    {
 //                   cout << "\n i=" << i;

        cout << "\t" <<  s.fibonacciRecursive(i);
            }


    return 0;
}