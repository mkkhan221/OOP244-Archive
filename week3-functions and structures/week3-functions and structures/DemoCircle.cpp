#include <iostream>
#include "Circle.h"

using namespace std;
using namespace sdds;

int main() {
	char* color = new char[10]{"white"};
	Circle* c1 = new Circle();// DMA
	
	c1->setIsBorder();
	cout << c1->getIsBorder() << endl;
	c1->setColor(color);
	//c1->setRadius(2.3);
	char* cl = new char[] {"Blue"};
	c1->copyCircle(3.4);
	c1->drawCircle();
	
	Circle c;// declaring and using set methods to assign values.
	
	c.setColor(color);
	c.setIsBorder(false);
	c.setRadius(4);
	double c_area=c.getArea();
	c.drawCircle();
	cout << c_area << endl;

	return 0;
}
