#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include "Circle.h"
using namespace std;
using namespace sdds;
namespace sdds {
	
	/*Circle::Circle() {
		radius = 1;
		color = new char[max_size];
		strcpy(color, "white");
		isborder = false;
	}*/
	void Circle::setColor(char* c) {
		//strcpy(color,c);
		color = c;
	}

	void Circle::getColor(char * c) {
		strcpy(c, color);
	}

	void Circle::setRadius(double r) {
		radius = r;
	}

	double Circle::getRadius() {
		return radius;
	}
	void Circle::setIsBorder(bool b) {
		isborder = b;
	}
	bool Circle::getIsBorder() {
		return isborder;
	}
	void Circle::drawCircle() {
		cout << "The color is " << color << endl;
		cout << "The radius is " << radius << endl;
		cout << "The has border " << isborder << endl;
	}
	void Circle::calculateArea() {
		area= PI * radius * radius;
	}
	double Circle::getArea() {
		calculateArea();
		return area;
	}
	void Circle::copyCircle(double radius, bool b, char* c)
	{
		Circle::radius = radius;
		Circle::isborder = b;
		strcpy(Circle::color, c);

	}
}