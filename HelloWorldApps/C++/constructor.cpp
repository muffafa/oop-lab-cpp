#include <iostream>
#include <math.h>
using namespace std;
 
class Point {
private:
    int x, y;
 
public:
    Point(int x1, int y1){
        cout << "Constructor called" << endl;
        x = x1;
        y = y1;
    }
 
    // Copy constructor
    Point(const Point& p1){
        cout << "Copy constructor called" << endl;
        x = p1.x;
        y = p1.y;
    }
 
    ~Point(){
        cout << "Destructor called" << endl;
    }

    int getX() { return x; }
    int getY() { return y; }
};

double euclidianDistance(Point p1, Point p2){
    double dst = sqrt(pow(p1.getX() - p2.getX(), 2) + pow(p1.getY() - p2.getY(), 2));
    cout << "Distance is: " << dst << endl;
    return dst; // Destructor is called here
}

Point findCloseToOrgin(Point p1, Point p2){
    Point p0 = Point(0,0); // Normal constructor is called here

    double dst1 = euclidianDistance(p0, p1);// Copy constructor is called here
    //When an object of the class is passed (to a function) by value as an argument.
    double dst2 = euclidianDistance(p0, p2);// Copy constructor is called here
    //When an object of the class is passed (to a function) by value as an argument.

    // Copy constructor is called here
    //When an object of the class is returned by value. 
    if(dst1 > dst2){
        cout << p1.getX() << ", "<< p1.getY() << " is more close to orgin" << endl; 
        return p1;
    }else if (dst1 < dst2){
        cout << p2.getX() << ", "<< p2.getY() << " is more close to orgin" << endl; 
        return p2;
    }else{ // p1 == p2
        cout << p1.getX() << ", "<< p1.getY() << " and, "
        << p2.getX() << ", "<< p2.getY() 
        << " are same close to orgin." << endl;
        return p1; 
    }
    // Destructor is called above
}

void printSection(){
    cout << "----------------------------" << endl;
}
 
int main()
{
    printSection();

    Point p1(3, 4); // Normal constructor is called here
    Point p2(4, 3); // Normal constructor is called here
    
    // Let us access values assigned by constructors
    cout << "p1.x = " << p1.getX()
         << ", p1.y = " << p1.getY() << endl;
    cout << "p2.x = " << p2.getX()
         << ", p2.y = " << p2.getY() << endl;

    printSection();
 
    Point p3 = findCloseToOrgin(p1, p2);// Copy constructor is called here
    //When an object of the class is passed (to a function) by value as an argument. 


    printSection();

    
    //When an object is constructed based on another object of the same class. 
    return 0;
}