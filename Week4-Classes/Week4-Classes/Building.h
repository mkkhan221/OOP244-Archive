#ifndef SDDS_BUILDING_H
#define SDDS_BUILDING_H
#include "Room.h"
namespace sdds {
	const int MAX_ROOM = 10;
	
	class Building
	{
		Room* zoneARooms;
		char* title;
		int roomCount;
		bool isFull() const;
		bool isEmpty() const;
	public:
		Building();
		~Building();

		
		void addRoom(double, double, double);
		bool delRoom(Room& r);
		void displayDetails() const;
		int getRoomCount() const;
		Room& getLastRoom() const;

	};
}

#endif