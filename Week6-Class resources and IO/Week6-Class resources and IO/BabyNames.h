#ifndef SDDS_BOOK_H
#define SDDS_BOOK_H
#include <iostream>
#include "DeepCopyName.h"
using namespace std; // baad practice 
using namespace sdds_name;
namespace sdds_books {
	const int Max_Count = 10;
	class BabyNames
	{
		DeepCopyName names[Max_Count]; // Composition/Aggregation
		int namecount;
	public:
		BabyNames();
		BabyNames(BabyNames& n);
		BabyNames(const char *n, int l);
		//~BabyNames();

		//operator << overload
		//std::ostream& operator<< (std::ostream&);
		// operator [] overload to return Mark[index%getNameCount()]
		//DeepCopyName& operator[](unsigned int index);
		//BabyNames& addName(sdds_name::DeepCopyName&);
		int getNameCount();
		
		//
	};

}
#endif
