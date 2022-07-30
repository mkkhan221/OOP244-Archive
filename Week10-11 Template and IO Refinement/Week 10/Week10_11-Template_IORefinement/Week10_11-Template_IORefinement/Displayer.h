#include <iostream>
using namespace std;
/*
* To Convert a regular class to a class template
1 - add the template tag to all blocks
    involved with class
2 - change the focused type to the type template
3-  add the signature of the template (<place holder>)
    to all the class names except:
    A- The name of the class after the template
    B- Constructor names
    C- Destructor name
*/

/*
* Template documentation
* 23 - type must have default constructor
* 27,28 and 30,31- must comply with rule of three rule of three
* 39- type must work with istream operator>> for read
* 35- type must work with ostream operator<< for write
*/
template <typename type>
class Displayer {  // A- will not need the <type> signature
    type m_data{};
public:
    Displayer() {   // B-  will not need the <type> signature
    }
    Displayer(type data) { // B- will not need the <type> signature
        m_data = data;
    }
    Displayer<type>& operator=(type data);
    ostream& show(ostream& ostr)const {
        return ostr << m_data;
    }
    istream& read(istream& istr) {
        return istr >> m_data;
    }
    virtual ~Displayer() { // C- will not need the <type> signature
    }
};

template <typename type>
Displayer<type>& Displayer<type>::operator=(type data) {
    m_data = data;
    return *this;
}

template <typename type>
ostream& operator<<(ostream& ostr, const Displayer<type>& ro) {
    return ro.show(ostr);
}
template <typename type>
istream& operator>>(istream& istr, Displayer<type>& ro) {
    return ro.read(istr);
}
