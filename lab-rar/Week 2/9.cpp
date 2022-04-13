#include <iostream >
using namespace std;

class B{// Define base class.
	int i;
	public:
	void set_i(int n);
	int get_i();
};

// Define derived class.
class D : public B{
	int j;
	public:
	void set_j(int n);
	int mul();
};

// Set value i in base
void B::set_i(int n){
	i = n;
}

// Return value of i in base.
int B::get_i(){
	return i;
}

void D::set_j(int n){// Set value of j in derived.
	j = n;
}

// Return value of base’s i times derived’s j.
int D::mul(){
	// derived class can call base class public member functions
	return j * get_i();
}

int main(){
	D ob;
	ob.set_i(10); // load i in base
	ob.set_j(4); // load j in derived
	cout << ob.mul(); // displays 40
	return 0;
}