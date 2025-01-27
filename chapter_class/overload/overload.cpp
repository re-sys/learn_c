#include <iostream>
using namespace std;

class Person {
    friend ostream& operator<<(ostream& os, const Person& p);
    friend Person operator+(Person &p1, Person &p2);
public:
    void sayHello() {
        cout << "Hello, I am a person." << endl;
    }
    //operator overloading
    void operator+=(int x) {
        cout << "Adding " << x << " to my age." << endl;
        age += x;
    }
    Person& operator++() {
        age++;
        return *this;
    }
    Person operator++(int) {
        Person temp = *this;
        age++;
        return temp;
    }
    Person& operator=(const Person& p) {
        age = p.age;
        if(p.height!= NULL)
        height = new int(*p.height);
        return *this;
    }
    void operator()(int x) {
        cout << "I am a function, and I received " << x << endl;
    }
//     Person operator+(Person &p) {
// printf("Adding two persons together.\n");
//         Person result;
//         result.age = age + p.age;
//         return result;
//     }
public:
    int age;
    int * height;
};

// operator overloading is used to define a new behavior for an operator in a class.
Person operator+(Person &p1, Person &p2) {
    printf("Adding two persons together.\n");
    Person result;
    result.age = p1.age + p2.age;
    return result;
}
ostream& operator<<(ostream& os, const Person& p) {
    os << "I am a person, and my age is " << p.age << endl;
    return os;
}

bool operator==(const Person& p1, const Person& p2) {
    return p1.age == p2.age;
}

bool operator!=(const Person& p1, const Person& p2) {
    return p1.age != p2.age;
}

int main() {
    Person p;
    p.sayHello();
    p += 5;
    Person p2 = p + p;
    cout << p2 << endl;
    p++;
    cout << p << endl;
    cout << p++ << endl;
    cout << p << endl;
    p2 = p;
    cout << p2 << endl;
    if (p == p2) {
        cout << "p and p2 are equal." << endl;
    } else {
        cout << "p and p2 are not equal." << endl;
        }
    p(10);
    Person();//this is；
    return 0;
}