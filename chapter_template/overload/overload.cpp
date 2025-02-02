#include <iostream>
using namespace std;

class Person {
public:
    Person(int age) {
        this->age = age;
    }
    Person(string name) {
        this->name = name;
    }
    Person(int age, string name) {
        this->age = age;
        this->name = name;
    }
    void print() {
        cout << "Age: " << age << endl;
        cout << "Name: " << name << endl;
    }
public:
    int age;
    string name;
};

template<typename T>
void func(T& t, T& t2) {
    if(t==t2)
        cout << "Equal" << endl;
    else
        cout << "Not equal" << endl;
}
template<>
void func(Person& p1, Person& p2) {
    if(p1.age==p2.age && p1.name==p2.name)
        cout << "Equal" << endl;
    else
        cout << "Not equal" << endl;
}
int main() {
    Person p1(25, "John");
    Person p2(25, "John");
    func(p1, p2);
    return 0;
}