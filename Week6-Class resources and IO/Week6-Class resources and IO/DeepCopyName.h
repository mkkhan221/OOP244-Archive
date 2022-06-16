#ifndef SDDS_DEEPCOPY_H
#define SDDS_DEEPCOPY_H
#include <fstream>
namespace sdds_name {
	//ofstream outfile;

	class DeepCopyName
	{
	
		char* name;
		int length;
		void setSafeEmpty();
		void deAllocSafely();
	public:
		DeepCopyName();
		DeepCopyName(char*, int);
		DeepCopyName(DeepCopyName&);
		~DeepCopyName();
		void set(const char*, int);
		DeepCopyName& getName(char *);
		int getLength();
		DeepCopyName& operator=(DeepCopyName&);
		void display();
		
	};
	std::ofstream& operator<<(std::ofstream& outfile, DeepCopyName&);
}
#endif
