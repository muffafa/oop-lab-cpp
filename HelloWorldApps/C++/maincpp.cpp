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
    cout << "ogrenci kaydi aliniyor..." << endl;

    counter ++;

    this->name = name;
    id = counter;
};

void student::show(){
    string msgName = "ogrenci ismi: "; 
    string msgId = "ogrenci numarasi: ";
    cout << msgName << name << endl << msgId << id << endl;
};

int main(){
    cout << "Hello World" <<endl;
    cout << counter << endl;

    student muffafa = student("Muhammed Mustafa Savar");

    muffafa.show();
    return 0;
}