#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Person {
public:
    string name;
    Person(string name) : name(name) {}
};
int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    vector<int>::iterator itBegin = v.begin();
    vector<int>::iterator itEnd = v.end();

    for (vector<int>::iterator it = itBegin; it!= itEnd; ++it) {
        cout << *it << " ";
    }
    cout << endl;

    for_each(v.begin(), v.end(), [](int x) { cout << x << " "; });
    cout << endl;

    vector<Person> people;
    people.push_back(Person("Alice"));
    people.push_back(Person("Bob"));
    people.push_back(Person("Charlie"));
    for_each(people.begin(), people.end(), [](Person p) { cout << p.name << " "; });
    cout << endl;
    return 0;
}