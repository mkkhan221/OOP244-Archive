#include <iostream>
#include "Common.h"
using namespace std;
using namespace sdds;
class Wrapper {
    int m_value;
public:
    Wrapper(int value = 0) {
        set(value);
    }
    // modifier
    Wrapper& set(int value) {
        m_value = value;
        return *this;
    }
    // query
    int get()const {
        return m_value;
    }
    ostream& display(ostream& ostr = cout) {
        ostr << "Cn:[";
        ostr.width(9);
        ostr.fill('0');
        ostr.setf(ios::right);
        ostr << get();
        ostr.fill(' ');
        ostr.unsetf(ios::right);
        ostr << "]";
        return ostr;
    }
    istream& read(istream& istr = cin) {
        m_value = getint("Container value: ", istr);
        return istr;
    }
    Wrapper& add(int value) {
        m_value += value;
        return *this;
    }
    //  C.add(D) 
    Wrapper& add(const Wrapper& R) {
        this->m_value += R.m_value;
        return *this;
    }
    Wrapper sum(const Wrapper& R)const {  // I don't want it to have sideeffect (changing the owner; ie *this)
        Wrapper theSum(this->m_value + R.m_value);
        return theSum;
    }
    bool isEmpty()const {
        return m_value <= 0;
    }
};

void IsWrapperEmpty(const Wrapper& C) {
    if (C.isEmpty()) {
        cout << "Container is empty!" << endl;
    }
    else {
        cout << "Container is not empty!" << endl;
    }
}

int main() {
    Wrapper C;
    Wrapper D(200);
    IsWrapperEmpty(C);
    IsWrapperEmpty(D);
    C.read();
    cout << "You Entered: ";
    C.display() << endl;
    C.add(200);
    C.display() << endl;
    C.add(D).display() << endl;
    return 0;
}

