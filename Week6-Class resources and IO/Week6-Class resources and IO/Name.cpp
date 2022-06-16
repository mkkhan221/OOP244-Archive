#include "Name.h"
namespace sdds {

	Name::Name(char*n , int l) {
		this->length = l;
		this->name = n;

	}
	// shallow copy causes memory leaks
	Name::Name(Name& n) {
		this->length = n.length;
		this->name = n.name;
	}
	
	Name::~Name() {
		delete[] name;
		name = nullptr;
		length = 0;
	}
}