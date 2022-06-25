#define _CRT_SECURE_NO_WARNINGS
#include <fstream>
#include <string>
#include "util.h"
#include "File.h"

using namespace std;
namespace sdds {

	File::File() {
		name = new char[20];
		fileID = new char[20];
		size = 0;
	}
	// removed one ar constructor and provided defaults
	File::File(const char* n, const char* fid, int s) {
		if (n != nullptr) {
			name = new char[strlen(n) + 1]{};
			strcpy(name, n);
			
		}
		else {
			name = new char[] {"noname.txt"};
		}
		if (fid != nullptr) {
			fileID = new char[strlen(fid) + 1]{};
			strcpy(fileID, fid);
		}
		else {
			fileID = new char[] {"000"};
		}
			
			size = s;
			//display(cout);
		
		
	}
	File::File(const File& fi) {
		name = nullptr;
		fileID = nullptr;
		set(fi.name, fi.fileID, size);
	}
	File::~File() {
		dealloc();
	}
	void File::dealloc() {
		delete[] name;
		delete[] fileID;
		name = nullptr;
		fileID = nullptr;
	}
	void File::setSafeState() {
		dealloc();
		size = 0;
	}

	bool File::setName(const char* n) {
		bool check = false;
		delete[] name;
		name = nullptr;
		if (n != nullptr) {
			name = new char[strlen(n) + 1]{};
			strSet(name, '\0');
			strcpy(name, n);
			check = true;
		}
		else {
			setSafeState();
		}
		return check;
	}
	bool File::setFileID(const char* fid) {
		delete[] fileID;
		fileID = nullptr;
		bool check = false;
		if (fid != nullptr) {
			fileID = new char[strlen(fid) + 1]{};
			strSet(fileID, '\0');
			strcpy(fileID, fid);
			check = true;
		}
		else {
			setSafeState();
		}
		return check;
	}
	bool File::setSize(int s) {
		bool check = false;
		if (s >= 0 && s <= maxfilesize) {
			size = s;
			check = true;
		}
		else {
			setSafeState();
		}
		return check;
	}
	bool File::set(const char* n, const char* fid, int s) {
		bool check = false;
		if (setName(n) && setFileID(fid) && setSize(s)) {
			check = true;
		}
		return check;
	}
	bool File::set(const File& fi) {
		bool check = false;
		if (set(fi.name, fi.fileID, fi.size)) {
			check = true;
		}
		return check;
	}
	
	const File& File::getFileName(char* fname)const {
		if (fname != nullptr) {
			strcpy(fname, this->name);
		}
		return *this;
	}
	const File& File::getFileID(char* fid)const {
		if (fid != nullptr) {
			strcpy(fid, this->fileID);
		}
		return *this;
	}
	int File::getSize()const {
		return size;
	}
	std::ostream& File::display(std::ostream& out) const {
		out << "File name is: " << name << endl;
		out << "File id is: " << fileID << endl;
		out << "File size is: " << size << endl;
		return out;

	}
	int read(const char* filename, File flist[], int size) {
		ifstream f(filename);
		int i = 0;
		if (!f.is_open()) {
			cerr << "File cannot be opened" << endl;
		}
		else {

			while (!f.eof() && i<size ) {
				
				f >> (flist[i]);
				i++;
				
			}
		}
		f.close();
		return i;
	}
	// print all the data in file array to file
	void print(File flist [], const char* filename, int arraysize)
	{
		ofstream outfile(filename,ios::app); // open file in append mode
		char* name = new char[30]{};
		char* fileid = new char[10]{ };
		
		if (!outfile.is_open()) {
			cerr << "File cannot be opened" << endl;
		}
		else {
			for (int i = 0; i < arraysize; i++) {
				
				flist[i].getFileName(name);
				flist[i].getFileID(fileid);
				
				outfile << name << "," << fileid << "," << flist[i].getSize()<<endl;
				name = strSet(name, '\0'); // to clear the array 
				fileid = strSet(fileid, '\0'); // to clear the array
			}
		}
		outfile.close();
		
	}
	ofstream& operator<<(std::ofstream& out, File& f) {
		char* fid = new char[10] {};
		f.getFileID(fid);
		if (!out.is_open()) {
			cerr << "File cannot be opened" << endl;
		}
		else {
			cout << "Writing to the file" << endl;
			out << fid<<","<<f.getSize() << endl;
		}

		
		return out;
	}

	std::ifstream& operator>>(ifstream& in, File& f) {
		
		char fname[30]{};
		char fileid [10]{};
		string name = "";
		string fid = "";
		int size = 0;
		if (!in.is_open()) {
			cerr << "File cannot be opened" << endl;
		}
		else {
			cout << "Reading from the file" << endl;
			while (in.peek() != '\n')  // to read single record
			{
				getline(in,name, ','); // get text in string type. string type used as std::getline() offers parsing of string using delimeter

				getline(in, fid, ',');
				in >> size;
				
				strcpy(fname, name.c_str()); // c_str() is string object function which returns pointer to char array. this is to get char array for set functions
				strcpy(fileid, fid.c_str());

				f.setName(fname);
				f.setFileID(fileid);
				f.setSize(size);
			}
		}

		in.ignore(); // ignore newline
		return in;
	
	}
}