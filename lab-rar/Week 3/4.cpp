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
};

strtype::strtype(char *ptr){
    len = strlen(ptr);
    p = (char *) malloc(len+1);
    if(!p) exit(1); 
    strcpy(p, ptr);
}
strtype::~strtype(){ free(p);}

void strtype::show(){cout << p << " - length: " << len << endl;}

int main(){
    strtype s1("This is a test."), s2("I like C++.");
    s1.show();
    s2.show();
    s2 = s1;// assign s1 to s2 - - this generates an error
    s1.show();
    s2.show();
    return 0;
}