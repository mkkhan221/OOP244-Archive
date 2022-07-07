#pragma once
#include "Printer.h"
namespace sdds_printer {
	class CollegePrinter : public Printer
	{
	protected:
		int collegeID;
		char username[31];
	};
}
