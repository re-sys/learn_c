#include <iostream>
#include <fstream>
#include <string>

using namespace std;
class Person {
public:
    string name;
    int age;
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
    Person() {}
    void print() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    string filename = "test.txt";
    ofstream outfile(filename,ios::binary | ios::out);
    if (!outfile) {
        cerr << "Error: cannot open file " << filename << endl;
        return 1;
    }
    Person p1("Alice", 25);
    Person p2("Bob", 30);
    outfile.write((const char*)&p1, sizeof(Person));
    outfile.write((const char*)&p2, sizeof(Person));
    outfile.close();
    ifstream ifs(filename, ios::binary | ios::in);
    if (!ifs) {
        cerr << "Error: cannot open file " << filename << endl;
        return 1;
    }
    Person p3, p4;
    ifs.read((char*)&p3, sizeof(Person));
    ifs.read((char*)&p4, sizeof(Person));
    ifs.close();
    p3.print();
    p4.print();
    return 0;
} 

