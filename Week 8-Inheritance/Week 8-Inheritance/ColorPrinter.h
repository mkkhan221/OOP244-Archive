#ifndef SDDS_COLOR_PRINTER_H__
#define SDDS_COLOR_PRINTER_H__
#include "Printer.h"
namespace sdds_printer {
	const int maxcolor = 4;
	class ColorPrinter : public Printer
	{

		char color[maxcolor];
	public:
		ColorPrinter();
		ColorPrinter(const char* n, int m, const char* c);
		~ColorPrinter();
		void setColor(const char*);
		void display();
		bool print();
		using Printer::print;
	};
} 
#endif
