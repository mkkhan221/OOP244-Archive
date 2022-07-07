#include "ColorPrinter.h"
#include <iostream>
#include "Util.h"

using namespace sdds;
using namespace std;
namespace sdds_printer {

	ColorPrinter::ColorPrinter() {
		color[0] = '\0';
	}
	// call parent argument constructor and pass arguments
	ColorPrinter::ColorPrinter(const char* n, int m, const char* c): Printer(m,n) {
		strCpy(color, c);
	}
	ColorPrinter::~ColorPrinter() {
		cout << "Calling Color Printer Destructor" << endl;
	}
	void ColorPrinter::setColor(const char* c) {
		strCpy(color, c);
		
	}
	// overriding is where you use same method or function signature and provide new implementation. compiler shadows ther parent method 
	void ColorPrinter::display() {
		Printer::display();
		cout << "the color is " << color << endl;
	}
	bool ColorPrinter::print() {
		cout << "Colored printer Initialized" << endl;
		return true;
	}
}