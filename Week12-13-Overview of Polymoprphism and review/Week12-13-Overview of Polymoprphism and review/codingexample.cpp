/*
Create a template function getnum which takes 3 arguments variable type min and max , a message to print and istream type object ref
the function inputs a number, makes sure that input is valid number and checks of input number is within min and max range . 
print error message if not and ask again. 
the functions returns the valid number.

*/

/*
Consider the following incomplete class definitions. 
Fill in the missing code as described in the comments. 
Your solution should call the appropriate set and get functions on a Book object (4 marks).
class Book{ public: 
//Provide: // - a pure virtual function to set the ISBN/eISBN 
// - a pure virtual function to get the ISBN/eISBN };
// create an EBook class that inherits from Book 
{ 
int eISBN; 
public: void set(const int _eISBN)
{eISBN=_eISBN;}; 
int get() const{return eISBN;};
}; 
// create a PaperBook class that inherits from Book
{ int isbn;
public: void set(const int _isbn){isbn=_isbn}; 
int get() const{return isbn;}; 
};
*/

//Answer Q1
#include <iostream>
using namespace std;

template <typename T>
T getNum(T min, T max, const char* msg, istream& in) {
    T value;
    int keepreading = 1;
    do {
        cout << msg << ":" << endl;;
        in >> value;
        if (!cin) {   // check for invalid character
            cerr << "Invalid character.  Try Again." << endl;
            cin.clear();
            cin.ignore(2000, '\n');
        }
        else if (value <= 0 || value > max) {
            cerr << value << " is outside the range [1," <<
                max << ']' << endl;
            cerr << "Invalid input.  Try Again." << endl;
            cin.ignore(2000, '\n');
        }
        else
            keepreading = 0;
    } while (keepreading == 1);
    return value;

}
/*
int main() {

    double num = getNum<double>(10, 20, "Enter a double value", cin);
    cout << num << endl;
}
*/