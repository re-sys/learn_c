#include <iostream>
using namespace std;
class Person {
    private:
        int age;
public:
    Person(){
        cout << "default constructor" << endl;
    };
    Person(int a)
    {
        cout << "constructor with int parameter" << endl;
        age = a;
    }
    //copy constructor
    Person(const Person& p)
    {
        cout << "copy constructor" << endl;
        age = p.age;
    }
    ~Person(){
        cout << "destructor" << endl;
    };
};

int main() {
    Person p1;
    Person p2(10);
    Person p3(p2);
    //don't do this
    Person p4();
    //explicitly call the copy constructor
    Person p5 = Person(p2);
    Person p6 = Person(10);
    //implicitly call the copy constructor
    Person p7 = p2;
    Person p8 = 10;
    return 0;
}