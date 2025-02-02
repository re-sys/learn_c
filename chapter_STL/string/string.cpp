#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1 = "Hello, world!";
    const char* s2 = "Hello, world!";
    string s3(s2);//将cstring复制到string中
    string s4(s2, 5);//从cstring中复制5个字符到string中

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    string s5;
    s5=s1;
    s5.assign(s2);
    cout << s5 << endl;
    s5.append("!");
    s5+=s1;
    cout<<s5<<endl;
    s5.append(s1, 5, 3);
    cout<<s5<<endl;
    s5.insert(0, "Good ");
    int pos=s5.find("world");
    if(pos!=string::npos){
        cout<<"found world at position "<<pos<<endl;
        s5.replace(pos, 6, "universe");
    }
    pos = s5.find("universe1");
    if(pos!=string::npos){
        cout<<"found universe1 at position "<<pos<<endl;
    }
    else{
        cout<<"universe1 not found"<<endl;
    }
    pos = s5.rfind("world");
    if(pos!=string::npos){
        cout<<"found world at position "<<pos<<endl;
    }
    else{
        cout<<"world not found"<<endl;
    }
    s5.replace(0, 4, "C++++++");
    cout<<s5<<endl;
    string str1 = "hello";
    string str2 = "hello";
    if(str1 == str2){
        cout<<"str1 and str2 are equal"<<endl;
    }
    if(str1.compare(str2) == 0){
        cout<<"str1 and str2 are equal"<<endl;
    }
    str1.insert(0, "C++");
    cout<<str1<<endl;
    str1.erase(0, 3);
    cout<<str1<<endl;
    str2 = str1.substr(0, 3);
    cout<<str2<<endl;
    string st3 = "hello@world";
    pos = st3.find('@');
    string substr = st3.substr(0,pos);
    cout<<substr<<endl;
    return 0;
}