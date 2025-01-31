#include <iostream>
using namespace std;
#include <fstream>

int main() {
    ofstream outfile;
    outfile.open("output.txt", ios::out);
    outfile << "Hello, world!" << endl;
    outfile<< "This is a test file." << endl;
    outfile.close();

    ifstream infile;
    infile.open("output.txt", ios::in);
    if(!infile.is_open()) {
        cout << "Error: unable to open file." << endl;
        return 1;
    }
    char buf[1024]={0};
    while(infile.getline(buf, 1024)) {
        cout << buf << endl;
    }
    infile.close();
  

    // while(infile>>buf)
    // {
    //     cout << buf << endl;
    // }
    string line;
    while(getline(infile, line))
    {
        cout << line << endl;
    }
    infile.close();
    return 0;
}