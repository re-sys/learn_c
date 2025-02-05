#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    //构造函数
    deque<int> d1(5, 10); // deque<int> d1(5, 10) 等价于 d1 = {10, 10, 10, 10, 10}
    deque<int> d2(d1); // d2 = d1
    deque<int> d3(d1.begin(), d1.end()); // d3 = d1
    deque<int> d5; // d5 = {}
    //赋值操作
    d1=d2;
    d1.assign(d2.begin(), d2.end());
    d1.assign(5, 20); // d1 = {20, 20, 20, 20, 20}
    //大小操作
    d1.size(); // 5
    d1.empty(); // false
    d1.resize(10); // d1 = {20, 20, 0, 0, 0, 0, 0}
    //插入和删除
    d1.push_front(10); // d1 = {10, 20, 20, 0, 0, 0}
    d1.push_back(30); // d1 = {10, 20, 20, 0, 0, 0, 30}
    d1.pop_front(); // d1 = {20, 20, 0, 0, 0, 0, 30}
    d1.pop_back(); // d1 = {20, 20, 0, 0, 0, 0}
    d1.insert(d1.begin(), 10); // d1 = {10, 20, 20, 0, 0, 0, 0}
    d1.insert(d1.end(), 30); // d1 = {10, 20, 20, 0, 0, 0, 0, 30}
    d1.erase(d1.begin()); // d1 = {20, 20, 0, 0, 0, 0, 0, 30}
    d1.erase(d1.begin()+1, d1.begin()+3); // d1 = {20, 0, 0, 0, 0, 0, 0, 30}
    //元素访问
    d1[0]; // 20
    d1.front(); // 20
    d1.back(); // 30
    d1.at(0); // 20

    //其他操作
    sort(d1.begin(), d1.end()); // {0, 0, 0, 0, 0, 20, 20}
}