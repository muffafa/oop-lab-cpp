// Use a static member variable independent of any object.
#include <iostream >
using namespace std;
class myclass{
    public:
    static int i;
    void seti(int n) { i = n; }
    int geti() { return i; }
};

int myclass::i;

int main(){
    myclass o1, o2; 
    myclass::i = 100; // no object is referenced.
    cout << "o1.i: " << o1.geti() <<endl; // displays 100
    cout << "o2.i: " << o2.geti() <<endl; // also displays
    return 0;
}