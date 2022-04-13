#include <iostream >
using namespace std;
int main(){
    cout << "start\n";
    try {
        cout << "Inside try block\n";
        throw 10; // throw an error
        cout << "This will not execute";
    } catch(double i)  {
        cout << "Caught One! Number is: ";
        cout << i << "\n";
    }
    cout << "end";
    return 0;
}