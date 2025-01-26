#include <iostream>

using namespace std;

class Static {
public:
    static int count;
    Static() {
        count++;
    }
};

int Static::count = 0;

int main() {
    Static s1, s2, s3;
    cout << "Static::count = " << Static::count << endl;
    return 0;
}