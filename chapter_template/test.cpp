#include <iostream>
using namespace std;

template <typename T>
void print(T t) {
    cout << t << endl;
}
void swapInt(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
void swapDouble(double& a, double& b) {
    double temp = a;
    a = b;
    b = temp;
}

template <typename T>
void Swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}
template <class T>
void mySwap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}
template <class T>
void func(){
    cout<<"func"<<endl;
}

int main() {
    int a = 10, b = 20;
    double x = 3.14, y = 2.71;
    char c = 'a', d = 'b';
    // mySwap(a,c);//推导不出一个一致的T，所以报错
    Swap(a, b);
    Swap(x, y);
    Swap<double>(x, y);
    print(a);
    print(b);
    // func<int>();//推导不出这个T，所以报错
    return 0;
}