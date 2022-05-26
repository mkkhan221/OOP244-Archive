#ifndef SDDS_CIRCLE_H
#define SDDS_CIRCLE_H

namespace sdds {
	const double PI = 3.14;
	const int max_size = 31;

	struct Circle {
	private:
		char* color;
		double radius;
		bool isborder;
		double area;
		void calculateArea();
	public:
		//Circle();
		void setColor(char* c);
		void getColor(char *);
		void setRadius(double r);
		double getRadius();
		void setIsBorder(bool b=true);// default argument
		bool getIsBorder();
		void drawCircle();
		double getArea();
		void copyCircle(double radius, bool b = false, char* c = new char[] { "Red" });

	};
	// create circle structure class 
	// member data includes color, radius, isBorder
	// member functions include setter and getters, drawCircle, calculateArea
	// create const PI var and make it global scope

}
#endif
// make data private, functions public
// make default isborder true
// use of const with drawCircle