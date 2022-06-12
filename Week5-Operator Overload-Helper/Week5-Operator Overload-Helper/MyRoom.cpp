#include <iostream>
//#include "Building.h"
#include "Room.h"
//#include "Common.h"

using namespace std;
using namespace sdds;
const int MAX_ROOM = 10;
int main() {
	Room myRoom, yourRoom{ 11,12,13 }, roomforrent(yourRoom);  // as oppose to to new , implicit call
	Room room2;
	Room room3(34); // call implicit at time of initialization of object
	room2 = (Room)56; // type cast int to Room

	//room2.display();
	++yourRoom;
	//yourRoom.display();
	myRoom=yourRoom++;
	//yourRoom.display();
	//myRoom.display();

	myRoom.setRoom(12, 12, 12);
	yourRoom.setRoom(12, 12, 12);
	if (myRoom < yourRoom) {
		// calling << overloaded operator when argument is Room
		cout << yourRoom << "is bigger than " << myRoom  << endl;
	}
	else if(myRoom==yourRoom) {
		cout << "my room same as yours" << endl;
	}
	
	// 
	roomforrent=roomforrent+myRoom; // calling overloaded operator +
	//cout << roomforrent << endl;
	// if ( 35) 
	if (room2) {
		cout << "My Room is as per standard dimensions" << endl;
	}
	else {
		cout << "My Room is no per standard dimensions" << endl;
	}
	//myRoom.display();
	room2.copy(myRoom);
	//room2.display();


	return 0;
}
