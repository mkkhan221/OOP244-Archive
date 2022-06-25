#include <iostream>
#include <fstream>
#include "Printer.h"
#include "File.h"

using namespace sdds;
using namespace std;
int main() {
	
	//File f, myfile("mkfile.txt", "001", 50);
/*
	File anotherfile("copymkfile.txt");

	File filelist[]{ {"mkfile.txt","001",50},
					 {"second.txt","003",20} };

	anotherfile.display(cout);

	for (int i = 0; i < 2; i++) {
		filelist[i].display(cout);
	}
	*/

	File myfiles[5];

	int noofrecords = read("filenamelist.txt", myfiles,4);

	//print(filelist, "filenamelist.txt",2);
	/*
	char* name = new char[30]{};
	char* fileid = new char[10]{ "\0" };


	myfile.getFileName(name);
	cout << "File name : " << name << endl;
	ofstream outfile(name); // create and connect to file
	if (f.set(myfile)) {
		cout << f.getSize() << endl;
		cout << "success" << endl;


	 }
	outfile << myfile;
	outfile.close();

	
	//delete[] name;
	//name = nullptr;
	//name = new char[30]{};
	//anotherfile.getFileName(name);
	ifstream infile(name); // create and connect to file

	infile >> anotherfile;

	char* fid = new char[10]{"\0"};
	anotherfile.getFileID(fid);
	cout << fid << endl;

	*/

	return 0;


}