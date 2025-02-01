#include <iostream>

void myswap(int& a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
template<typename T>
T Myswap(T& a, T b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10;
    char b = 'a';
    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    myswap(a, b);
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    Myswap<int>(a, b);
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
    return 0;
}