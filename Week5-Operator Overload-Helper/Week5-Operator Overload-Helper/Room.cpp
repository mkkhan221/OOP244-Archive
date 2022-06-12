#include <iostream>
#include "Room.h"
using namespace std;
namespace sdds {
	// create no argument constructor 
		// use of *this , explicit call
	Room::Room() {
		init();
	}
	Room::Room(double w, double h, double b) {
		setRoom(w, h, b);
	}

	Room::Room(Room& r) {
		*this = r;
	}

	Room::Room(int no){
		setRoom(no, no, no);
		}
	void Room::init() {
		width = 10;
		height = 10;
		breadth = 10;
	}

	void Room::setRoom(double w, double h, double b) {
		
		if (checkDimensions(w, h, b)) {
			setWidth(w);
			setBreadth(b);
			setHeight(h);

		}
		else {
			init();
		}

	}

	void Room::setWidth(double w) {
		width = w;
	}
	void Room::setHeight(double h) {
		height = h;
	}
	void Room::setBreadth(double b) {
		breadth = b;
	}
	double Room::getWidth() const {
		return width;
	}
	double Room::getHeight() const {
		return height;
	}
	double Room::getBreadth() const {
		return breadth;
	}

	void Room::copy(Room& r) {

		this->setBreadth(r.getBreadth());
		this->setWidth(r.getWidth());
		this->setHeight(r.getHeight());


	}
	// pre fix operator overload
	Room& Room::operator++()  {
		width += 10;
		breadth += 10;
		height += 10;
		return *this;
	}
	// post-fx operator overloaded

	Room Room::operator++(int increment) {
		Room tempRoom=*this; // to return previous state of objecct before increment 
		++(*this);
		return tempRoom;
	}
	void Room::display()const {
		cout << "the breadth of room:" << getBreadth() << endl;
		cout << "the width of room:" << getWidth() << endl;
		cout << "the Height of room:" << getHeight() << endl;



	}
	// binary operator overloaded
	bool Room::operator<(Room r) const{
		
		return this->height < r.height && this->width < r.width&& this->breadth < r.breadth;
	}
	// binary operator + overloaded
	Room& Room::operator+(const Room& room) {
		this->setBreadth(this->getBreadth() + room.getBreadth());
		this->setWidth(this->getWidth() + room.getWidth());
		this->setHeight(this->getHeight() + room.getHeight());
		return *this;
	}
	
	Room::operator bool() const {
		return this->checkDimensions(this->getWidth(), this->getHeight(), this->getBreadth());
	}
	bool Room::checkDimensions(double w, double h, double b) const {
		bool check = false;
		if ((w > MIN_dimension) && (h > MIN_dimension) && (b > MIN_dimension)) {
			check = true;
		}
		return check;
	}
	// friend operator using private members
	ostream& operator<< (ostream& stream, const Room& room) {
		stream << "Room(" << room.width << "," << room.breadth << "," << room.height << ")" ;
		return stream;
	}
	bool operator == (Room& r1, Room& r2) {
		bool check = false;
		if (r1.getWidth() == r2.getWidth() && r1.getBreadth() == r2.getBreadth() && r1.getHeight() == r2.getHeight()) {
			check = true;
		}
		return check;
	}
	char* toString(Room& r) {
		// "width= xx, Breath=xxx, Height=xx"
	}

	//create constructor with room reference using &
		// create set and get functions
}