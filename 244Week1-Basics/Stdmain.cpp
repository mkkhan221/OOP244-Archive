#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstring>
#include "Student.h"
#include "Stdmain.h"
#include "input.h"


using namespace stud;
using namespace std;
using namespace input;

const int MAX_LENGTH = 31;
int  main() {

	struct Student stdList[MAX_STD] = { 0 };
	char email[MAX_LENGTH];
	//extern Student s001;
	fptr = fopen("stdlist.csv", "r");
	int i = 0;
	if (fptr) {
		i = loadStudentList(stdList);
		cout << i<< "records read " << endl;
		fclose(fptr);

	}

	//std::cout << "name of Student " << s001.name<<std::endl;

	cout << "The Student Name is " << stdList[1].name << endl;
	cout << "The Student ID is " << stdList[1].enrollment_id << endl;
	genEmail(&stdList[1], email);
	inputData(stdList[6].name);
	inputData(&stdList[6].enrollment_id);
	cout << "The Student Name is " << stdList[6].name << endl;
	cout << "The Student ID is " << stdList[6].enrollment_id << endl;


	return 0;
}

 void stud::genEmail(Student* st, char email[]) {
	
	strcpy(email, st->name);
	strcat(email, "@senecacollege.ca");
	cout << "email is " << email << endl;
}