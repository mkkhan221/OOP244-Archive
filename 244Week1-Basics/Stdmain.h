#ifndef STUDENT_MAIN_H
#define STUDENT_MAIN_H

namespace stud {
	struct Student;

	// forward declaration to avoid breaking On def rule
	// need to tell Student and stud::Student same 

	void genEmail(Student*, char[]);
}

#endif