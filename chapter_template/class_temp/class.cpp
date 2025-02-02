#include <iostream>
using namespace std;

template <class Name, class Age=int>
class Person { 
public: 
    Name name;  // member variable of type Name 
    Age age;    // member variable of type Age 
    Person(Name n, Age a) { 
        name = n; 
        age = a; 
    } 
    void print() { 
        cout << "Name: " << name << endl; 
        cout << "Age: " << age << endl; 
    } 
}; 
class Person1 { 
public: 
    void show() { 
        cout << "Person1" << endl; 
    } 
}; 
class Person2 { 
public: 
    void show() { 
        cout << "Person2" << endl; 
    } 
}; 
template <class T> 
class MyClass { 
public: 
    T obj; 
    void show() { 
        obj.show(); 
    } 
}; 

int main() { 
    Person<string, int> p1("John", 25); 
    Person p2("Mary", 30); 
    p1.print(); 
    p2.print(); 
    MyClass<Person1> obj1; 
    obj1.show(); 
    MyClass<Person2> obj2; 
    return 0; 
} 