#include "TextFile.h"
#include "Util.h"
#include <iostream>

using namespace std;
namespace sdds {

	// Constructors
	TextFile::TextFile() {
		// protected members are available, private are not 
		//*this=File(); will casue error as file type constructor is assinged to textfile type
		sdds::strCpy(type,"txt");
	}
	// can have own constructors and copy paste the parent code to initialize all member data
	// a better way is to call parent constructor and pass data 
	// cannot call directly the base class constructor
	

	TextFile::TextFile(const char* n, const char* fid , int s , const char* ftype) : File{ n, fid, s } {
		strCpy(type, ftype);
	}
	TextFile::TextFile(const TextFile& txtfile) : File(txtfile){
		strCpy(type, txtfile.type);
	}
	TextFile::~TextFile() {
		cout << "bye from text File class" << endl;
	}
	const TextFile& TextFile::getFileType(char* ftype)const {
		if (ftype != nullptr) {
			strCpy(ftype, this->type);
		}
		return *this;
	}
	// display will shadow the base class display ( overriding). this changes the implementation while keeping the signature same
	std::ostream& TextFile::display(std::ostream&) const {
		File::display(cout); // to call base class display (if needed). 
		
		cout << "The file type is "<<type << endl;
		return cout;

	}
}