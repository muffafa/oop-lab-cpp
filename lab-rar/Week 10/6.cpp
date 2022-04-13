#include <iostream >
using namespace std;
class static_func_demo{
    static int i;
    public:
    static void init(int x) { i = x; }
    void show() { cout << i; }
};

int static_func_demo::i; // define i

int main(){
    static_func_demo::init(100);
    static_func_demo x; 
    x.show(); // displays 100
    return 0;
}