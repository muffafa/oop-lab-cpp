#include <iostream>
using namespace std;
class myclass{
	int a;
	public:
	myclass(); // constructor
	void show();
};
myclass::myclass(){
	cout << "In constructor\n";
	a = 10;
}
void myclass::show(){
	cout << a;
}
int main(){
	myclass ob;
	ob.show();
	return 0;
}
