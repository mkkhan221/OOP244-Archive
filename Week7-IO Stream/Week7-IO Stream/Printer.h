#include "File.h"
namespace sdds_printer {
	class Printer
	{
		int printerID;
		char* model;
		Printer(int, char*);
		bool set(char*);
		int getID()const;
		Printer& getModel(char*)const;
		bool print(sdds::File&);
		bool copy(sdds::File&);

	};
}

