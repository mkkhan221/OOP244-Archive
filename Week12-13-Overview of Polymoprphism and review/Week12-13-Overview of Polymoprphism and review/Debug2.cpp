/// Find Errors
/*
#include <iostream>
using namespace std;
class Student {
    char* name;
    int rollNumber;
public:
    Student(char* n, int rn) {
        strcpy(name,n);
        rollNumber = rn;
    }

    void setNumber(int no) {
        rollNumber = no;
    }
    int getRollNumber() {
        return rollNumber;
    }
};

class Test : Student {
    int mark1, mark2;
public:
    Test(int m1, int m2)
        :mark1(m1), mark2(m2) {
    }
    int getRollNumber() {
        return Student::getRollNumber();
    }
};
int main()
{
    Test test1(92,85);
    cout << test1.getRollNumber();
}
*/

// line 10: strcpy(name,n); this will fail as name not initialized
// name =new char[31]{'\0'}
// 
//line 34: Test test1(92,85) will fail as Student doesn't have defualt constructor and argument constructor not called 
//change is Test(char * n, int rollnum, int m1, int m2): Student(n, rollnum), mark1(m1), mark2(m2) // call argument constructor with vvalues