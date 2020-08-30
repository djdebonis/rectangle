#include "Rectangle.h"
//using namespace std;

Rectangle::Rectangle(double _length, double _width){
  length = _length;
  width = _width;
}

double Rectangle::getLength() const{ // accessor
  return length;
}

double Rectangle::getWidth() const{ // accessor
  return width;
}

void Rectangle::output(){
  double area = length * width;
  double perimeter = 2 * length + 2 * width;
  cout << "********************************" << endl;
  cout << "Rectangle parameters:" << endl;
  cout << "Length: " << length << endl;
  cout << "Width: " << width << endl;
  cout << "Area: " << area << endl;
  cout << "Perimeter: " << perimeter << endl;
  cout << "********************************" << endl;

}
