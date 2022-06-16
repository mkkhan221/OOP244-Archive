#include <string>
#include <iostream>
#include "DeepCopyName.h"
//#include "BabyNames.h"
//#include "Name.h"

using namespace std;
//using namespace sdds;
using namespace sdds_name;
//using namespace sdds_books;

int main() {
	/*
	char n[] = "Moona";
	//char* n1, *n2;
	DeepCopyName firstname(n, strlen(n));
	DeepCopyName lastname(firstname);
	BabyNames babybk{ "Aden",4 };

	*/
	// shallow copy is disasterous
	char n[] = "Moona";
	char n1[]("Kanwal");
	char *n2 = new char[21];
	DeepCopyName firstname(n, strlen(n));
	DeepCopyName lastname(firstname);
	DeepCopyName anothername(n1, strlen(n1));

//	Name firstname(n, strlen(n));// two arg constructor
//	Name lastname(firstname);// copy constructor 

	// to check deep copy has different references so no chance of memoery leaks
/*
	firstname.getName(n1);
	lastname.getName(n2);
	cout << n1 << " " << n2 << endl;
	if (n1 == n2) {
		cout << "the ref is same" << endl;
	}
	if (n == n1) {
		cout << "the ref is same" << endl;
	}
	*/
	//firstname = lastname;// shallow copy if no overload operator

	firstname = anothername;
	firstname = firstname;
	firstname.display();
/*
	if (firstname.name == lastname.name){
		cout << "the ref is same" << endl;
	}

	if (n == firstname.name) {
		cout << "the ref is same" << endl;
	}*/
	//delete[] n;
	
	//cout << firstname.name << endl;

	return 0;
}