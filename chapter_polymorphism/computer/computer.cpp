#include<iostream>
using namespace std;


class CPU{
    public:
        virtual void process()=0;
};

class Memory{
    public:
        virtual void load()=0;
};

class HDD{
    public:
        virtual void read()=0;
};

class IntelCPU:public CPU{
    public:
        void process(){
            cout<<"Intel CPU processing data"<<endl;
        }
};

class AMDCPU:public CPU{
    public:
        void process(){
            cout<<"AMD CPU processing data"<<endl;
        }
};

class RAM:public Memory{
    public:
        void load(){
            cout<<"RAM loading data"<<endl;
        }
};

class SDD:public Memory{
    public:
        void load(){
            cout<<"SDD loading data"<<endl;
        }
};

class SeagateHDD:public HDD{
    public:
        void read(){
            cout<<"Seagate HDD reading data"<<endl;
        }
};

class WDMyBookHDD:public HDD{
    public:
        void read(){
            cout<<"WD My Book HDD reading data"<<endl;
        }
};

class Computer{
    public:
        CPU* cpu;
        Memory* memory;
        HDD* hdd;
        Computer(CPU* c, Memory* m, HDD* h){
            cpu=c;
            memory=m;
            hdd=h;
        }
        void run(){
            cpu->process();
            memory->load();
            hdd->read();
        }
        ~Computer(){
            delete cpu;
            delete memory;
            delete hdd;
        }
};
int main(){
    IntelCPU *intel=new IntelCPU();
    AMDCPU *amd=new AMDCPU();
    RAM *ram=new RAM();
    SDD *sdd=new SDD();
    SeagateHDD *seagate=new SeagateHDD();
    WDMyBookHDD *wd=new WDMyBookHDD();
    Computer *comp=new Computer(intel, ram, seagate);
    comp->run();
    delete comp;
    comp=new Computer(amd, sdd, wd);
    comp->run();
    delete comp;
    return 0;
}
