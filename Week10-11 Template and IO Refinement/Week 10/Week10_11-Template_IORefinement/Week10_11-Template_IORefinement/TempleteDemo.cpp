#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "Pair.h"
using namespace std;
namespace sdds {
	
		template<class type>
		type Add(type num1, type num2) {
			return (num1 + num2);
		}
		
	
		class AddChar {
		public:
			char* str;
		
			void setStr(const char* s) {
				str = new char[strlen(s) + 1];
				strcpy(str,s);
			}

			AddChar& operator+(AddChar& st)
			{
				char* temp = new char[strlen(this->str) + strlen(st.str) + 1];
				 
				strcpy(temp, this->str);
				strcat(temp, st.str);
				temp[strlen(temp)] = '\0';
				delete str;
				setStr(temp);
				delete[] temp;
				return *this;
			}
		};
}

using namespace sdds;
/*
int main() {
	int num1 = 3, num2=4;
	double no1 = 2.2, no2 = 2.2;
	AddChar one, two, concat;
	one.setStr("Moona");
	two.setStr("Kanwal");
	AddChar cat;
	cat=Add<AddChar>(one,two);
	cout << "The Sum is: " << cat.str << endl;
	cout << "The Sum is: " << Add(num1, num2) << endl;
	//cout<<one.Add(one, two);
	//cout << "The Sum is: " << Add("", "") << endl;

}
*/
// this is for demo for Pair template
/*
int main() {
	Pair<int,double> obj(2, 2.4);
	int* pairptr;
	pairptr = obj.getMax(1, 2.0);
	cout << pairptr[0] << " " << pairptr[1] << endl;
}*/