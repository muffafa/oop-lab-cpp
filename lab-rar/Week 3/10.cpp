#include <iostream >
using namespace std;
class truck; // a forward declaration
class car{
    int passengers, speed;
    public:
    car(int p, int s) { passengers = p; speed = s; }
    int sp_greater(truck t);
};
class truck{
    int weight, speed;
    public:
    truck(int w, int s) { weight = w; speed = s; }
    friend int car::sp_greater(truck t);// note new use of the scope resolution operator
};

int car::sp_greater(truck t){ return speed - t.speed; }

int main(){
    int t;  car c1(2, 120); truck t1(20000, 72);
    cout << "Comparing c1 and t1:\n"; t = c1.sp_greater(t1); // evoke as member function of car
    if(t<0) cout << "Truck is faster.\n";
    else if(t==0) cout << "Car and truck speed is the same.\n";
    else cout << "Car is faster.\n"; 
    return 0;
}