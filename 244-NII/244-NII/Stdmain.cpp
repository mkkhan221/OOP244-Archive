#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include "Student.h"
using namespace std;
using namespace stud;

int main() {

	struct Student stdList[MAX_STD] = { 0 };
	fptr = fopen("stdlist.csv", "r");
	int i = 0;
	if (fptr) {
		i = loadStudentList(stdList);
		cout << i << " records read " << endl;
		fclose(fptr);
	}
	cout << "The name is" << stdList[1].name << endl;
	cout << "The name is" << stdList[1].enrollment_id << endl;

	/*
	struct Student s001;
	cout << "Enter name" << endl;
	cin >> s001.name;
	cout << "Enter Enrollment Id" << endl;
	cin >> s001.enrollment_id;
	setName(&stdList[0], s001.name);
	setenrollmentID(&stdList[0], s001.enrollment_id);
	cout << "The name is" << stdList[0].name<<endl;
	cout << "The name is" << stdList[0].enrollment_id << endl;
	*/
	return 0;
}