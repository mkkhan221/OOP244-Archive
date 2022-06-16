#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>
#include <fstream>
#include "DeepCopyName.h"

using namespace std;
namespace sdds_name {
	DeepCopyName::DeepCopyName() {

		set(nullptr, 0);
	}
	DeepCopyName::DeepCopyName(char* n, int l) {
		set(n, l);
		
	}
	// deep copy avoid memoery leaks by deleteling prior memory, Allocating DM and 
	//copying content. this will ensure that the reference from outside class
	//to bind with resource or member

	DeepCopyName::DeepCopyName(DeepCopyName& n) {
		set(n.name, n.length);
	}
	
	DeepCopyName::~DeepCopyName() {
		deAllocSafely();
		length = 0;
	}

	void DeepCopyName::setSafeEmpty() {
		length = 0;
		deAllocSafely();
	}
	void DeepCopyName::deAllocSafely() {
		delete[] name;
		name = nullptr;
	}
	void DeepCopyName::set(const char* n, int l) {
		length = l;
		deAllocSafely();
		name = new char[l + 1];
		strcpy(name, n);
	}
	DeepCopyName& DeepCopyName::getName(char *n) {
		strcpy(n, name);
		return *this; 
		//return name// memory leak as ref returned 
	}
	int DeepCopyName::getLength() {
		return length;
	}
	// operator = overload
	DeepCopyName& DeepCopyName::operator=(DeepCopyName& na) {
		//deAllocSafely();
		if (this != &na) { // to avoid copying same object data
			if (na.name != nullptr) {
				set(na.name, na.length);
			}
		}
		return *this;
	}
	void DeepCopyName::display() {
		cout << this->name ;
		cout << length << endl;
	}
	
	ofstream& operator<<(ofstream& outfile, DeepCopyName& n) {
		if (!outfile.is_open()) {
			cerr << "File cannot be opened" << endl;
		}
		else {
			char* name = new char[] {" "};
			n.getName(name);
			outfile <<name<< endl;
			outfile << n.getLength() << endl;

		}
		return outfile;
	}
}