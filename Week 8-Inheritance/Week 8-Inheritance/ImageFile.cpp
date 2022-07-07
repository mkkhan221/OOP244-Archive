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
    ImageFile::ImageFile(const ImageFile& source) : File(source)
    {
        strCpy(compression, source.compression);
    }
    ImageFile::~ImageFile()
    {
        cout << "Destructor called for ImageFile" << endl;
    }
	void ImageFile::setCompression(const char* c) {
		strCpy(compression, c);
		
	}
	void ImageFile::set(const char* n, const char* fid, int s, const char* c)
	{
		strCpy(compression, c);
		File::set(n, fid, s);
	}
    std::ostream& ImageFile::display(std::ostream& out) const {
		File::display(out); // belongs to parent class which is File
		cout << "The file is image with compression technique " << compression << endl;
        return out;
	}
    

   

   
}