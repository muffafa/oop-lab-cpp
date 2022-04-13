#include <iostream >
using namespace std; 

double rect_area(double length , double width){
  return length * width;
}

double rect_area(double length){
  return length * length;
}

int main(){
  cout << "Rectangle has area: " << rect_area(10.0, 5.8) << endl;
  cout << "Square has area: "  << rect_area(10.0) << endl;
  return 0;
}
