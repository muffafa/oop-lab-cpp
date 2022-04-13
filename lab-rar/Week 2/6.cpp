#include <iostream>
using namespace std;
class myclass{
	int a;
	public:
	myclass(int x); // constructor
	void show();
};
myclass::myclass(int x){
	cout << "In constructor\n";
	a = x;
}
void myclass::show(){
	cout << a << endl;
}
int main(){
	myclass ob(5);
	ob.show();
	return 0;
}