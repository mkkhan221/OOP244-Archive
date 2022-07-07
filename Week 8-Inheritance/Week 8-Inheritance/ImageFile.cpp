#include <iostream>
#include "ImageFile.h"
#include "Util.h"

using namespace std;
namespace sdds {

	ImageFile::ImageFile() {
		
		compression[0] = '\0';
	}
	ImageFile::ImageFile(const char* n, const char* fid, int s, const char* c):  File{ n, fid, s } {
		strCpy(compression, c);
	}
	void ImageFile::setCompression(const char* c) {
		strCpy(compression, c);
		
	}
	void ImageFile::displayAll() {
		display(cout); // belongs to parent class which is File
		cout << "The file is image with compression technique " << compression << endl;
	}
}