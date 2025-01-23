#include <iostream>

class MyClass {
public:
    int x;
    void print() {
        std::cout << "x = " << x << std::endl;
    }
};
// three privileged members: public, private, and protected
// public: accessible from anywhere, private: accessible only within the class, protected: accessible from the class and its derived classes
class MyDerivedClass : public MyClass {
private:
    int y;
public:
    void print() {
        std::cout << "x = " << x << ", y = " << y << std::endl;
    }
protected:
    int z;
};
int main() {
    // create an object of MyClass and call its print() method
    MyClass obj;
    obj.x = 10;
    obj.print();
    return 0;
}