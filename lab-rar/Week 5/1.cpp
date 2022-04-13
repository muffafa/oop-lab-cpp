#include <iostream>
using namespace std;
class myclass{
    int x;
    public:
    // overload constructor two ways
    myclass() { x = 0; } // no initializer
    myclass(int n) { x = n; } // initializer
    int getx() { return x; }
};
int main(){
    myclass o1(10); // declare with initial value
    myclass o2; // declare without initializer
    cout << "o1: " << o1.getx() << endl;
    cout << "o2: " << o2.getx() << endl;
    return 0;
}