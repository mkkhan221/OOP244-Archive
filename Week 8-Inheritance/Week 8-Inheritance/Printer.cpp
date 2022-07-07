#include <iostream>
#include <fstream>
#include "Printer.h"
#include "File.h"
#include "TextFile.h"
#include "ImageFile.h"
#include "Util.h"
#include "ColorPrinter.h"

namespace sdds_printer {
	Printer::Printer() {
		modelNumber = 0;
		name[0] = '\0';
	}
	Printer::Printer(int m, const char* n) {
		set(n, m);
	}
	Printer::~Printer() {
		std::cout << "Calling Printer destructor" << std::endl;
	}
	bool Printer::set(const char* n, int m) {
		modelNumber = m;
		sdds::strCpy(name, n);
		return true;
	}
	void Printer::display() {
		std::cout << "Model number is " << modelNumber << std::endl;
		std::cout << "Printer name is " << name << std::endl;
	}
	bool Printer::print() {
		std::cout << "printing initiated" << std::endl;
		return true;
	}
	bool Printer::print(const char* msg) {
		print();
		std::cout << msg << std::endl;
		return true;
	}
	bool Printer::print(const sdds::File& f) {
		print("file printing");
		f.display(std::cout);
		return true;
	}

}
using namespace sdds;
using namespace std;
using namespace sdds_printer;
/*
int main() {

	Printer p1;
	ColorPrinter cp1("mycolorprinter", 1003, "RGB");
	cp1.display();
	p1.set("myprinter", 1103);
	p1.display();
	cp1.print("my name is moona");
	
	//cp1.set("mycolorprinter", 1104);
	//cp1.display();
	
}
*/

int main() {

	
//	File f, file1("paper", "004", 0);
//	File myfiles[5];
/*
	int noofrecords = read("filenamelist.txt", myfiles, 4);
	print(myfiles, "filenamelist1.txt", noofrecords);
	for (int i = 0; i < 4; i++) {
		myfiles[i].display(cout);
	}

	// testing  bool operator 
	if ((bool)file1) {
		cout << "file has data" << endl;
	}
	else {
		cout << "file size is 0" << endl;
	}


	TextFile tfile;  
	
	// if no argument constructor of child class exist it will be called 
	//which will call parent class no argument constructor

	char filetype[4];
	tfile.display(cout);
	tfile.getFileType(filetype);
	cout << filetype << endl;

	tfile.display(cout);

	TextFile mytfile{ "mytextfile.txt","007",100 }; // creating dervied class object and passing data to base class constructor
	mytfile.display(cout);
	mytfile.getFileType(filetype);
	cout << filetype << endl;

	mytfile.display(cout);

	TextFile assignment(mytfile);
	assignment.display(cout);

	*/

	ImageFile img, img1("imagefile.jpeg","001",200,"jpeg");
	TextFile txtfile("textfile.txt", "1011", 20, "txt");
	File file1("paper", "004", 0);
	img.set("mypic","1201",500,"jpg");
	//img.displayAll();
	img1.display(cout);
	txtfile.display(cout,"my message");
	Printer p1;
	p1.set("myprinter", 1103);
	p1.display();
	p1.print(txtfile);
	return 0;


}