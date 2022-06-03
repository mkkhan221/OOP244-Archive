#include <iostream>
#include "Building.h"

using namespace std;
namespace sdds {

	Building::Building() {
		zoneARooms = new Room[MAX_ROOM];
		title = new char[] {"A"};
		roomCount = 0;
	}
	Building::~Building() {
		delete[] zoneARooms;
		zoneARooms = nullptr;
		delete[] title;  //delete [] title 
		title = nullptr;
		roomCount = 0;
	}
	void Building::addRoom(double rw, double rb, double rh) {
		if (isFull()) {
			cout << "The building is full. Unsuccesful addition" << endl;
		}
		else{
			Room r{ rw,rh,rb };
			zoneARooms[roomCount] = r;
			roomCount += 1;
			cout << "The room is added successfully" << endl;
		}
	}
	bool Building::delRoom(Room& r) {// alternative , return true for operation successful and print in main
		auto check = false;
		if (!isEmpty()) {
			roomCount -= 1;
			check = true;
		}
		return check;
	}
	int Building::getRoomCount() const{
		return roomCount;
	}
	Room& Building::getLastRoom() const {
		return zoneARooms[getRoomCount() - 1];
	}
	bool Building::isFull() const {
		auto check=false;
		if (roomCount == MAX_ROOM) {
			check = true;
		}
		return check;
	}
	bool Building::isEmpty() const{
		bool check = false;
		if (getRoomCount() == 0)
			check = true;
		return check;
	}

	void Building::displayDetails() const {
		cout << "The name of building is " << title << endl;
		for (int i = 0; i < roomCount;i++) {
			zoneARooms[i].display();
		}
	}
	// addRoom()-- Non
	// cloneRoom()--
	//deleteRoom() ---jen
	//Overloaded Constructors  --Nour
}