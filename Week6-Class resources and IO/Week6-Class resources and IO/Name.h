#pragma once
namespace sdds {
	class Name
	{
	public:
		char* name;
		int length;
	
		Name(char *, int);
		Name(Name&); // copy constructor
		~Name();
	};
}

