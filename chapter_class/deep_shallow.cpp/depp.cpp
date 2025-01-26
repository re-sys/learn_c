#include <iostream>

using namespace std;

class A {
public:
    A() {
        cout << "A()" << endl;
    }
    ~A() {
        cout << "~A()" << endl;
    }
};

class B {
public:
    B() {
        cout << "B()" << endl;
    }
    ~B() {
        cout << "~B()" << endl;
    }
};

class C {
public:
    C() {
        cout << "C()" << endl;
    }
    ~C() {
        cout << "~C()" << endl;
    }
};

class D : public A, public B, public C {
public:
    D() {
        cout << "D()" << endl;

    }
    D(int age, int height) {
        cout << "D(int age, int* height)" << endl;
        this->age = age;
        this->height = new int(height);
    }
    D(int age, int* height):age(age), height(new int(*height)) {
        cout << "D(int age, int* height)" << endl;
    }
    D(const D& d) {
        cout << "D(const D& d)" << endl;
        this->age = d.age;
        // deep copy
        this->height = new int(*d.height);
    }
    ~D() {
        cout << "~D()" << endl;
        delete height;
    }
private:
    int age;
    int* height;
};

int main() {
    D d;
    return 0;
}   