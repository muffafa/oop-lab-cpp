#include <iostream >
using namespace std;
#define SIZE 10 

template <class StackType > class stack{
    StackType stck[SIZE]; // holds the stack
    int tos; // index of top of stack
    public:
    void init() { tos = 0; } // initialize stack
    void push(StackType ch); // push object on stack
    StackType pop(); // pop object from stack
};

template <class StackType> void stack <StackType>::push(StackType ob){
    if(tos==SIZE){cout << "full!\n"; return;}
    stck[tos] = ob; tos++;
}

template <class StackType> StackType stack <StackType>::pop(){
    if(tos==0){ cout << "empty!\n";return 0; }
    tos--;return stck[tos];
}

int main(){
    stack<char> s1; 
    s1.init(); s1.push('a'); s1.push('b'); s1.push('c');
    for(int i=0; i<3; i++) cout << "Pop s1: "<<s1.pop()<<endl;

    stack<double> ds1;
    ds1.init(); ds1.push(1.1); ds1.push(3.3); ds1.push(5.5); 
    for(int i=0; i<3; i++)cout << "Pop ds1: " << ds1.pop()<<endl; 
    return 0;
}