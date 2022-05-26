#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Student.h"
#include "input.h"
using namespace stud;
//using namespace std;
/*
int  main() {

	int number{ 42 };
	int count = 42;
	std::cout << "the number is \t" << number <<std::endl; 
	//cout << "the number is \t" << number << endl;
	std::cout << "the count is " << count << "\n" << std::endl;
	std::cout << "The number is " << inputNumber() << std::endl;
}*/
// variable initialization using {} or = both equivalent
// std is standard namespace. endl adds new line and flush the buffer after read
// cout is used to read data from output stream (sequence of data/Bytes)

// Modular Programming : Piture are shown using Memeful component ext for VS
// <image url="D:\MK\seneca\OOP\244\transaction.png" />
// 
// 
// compiling , linking and loading 
// picture ref: beginner C++ 17 by Ivor horton
//<image url="D:\MK\seneca\OOP\244\C++_Compilation.png" />
/*
int  main() {

	Student std = { 0 };
	//extern Student s001;
	
	
	//std::cout << "name of Student " << s001.name<<std::endl;
	
	char str[STR + 1] = { '\0' };
	std::cout << "Enter name of Student \t" << std::endl;
	inputString(str);
	setName(&std, str);
	
	std::cout << "Enter the Enrollemt Number :" << std::endl;
	setEnrollmentId(&std,inputNumber());

	std::cout << "The Student Name is " << std.name << std::endl;
	std::cout << "The Student ID is " << std.enrollment_id << std::endl;
}
*/