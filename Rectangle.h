#include <iostream>
using namespace std;

#ifndef DEBONISDAVID_HW2
#define DEBONISDAVID_HW2

class Rectangle {
private:
	double length;
	double width;

public:
	explicit Rectangle(double _length=0, double _width=0);

	double getLength() const;
	double getWidth() const;
	void output();
};

#endif //DEBONISDAVID_HW2
