#include <iostream>

using namespace std;

class Space {
    int i;
    
    
    static int si;
public:
    void print() {
    }
    };

int main() {
    Space space;
    cout << sizeof(space) << endl;
    return 0;
}