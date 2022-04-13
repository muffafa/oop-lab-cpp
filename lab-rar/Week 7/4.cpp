// This program uses a virtual base class.
#include <iostream >
using namespace std;
class base {
    public:
    int i;
};

class derived1 :  virtual public base{
    public:
    int j;
};

class derived2 : virtual public base{
    public:
    int k;
};

class derived3 : public derived1 , public derived2{
    public:
    int product() { return i * j * k; }
};

int main(){
    derived3 ob; ob.j = 3;  ob.k = 5;
    ob.i = 10; // unambiguous because only one copy present
    cout << "Product is " << ob.product() <<endl;
    return 0;
}