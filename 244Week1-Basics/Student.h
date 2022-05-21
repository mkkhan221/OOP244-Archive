#ifndef SDDS_STUDENT_H
#define SDDS_STUDENT_H
#include <cstdio>
// using namespace is wrong on .h file

namespace stud {
	const int MAX_STD = (100);

	struct Student {
		char name[30];
		int enrollment_id;

	};

	void setName(Student* std, char* name);
	void setEnrollmentId(Student* std, int id);
	int loadStudentList(Student* Sptr);
	int readStudent(Student* St);

	extern std::FILE* fptr;
}


#endif // SDDS_STUDENT macro end