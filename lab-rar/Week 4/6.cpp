#include<iostream>
using namespace std;

class samp {
    int i, j;
    public:
    samp (int a, int b) { i=a; j=b; }
    int get() { return i*j; }
};

int main (){
    samp *p;
    
    p = new samp(6, 5);
    if(!p) {cout << "Allocation error" <<endl;return 1;}
    cout << "Product: " << p->get() << endl;
    
    delete p;

    return 0;
}