#include <iostream>
using namespace std;
namespace firstNS{
    class demo{
        int i;
        public:
        demo(int x) { i = x; }
        void seti(int x) { i = x; }
        int geti() { return i; }
    };
    char str[] = "Illustrating namespaces\n";
    int counter;
}

namespace secondNS{ int x, y; }

int main(){
 
    firstNS::demo ob(10);
 
    cout << "Value of ob is: " <<ob.geti()<<endl;
    ob.seti(99);
    cout << "Value of ob is now : "<<ob.geti()<<endl;

    using firstNS::str;
    cout << str; 
    using namespace firstNS;
    for(counter = 10; counter; counter--) cout<<counter<<" ";

    secondNS::x = 10; secondNS::y = 20; 
    cout << "\nx y: "<<secondNS::x<< ", "<<secondNS::y<<endl;
    using namespace secondNS;
    demo xob(x), yob(y);
    cout << "xob, yob: "<<xob.geti()<<", "<<yob.geti()<<endl;
    return 0;
}