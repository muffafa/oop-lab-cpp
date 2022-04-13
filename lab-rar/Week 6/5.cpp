#include <iostream >
using namespace std;
class base{
    protected: // private to base
    int a, b; // but still accessible by derived
    public:
    void setab(int n, int m) { a = n; b = m; }
};

class derived : public base{
    int c;
    public:
    void setc(int n) { c = n; } 
    void showabc(){cout <<a<<' '<<b<<' '<<c<<endl;}
};

int main(){
    derived ob;
    ob.setab(1, 2);
    ob.setc(3);
    ob.showabc();
    return 0;
}