#ifndef SDDS_STUDENT_H
# define SDD_STUDENT_H
#include <cstdio>

namespace stud {
	const int MAX_STD{ 100 };// MAX_STD = 100
	struct Student {
		char name[30];
		int enrollment_id;
	};

	void setName(Student* std, char*);
	void setenrollmentID(Student* std, int);
	int loadStudentList(struct Student* Sptr);
	int readStudent(struct Student* St);

	extern std::FILE* fptr;
}





#endif

