// create student and create a instance of student
#include <iostream>
using namespace std;

struct Student {
    char name[50];
    int age;
    char gender;
};

int main() {
    Student s1;
    s1.age = 20;
    strcpy(s1.name, "John");
    s1.gender = 'M';
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Gender: " << s1.gender << endl;
    
    Student s2 = {"Jane", 21, 'F'};
    cout << "Name: " << s2.name << endl;
    cout << "Age: " << s2.age << endl;
    cout << "Gender: " << s2.gender << endl;
    // try using array to store multiple students
    Student students[3]= 
        {
        {"Tom", 22, 'M'}, 
        {"Jerry", 23, 'M'}, 
        {"Mike", 24, 'M'}
        };
    for(int i=0; i<3; i++) {
        cout << "Name: " << students[i].name << 
         "Age: " << students[i].age << 
        "Gender: " << students[i].gender << endl;
    }
    // try using pointer to store multiple students
    Student *ps = new Student[3];
    ps[0] = {"Tom", 22, 'M'};
    ps[1] = {"Jerry", 23, 'M'};
    ps[2] = {"Mike", 24, 'M'};
    // try struct include struct
    struct Person {
        char name[50];
        int age;
        struct Student s;
    };
    // try use struct to transfer parameters to function
    void printStudent( Student s) {
        cout << "Name: " << s.name << " Age: " << s.age << " Gender: " << s.gender << endl;
    }
    void printPerson(Person* p) {
    void printPerson(const Person* p) {
        cout << "Name: " << p->name << " Age: " << p->age << " Gender: " << p->s.gender << endl;
    }
    printStudent(s1);
    printPerson(&p1);
    return 0;
}