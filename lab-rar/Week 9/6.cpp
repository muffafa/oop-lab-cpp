#include <iostream >
#include <new>
using namespace std;
int main(){
    int *p;
    try{ p = new int; }
    catch(bad_alloc xa) {
         cout << "Allocation failure.\n";  
         return 1;
    }

    for(*p = 0; *p < 10; (*p)++) cout << *p << " ";
    
    delete p; // free the memory
    return 0;
}