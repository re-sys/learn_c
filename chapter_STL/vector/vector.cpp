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
    //构造函数
    vector<int> v2(v.begin(), v.end());
    vector<int> v3(10,100);//10个100
    vector<int> v4(v3);//拷贝构造
    //赋值
    v2 = v3;
    v2.assign(v.begin(), v.end());
    v2.assign(10, 100);
    //容量和大小
    cout << "capacity: " << v.capacity() << endl;
    cout << "size: " << v.size() << endl;
    v2.resize(10);
    v2.resize(20, 200);
    v2.empty();
    //插入和删除
    v2.push_back(100);
    v2.pop_back();
    v2.insert(v2.begin(), 100);
    v2.insert(v2.begin(), 2, 200);
    v2.erase(v2.begin());
    v2.erase(v2.begin(), v2.end());
    //数据存取
    v2.at(0);
    v2[0];
    v2.front();
    v2.back();
    //互换
    swap(v2, v3);
    vector<int> (v2).swap(v2);//收缩内存
    //预留空间
    v2.reserve(100);
    //排序
  
    return 0;
}