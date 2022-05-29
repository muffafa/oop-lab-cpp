#include <iostream>
#include <string>
using namespace std;

class Animal{
    string name;
    public:
    void speak(){cout << "Hello."<< endl;}
    Animal(){cout << "Consturucting Animal" << endl; }
    ~Animal(){cout << "Desturucting Animal" << endl; }
};

class Dog : public Animal {
    int age;
    public:
    void bark(){speak(); cout << "Woof woof!" << endl; /*cout << name;*/ }
    Dog(){cout << "Consturucting Dog" << endl; }
    ~Dog(){cout << "Desturucting Dog" << endl; }
};

class Cat : private Animal{
    int heart;
    public:
    void meow(){speak(); cout << "Meow meow!" <<endl;}
    Cat(){cout << "Consturucting Cat" << endl; }
    ~Cat(){cout << "Desturucting Cat" << endl; }

};

class Mammal : public Animal{
    protected: //private to mammal but still accesible by derived
    int milkCapacity;
    protected:
    void run(){cout << "Running" << endl;}
    Mammal(){cout << "Consturucting Mammal" << endl; }
    ~Mammal(){cout << "Desturucting Mammal" << endl; }
};

class Cow : public Mammal{
    public:
    void moo(){speak(); cout << "Moooo!" << endl;}
    void showMilkCapacity(){cout << milkCapacity << endl; run();}
    Cow(){cout << "Consturucting Cow" << endl; }
    ~Cow(){cout << "Desturucting Cow" << endl; }
};

class Lion : protected Mammal{
    public:
    void roar(){speak(); cout << "Roarrr!" << endl;}
    void showMilkCapacity(){cout << milkCapacity << endl; run();}
    Lion(){cout << "Consturucting Lion" << endl; }
    ~Lion(){cout << "Desturucting Lion" << endl; }
};

int main(){
    Dog samet;
    Cat omer;
    Cow bedirhan;
    Lion muffafa;
    
    samet.speak(); //:public
    samet.bark(); 

    //omer.speak(); //:private 
    omer.meow(); 

    bedirhan.speak(); //:public :public
    bedirhan.moo();
    bedirhan.showMilkCapacity();
    //bedirhan.run(); //protected function 

    //muffafa.speak(); // :public :protected 
    muffafa.roar();
    muffafa.showMilkCapacity();
    //muffafa.run();

    return 0;
}