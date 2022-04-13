#include <iostream >
using namespace std;
class samp{
    int a;
    public:
    samp(int n) { a = n; }
    int get_a() { return a; }
};

int main(){
    int i;

    samp ob[4] = { -1, -2, -3, -4 }; // short way
    //samp ob1[4] = { samp(-1), samp(-2), samp(-3), samp(-4) }; 
    for(i=0; i<4; i++) cout << ob[i].get_a() << " ";
    cout << endl;

    samp ob2[4][2] = { 1, 2, 
                       3, 4, 
                       5, 6,
                       7, 8 }; 
    for(i=0; i<4; i++) cout<<ob2[i][0].get_a() <<" "<<ob2[i][1].get_a()<<endl; 
    cout << endl;

    return 0;
}