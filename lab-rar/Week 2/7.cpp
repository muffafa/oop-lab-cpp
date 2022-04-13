#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype{
	char *p;
	int len;
	public:
	strtype(char *ptr); // constructor
	~strtype(); // destructor
	void show();
};

strtype::strtype(char *ptr){// Initialize a string object.
	len = strlen(ptr);
	p = (char *) malloc(len + 1);
	if(!p) {
		cout << "Allocation error\n";
		exit(1);
	}
	strcpy(p, ptr);
}

strtype::~strtype(){// Free memory when destroying string object.
	cout << "Freeing p\n";
	free(p);
}

void strtype::show(){
	cout << p << " - length: " << len << endl;
}

int main(){ 
	strtype s1("This is a test."), s2("I like C++.");
	s1.show();
	s2.show();
	return 0;
}