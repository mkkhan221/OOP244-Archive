#ifndef SDDS_IMAGEFILE_H__
#define SDDS_IMAGEFILE_H__
#include "File.h"
namespace sdds {
	const int max = 5;
	class ImageFile : public File
	{
		char compression[max];
	public:
		ImageFile();
		ImageFile(const char* n, const char* fid, int s, const char* c);
		ImageFile(const ImageFile& imgfile);
		~ImageFile();
		void setCompression(const char *);
		void set(const char*, const char*, int, const char*);
		std::ostream& display(std::ostream&) const;
	};
}
#endif
