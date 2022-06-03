#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring> // c++ string lib

#include "Student.h"
using namespace std;

namespace stud {
	FILE* fptr = NULL;
	//Student s001 = { "John",001 }; // for showing use of extern 

	void setName(Student* std, char* name) {
		strcpy(std->name, name);
	}

	void setEnrollmentId(Student* std, int id) {
		std->enrollment_id = id;
	}
	int loadStudentList(Student* Sptr) {
		int i = 0;
		while (readStudent(&Sptr[i])) {
			i++;
		}
		return i;
	}
	int readStudent(Student* St) {
		return fscanf(fptr,"%30[^,],%d", &St->name, &St->enrollment_id)==2;// can use set methods
	}

	
}

// within name space stud::setEnrollmentId will not work as now the scope is sdl .using namespace
// stud allow the one scope to access members of others