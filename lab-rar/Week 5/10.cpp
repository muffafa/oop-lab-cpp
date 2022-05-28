#include <iostream >
using namespace std;

void f(unsigned char c){ cout << ++c << " " << "unsigned" << endl; }

void f(signed char c) { cout << c << " " << "signed char" << endl;  }

void f(char c) { cout << c << " " << "char" << endl;  }

int main() {
    f('c');
    //f(97); // which f() is called?
    // 97 = a (signed) hemde 97 =  
    f(char(97));
    
    unsigned char x = char(97);
    f(x);

    signed char y = char(97);
    f(y);
   
    return 0;
}