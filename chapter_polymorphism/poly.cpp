#include <iostream>
using namespace std;
class Animal {
public:
    virtual void speak() {
        std::cout << "Animal speaks" << std::endl;
    }
};

class Dog : public Animal {
public:
    void speak() {
        std::cout << "Dog speaks" << std::endl;
    }
};

class Cat : public Animal {
public:
    void speak() {
        std::cout << "Cat speaks" << std::endl;
    }
};
void speak(Animal &animal) {
    animal.speak();
}

int main() {
    Dog dog;
    speak(dog);
    cout<<sizeof(Animal)<<endl;
    return 0;
}