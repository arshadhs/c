#include <iostream>
#include <sstream>
// int to char conversion

// 1) Explicit Typecasting
void typeCast_func(const int& num) {
    //char *c = static_cast<char*>(num);
    std::cout  << std::endl << static_cast<char>(num);
}

// 2) sprintf()
void sprintf_func(const int &num)
{
    char c[10];
    sprintf(c, "%d", num);
    printf("\n%s", c);
}

// 3)  to_string() and c_str()
void tostring_func(const int& num) {
    std::string s = std::to_string(num);
    const char *c = s.c_str();
    printf("\n%s", c);
}

// 4) stringstream
void stringstream_func(const int& num) {
    std::stringstream s;
    s << num;
    const char *c = s.str().c_str();
    std::cout << std::endl << c;
}

// 5) using division to find length and then modulo to get numbers
void calculate_func(const int & num) {
    char c[20] {0};
    int len {0};
    int tempNum {num};

    while(tempNum) {
        len++;
        tempNum /=10;
    }

    tempNum = num;

    for (int i = len - 1; i >= 0; --i)
    {
        c[i] = tempNum % 10 + '0';
        tempNum /= 10;
    }

    c[len] = '\0';
}

// 6) using modulo, division and swap
void calculate_func_1(const int & num) {
    char c[20] {0};
    int i {0};
    int x {num};
    int y {num};
    
    do {
        y  = x%10;
        c[i] = y + '0';
        x /= 10;
        i++;
    } while(x != 0);

    int k = i-1;
    for (int j = 0; j < i-1; j++, k--) {
        std::swap(c[j], c[k]);
    }

    c[i] = '\0';
    std::cout << std::endl << c;
}

int main() {
    const int num = 75;

    typeCast_func(num);

    sprintf_func(num);

    tostring_func(num);

    stringstream_func(num);

    calculate_func(num);

    return 0;
}