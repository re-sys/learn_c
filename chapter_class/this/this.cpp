#include <iostream>

using namespace std;

class This {
    int x;
    mutable int y;
public:
    This() {
        cout << "This is a constructor" << endl;
    }
    This(const This& obj) {
        cout << "This is a copy constructor" << endl;
        
    }
    const This& func2(const This& obj) const
    {
        if(this==NULL) {
            cout << "This is a null pointer" << endl;
            return *this;
        }
        // this->y = 10;
        return *this;
    }
    void function() const{
        if(this==NULL) {
            cout << "This is a null pointer" << endl;
            return;
        }
          

        cout << "This is a function" << endl;
        // this->This(this);
    }
};

int main() {
    This obj;
    This obj2 = obj;
    This * obj4 = NULL;
    obj4->func2(obj2).function();
    const This obj3;
    obj3.func2(obj);
    // obj3.function();
    return 0;
}