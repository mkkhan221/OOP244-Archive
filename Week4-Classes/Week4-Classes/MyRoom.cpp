#include <iostream>
#include "Building.h"


using namespace std;
using namespace sdds;
const int MAX_ROOM = 10;
int main() {
	Room myRoom, yourRoom{ 11,12,13 }, roomforrent(yourRoom);  // as oppose to to new , implicit call
	Room room2;
	Building b{};
	//Room roomforrent = new Room(myRoom);
	b.addRoom(12, 13, 14);
	b.displayDetails();
	b.addRoom(10, 10, 10);
	b.displayDetails();
	cout << "No of rooms in building: " << b.getRoomCount() << endl;
	if (b.delRoom(b.getLastRoom()))
		cout << "Deletion successful" << endl;
	else
		cout << "Deletion unsuccessful" << endl;
	b.displayDetails();
	cout << "No of rooms in building: " << b.getRoomCount() << endl;

	b.~Building();
	
	/*
	myRoom.setRoom(12, 11, 143);
	myRoom.display();
	room2.copy(myRoom);
	room2.display();
	*/

	return 0;
}
