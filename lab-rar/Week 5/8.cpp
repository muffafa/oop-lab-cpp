#include <iostream >
using namespace std;

double rect_area(double length , double width = 0){
    if(!width) width = length;
    return length * width;
}

int main(){
    cout << "Rectangle has area: " << rect_area(10.0, 5.8) << endl;
    cout << "Square has area: " << rect_area(10.0) << endl;
    return 0;
}