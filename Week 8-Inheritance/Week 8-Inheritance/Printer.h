#ifndef SDDS_PRINTER_H__
#define SDDS_PRINTER_H__
#include "File.h"
namespace sdds_printer {
	const int max_namesize = 31;
	class Printer
	{
		
	protected:
		int modelNumber;
		char name[max_namesize];
	public:
		Printer();
		Printer(int, const char*);
		~Printer();
		bool set(const char*, int);
		//int getNumber()const;
		//Printer& getName(char*)const;
		void display();
		bool print();
		bool print(const char*);
		bool copy();

	};
}
#endif

