#ifndef SDDS_FileTYPE_H__
#define SDDS_FILETYPE_H__

#include "File.h"

namespace sdds {
	const int maxtype = 4;
	class TextFile : public File
	{
		char type[maxtype];
	public:
		TextFile();
		TextFile(const char* n, const char* fid = nullptr, int s = 0, const char* ftype = "txt");
		TextFile(const TextFile& txtfile);
		~TextFile();
		const TextFile& getFileType(char*)const;
		std::ostream& display(std::ostream&) const;
		using File::display;
		
	};
}

#endif