#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

class String{
    string str;
    public:
        String(string s) : str(s) {}

        string rev_1() {
            reverse(str.begin(), str.end());
            return str;
        }

        string rev_2() {
            //strrev(str.c_str());
            string tmp = string(str.rbegin(), str.rend());
            return tmp;
        }

        string rev_3() {
            string tmp;
            tmp.resize(str.length());

            for (int i = str.length() - 1, j = 0; i >= 0; i--, j++)
                tmp[j] = str[i];

//            tmp[j+1] = '\0';
            return tmp;
        }

        string rev_4() {
            int n = str.length() - 1;
            char c;
            for (int i = 0; i <= str.length()/2; i++) {
                c = str[i];
                str[i] = str[n];
                str[n] = c;
                n--;
            }
            return str;
        }
};

// Driver Code
int main() {
    String obj("Hello How are you?");

    cout << "\n1: " << obj.rev_1();
    cout << "\n2: " << obj.rev_2();
    cout << "\n3: " << obj.rev_3();
    cout << "\n4: " << obj.rev_4();
}