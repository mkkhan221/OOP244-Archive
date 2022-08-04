/*Consider the function copyStream given in the listing below. This function is intended to copy the contents of
one stream to another so that the output stream will be associated with exactly the same sequence of characters
as the input stream. The function returns true upon success and false otherwise. Unfortunately, this code
has a serious flaw. Identify this flaw and explain how it can be fixed
#include <iostream>

#include <iostream>
2
3 bool copyStream(std::istream& in, std::ostream& out)
4 {
5 char c;
6 while (in >> c) {
7 if (!(out << c)) {
8 // Output failed.
9 return false;
10 }
11 }
12 if (!in.eof()) {
13 // Input failed.
14 return false;
15 }
16 // Success.
17 return true;
18 }
*/

/*
Will this code compile?provide the ouptput and  provide justification for your answer

int main() {
	for (int i = 0; i < 100; i++)
	int* p = new int[i];
	delete[] p;  

return 0;
}
/*


#include <iostream>
using namespace std;


// Answer Q1

bool copyStream(std::istream& in, std::ostream& out)
{
	char c;
	while (in >> c) {
		if (!(out << c)) {
			// Output failed.
			return false;
		}

		if (in.fail()) {
			// Input failed.
			return false;
		}
		// Success.
		return true;
	}
}
/*
int main() {

	bool c = copyStream(cin, cout);
	cout << c << endl;
}
*/