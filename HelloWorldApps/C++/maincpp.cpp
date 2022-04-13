#include <iostream>
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
    cout << "Öğrenci Kaydı Alınıyor";

    this->name = name;
    id = counter;
};

void student::show(){
    cout << name;
};

int main(){
    cout << "Hello World";

    student muffafa = student("Muhammed Mustafa");
    return 0;
}