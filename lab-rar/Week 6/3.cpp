// This program contains an error.
#include <iostream >
using namespace std;
class base{
    int x;
    public:
    void setx(int n) { x = n; }
    void showx() { cout << x << endl; }
};

class derived : private base{
    int y;
    public:
    void sety(int n) { y = n; }
    void showy() { showx(); cout << y << endl; }
};

int main(){
    derived ob;
    ob.setx(10); // ERROR - now private to derived class
    ob.sety(20); // access member of derived class - OK
    ob.showx(); // ERROR - now private to derived class
    ob.showy(); // access member of derived class - OK
    return 0;
}