#include<iostream>
using namespace std;

class AbstractClass {
public:
    virtual void function() = 0;
};
class AbstractDrinking{
    public:
    virtual void drink() = 0;
    virtual void pour()=0;
    virtual void serve(){};
    void all()
    {
        drink();
        pour();
        serve();
    }
    virtual ~AbstractDrinking()=0;
};
AbstractDrinking::~AbstractDrinking()=default;
class Tea:public AbstractDrinking{
public:
string *name;
    Tea(string n){
        name=new string(n);
    }
    void drink(){
        cout<<"I am drinking tea"<<endl;
    }
    void pour(){
        cout<<"I am pouring tea"<<endl;
    }
    // void serve(){
    //     cout<<"I am serving tea"<<endl;
    // }
    // ~Tea(){
    //     cout<<"I am destroying Tea"<<endl;
    //     delete name;
    // }
};

class Coffee:public AbstractDrinking{
public:
    void drink(){
        cout<<"I am drinking coffee"<<endl;
    }
    void pour(){
        cout<<"I am pouring coffee"<<endl;
    }
    void serve(){
        cout<<"I am serving coffee"<<endl;
    }
};

void do_work(AbstractDrinking *obj){
    obj->all();
    delete obj;
}

int main(){
    do_work(new Tea("Milk Tea"));
    do_work(new Coffee());
    return 0;
}