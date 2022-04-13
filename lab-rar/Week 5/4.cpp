#include <iostream >
#include <cstdlib >
using namespace std;
class myarray{
    int *p, size;
    public:
    myarray(int sz){
        p = new int[sz];
        if(!p) exit(1);
        size = sz;
        cout << "Using 'normal' constructor\n";
    }
    ~myarray() { delete [] p; } 
    myarray(const myarray &a);//copy constructor
    void put(int i, int j) { if(i>=0 && i<size)p[i] = j; }
    int get(int i) { return p[i]; }
};

myarray::myarray(const myarray &a){ 
    p = new int[a.size]; // allocate memory for copy
    if(!p) exit(1);
    size = a.size;
    for(int i=0; i<a.size; i++)p[i] = a.p[i]; // copy contents
    cout << "Using copy constructor\n";
}

int main(){
    myarray num(10); // this calls "normal" constructor 
    for(int i=0; i<10; i++) num.put(i, i); 
    for(int i=9; i>=0; i--)cout << num.get(i);
    cout << "\n"; 

    myarray x = num; // this invokes copy constructor
    for(int i=0; i<10; i++) cout << x.get(i);
    cout << endl;
    num.put(5, 10);
    cout << num.get(5) << endl << x.get(5);
    return 0;
}