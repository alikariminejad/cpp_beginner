#include <iostream>

int main() {
    int a = 1;
    int b = 2;
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
    std::cout << a;
    return 0;
}