#include <iostream>
using namespace std;

class Building;

class Friend {
    friend void building(Friend& f);
public:
    Building * building;
public:
    Friend() ;
    ~Friend() {
        delete building;
    }
    void visit() ;
    void visit2();
    void sayHello() {
        std::cout << "Hello, I am a friend." << std::endl;
    }
};
class Building{
    friend Friend;
    friend void Friend::visit2();
    private:
        string bedroom;
    public:
        Building() {
            bedroom = "I have a bedroom.";
        }

};
Friend::Friend() {
    this->building = new Building;
}
void Friend::visit() {
        cout<<this->building->bedroom<<endl;
    }
void Friend::visit2() {
        cout<<this->building->bedroom<<endl;
    }

int main() {
    Friend f;
    f.visit();
    return 0;
}