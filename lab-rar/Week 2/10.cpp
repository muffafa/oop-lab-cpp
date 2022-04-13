#include <iostream>
using namespace std;

class myclass{
	int a;
	public:
	myclass(int x); // constructor
	int get();
};

myclass::myclass(int x){
	a = x;
}

int myclass::get(){
	return a;
}

int main(){
	myclass ob(120); // create object
	myclass *p; // create pointer to object
	p = &ob; // put address of ob into p
	cout << "Value using object: " << ob.get() << endl;
	cout << "Value using pointer: " << p->get() << endl;
	return 0;
}