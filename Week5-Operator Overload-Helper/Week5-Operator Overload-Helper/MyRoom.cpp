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
	
	++yourRoom;
	yourRoom.display();
	myRoom=yourRoom++;
	yourRoom.display();
	myRoom.display();

	if (myRoom < yourRoom) {
		// calling << overloaded operator when argument is Room
		cout << yourRoom << "is bigger than " << myRoom  << endl;
	}
	else {
		cout << "my room is bigger than yours" << endl;
	}
	
	// 
	roomforrent=roomforrent+myRoom; // calling overloaded operator +
	cout << roomforrent << endl;
	//myRoom.display();
	room2.copy(myRoom);
	//room2.display();


	return 0;
}
