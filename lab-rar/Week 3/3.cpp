#include <iostream >
using namespace std;
#define SIZE 10 
class stack{
    char stck[SIZE]; // holds the stack
    int tos; // index of top of stack
    public:
    stack(); //constructor
    void push(char ch);// push character on stack
    char pop(); // pop character from stack
};

stack::stack(){ tos = 0; }

void stack::push(char ch){// Push a character.
    if(tos==SIZE) {return;}
    else { stck[tos] = ch; tos++; }
}

char stack::pop(){// Pop a character.
    if(tos>0) {tos--;  return stck[tos];}
    else {return 0; }
}

int main(){ // Create two stacks that are automatically initialized.
    stack s1, s2;  int i;
    for(i=0; i<3; i++) s1.push('a'+i);  
    s2 = s1; // now s1 and s2 are identical
    for(i=0; i<3; i++) cout << "Pop s1: " << s1.pop() << endl;
    for(i=0; i<3; i++) cout << "Pop s2: " << s2.pop() << endl;
    return 0;
}