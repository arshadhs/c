#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        vector<int> fibonacci(int num) {
            int x = 0, y = 1, z;
            vector<int> v;
            for (int i = 0; i < num; i++)
            {
                if (i <= 1)
                    z = i;
                else
                {
                    z = x+y;
                    x = y;
                    y = z;
                }
                v.push_back(z);
            }
            return v;
        }
};

int main() {
    Solution s;
    vector<int> v = s.fibonacci(7);

    for (int i : v)
        cout << "\t" << i;
    return 0;
}