#include <iostream >
using namespace std;

void f(unsigned char c){ cout << c << " " << "unsigned" << endl; }

void f(char c) { cout << c << " " << "char" << endl;  }

int main() {
    f('c');
    //f(97); // which f() is called?
    f(char(97));
    unsigned char x = char(97);
    f(x);
    return 0;
}