#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char a[] = "anan";
    char b[20] = "baban";
    char c[20];

    strcpy(c, a);
    cout << c;
    return 0;
}