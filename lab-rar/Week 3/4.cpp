#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class strtype{
    char *p;
    int len;
    public:
    strtype(char *ptr);
    ~strtype();
    void show();
    void printAddr();
};

strtype::strtype(char *ptr){
    len = strlen(ptr);
    p = (char *) malloc(len+1);
    if(!p) exit(1); 
    strcpy(p, ptr);
}
strtype::~strtype(){ free(p);}

void strtype::show(){cout << p << " - length: " << len << endl;}

void strtype::printAddr(){ printf("%p\n", p);}

int main(){
    strtype s1("This is a test."), s2("I like C++.");
    s1.printAddr();
    s2.printAddr();
    s1.show();
    s2.show();
    s2 = s1;// assign s1 to s2 - - this generates an error
    s1.show();
    s2.show();
    s1.printAddr();
    s2.printAddr();
    return 0;
}