#include <iostream>
using namespace std;

template <class T1, class T2>
class Person {
public:
    Person(T1 name, T2 age) {
        this->name = name;
        this->age = age;
    }
    void prinInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
private:
    T1 name;
    T2 age;
};

void printInfo(Person<string, int> p) {
    p.prinInfo();
}
template <class T1, class T2>
void printPerson2(Person<T1, T2>& p) {
    p.prinInfo();
    cout << "Type of T1: " << typeid(T1).name() << endl;
    cout << "Type of T2: " << typeid(T2).name() << endl;
}

template<class T>
void printPerson(T& p) {
    p.prinInfo();
}

int main() {
    Person<string, int> p1("Alice", 25);
    printInfo(p1);
    printPerson2(p1);
    printPerson(p1);
    return 0;
} 