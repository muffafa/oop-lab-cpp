#include <iostream>
#include <string>
using namespace std;
int counter = 0;

class student{
    string name;
    int id;
    
    public:
    student(string name);
    void show();
};

student::student(string name){
    counter++;
    cout << "ogrenci kaydi aliniyor" << endl;

    this->name = name;
    id = counter;
};

void student::show(){
    string msg = "ogrenci ismi: "; 
    cout << "a";
    cout << msg;
};

int main(){
    cout << "Hello World" <<endl;

    student muffafa = student("Muhammed Mustafa");

    muffafa.show();
    return 0;
}