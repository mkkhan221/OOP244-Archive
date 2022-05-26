#include <iostream>
#include "input.h"

using namespace std;
namespace input {
	void  inputData(int* num) {

		//auto num = 0; // assigns type of right side value to left variable
		auto isnumber = false; // type promotion to int true ==1 and false==0
		// handle with care as logical operators behave diff with int 
		//e.g !2 is 0 and !0 is 1 
		while (!isnumber) {
			cout << "Enter Number " << endl;
			cin >> *num;
			if (*num >= 0) {
				isnumber = true;
			}
			else {
				cout << "Number is not positive Try again" << endl;
			}
		}
		//return num;
	}

	void inputData(char* str) {

		cout << "Enter characters " << endl;
		cin >> str;


	}
}

// Stream in C++
// Cout and Cin are included in iostream. More details later
// <image url="https://www3.ntu.edu.sg/home/ehchua/programming/cpp/images/IOstreams.png" />
