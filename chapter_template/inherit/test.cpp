#include <iostream>
using namespace std;

template <typename T>
class Base {
public:
    T value;
};

class Son : public Base<int> {
public:
    void print() {
        cout << "Son value: " << value << endl;
    }
};
template <typename T1, typename T2>
class GrandSon : public Base<T1>{
    public:
        T2 value2;
};

template <typename T1, typename T2>
class Person {
//全局函数类内实现
friend void print(Person<T1, T2>& p){
    cout << "Person name: " << p.name << endl;
    cout << "Person age: " << p.age << endl;
};

public:
    T1 name;
    T2 age;
    Person(T1 n, T2 a);
    void show();
};

template <typename T1, typename T2>
Person<T1, T2>::Person(T1 n, T2 a) {
    name = n;
    age = a;
}

template <typename T1, typename T2>
void Person<T1, T2>::show() {
    cout << "Person name: " << name << endl;
    cout << "Person age: " << age << endl;
}

// template <typename T1, typename T2>
// void print(Person<T1, T2>& p) {
//     cout << "Person name: " << p.name << endl;
//     cout << "Person age: " << p.age << endl;
// }
int main() {
    Son s;
    s.value = 10;
    // s.print();
    GrandSon<int, double> gs;
    Person<string, int> p("Alice", 25);
    // p.show();
    print(p);
    return 0;
}