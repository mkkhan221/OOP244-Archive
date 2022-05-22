#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring> //c++ string lib
#include "Student.h"

namespace stud {
	FILE* fptr = nullptr;
	void setName(struct Student* std, char* name) {
		strcpy(std->name,name);
	}

	void setenrollmentID(struct Student* std, int eid) {
		std->enrollment_id = eid;

	}
	int readStudent(struct Student* St) {
		return fscanf(fptr, "%30[^,],%d", &St->name, &St->enrollment_id)==2;
	}
	int loadStudentList(struct Student* Sptr) {
		int i = 0;
		while (readStudent(&Sptr[i])) {
			i++;
		}
		return i;
	}
}
