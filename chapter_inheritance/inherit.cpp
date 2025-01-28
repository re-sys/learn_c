#include <iostream>
using namespace std;
//learning inheritance
class Animal{
public:
    // void eat(){
    //     cout<<"Animal is eating"<<endl;
    // }
    // void function(){
    //     cout<<"Animal function"<<endl;
    // }
    // void function(int a)
    // {
    //     cout<<"Animal function with int parameter"<<a<<endl;
    // }
    // Animal(int age, int weight, int height):age(age),weight(weight),height(height){};
private:
    int age;
protected:
    int weight;
public:
    int height;
    static int count;
};
class Dog:virtual public Animal{
public:
    void bark(){
        cout<<"Dog is barking"<<endl;
    }
    void function(){
        cout<<"Dog function"<<endl;
    }
    int mate;
    int height;
    static int count;
};
class Base2:protected Animal{
public:
    void run(){
        cout<<"Base2 is running"<<endl;
        weight=10;
    }
};
class Base3:private Animal{
public:
    void jump(){
        cout<<"Base3 is jumping"<<endl;
        height=100;
    }
};
class Cat:virtual public Animal, public Dog{
public:
    void meow(){
        cout<<"Cat is meowing"<<endl;
    }
    void function(){
        cout<<"Cat function"<<endl;
    }
    int meow_count;
    static int count;
};

int main(){
    // Dog myDog(2,30,40);
    // myDog.eat();
    // myDog.bark();
    // myDog.run();
    // myDog.jump();
    // Cat myCat;
    // myCat.eat();
    // myCat.run();
    // myCat.jump();
    // myCat.meow();
    Dog dog;
    dog.height=10;
    dog.Animal::height=20;
    cout<<dog.height<<endl;
    cout<<dog.Animal::height<<endl;
    dog.function();
    // dog.Animal::function();
    // // dog.function(10);//calls the function with int parameter if it is defined in Animal class it cannot be called in Dog class
    // dog.Animal::function(20);
    // cout<<Dog::count=0<<endl;
    // cout<<Dog::Animal::count=0<<endl;
    Cat cat;
    cout<<"sizeof(Dog):"<<sizeof(Dog)<<endl;
    cout<<"sizeof(Animal):"<<sizeof(Animal)<<endl;
    cout<<"sizeof(Base2):"<<sizeof(Base2)<<endl;
    cout<<"sizeof(Base3):"<<sizeof(Base3)<<endl;
    return 0;
}

