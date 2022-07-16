#include <iostream>
using namespace std;
#include "Dog.h"
#include "Parrot.h"
#include "Animalia.h"
#include "Animal.h"

using namespace sdds;
// this example is to check polymorphic behavior without virtual and with virtual Animal class functions and destructor
int main() {
	sdds::debug = true;

cout << "------------Using operator overload + polymorphic behaviour " << endl;
	
	Dog carno, heb("Fido");
	
// in operator overload and overide the argument type is important. 
	//passing Dog type doesn't match with Animal op overriding so regardless of being virtual
	//compiler cannot associate op in dog with Animal ref and calls Animal op
	
        Animal& ar=carno;
	ar = heb;// use this with Dog type ref in operator parameter. even dog is assigned
	
	
	return 0;
}
