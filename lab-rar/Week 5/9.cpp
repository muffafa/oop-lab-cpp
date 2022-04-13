#include <iostream >
using namespace std;

float f(float i){return i / 2.0;}

double f(double i){return i / 3.0;}

int main(){
    float x = 10.09;
    double y = 10.09;
    cout << f(x) << endl; // unambiguous - use f(float)
    cout << f(y)<< endl; // unambiguous - use f(double)
    cout << f(10) << endl;
    //cout << f((float)10); // ambiguous , convert 10 to double or float??
    return 0;
}