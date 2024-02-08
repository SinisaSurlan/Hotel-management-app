#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int response;

class Customer {
    char name[20];
    char nationality[10];
    int age;
};

class Rooms {
public:
    int roomNum;
    bool roomAvailability;

    // Constructor
    Rooms(int num, bool availability) : roomNum(num), roomAvailability(availability) {}
};

std::vector<Rooms> createRooms(int num) {
    std::vector<Rooms> roomList;
    for(int i = 0; i < num; i++) {
        // Assuming default values for roomNum and roomAvailability
        // You can modify this according to your requirements
        Rooms room(i+1, true); // Room numbers start from 1
        roomList.push_back(room);
    }
    return roomList;
}

void showAvailableRoom(const std::vector<Rooms>& allRooms) {
	system("clear");
    for(const auto& room : allRooms) {
        // Example usage:
        cout << "Room " << room.roomNum << " Availability: " << room.roomAvailability << endl;
    }
    cout << endl;
}

void putInput(){
    cin >> response;
}

void showResponse(int response,const std::vector<Rooms>& allRooms){
    switch(response){
        case 1:
            showAvailableRoom(allRooms);
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
    }
}

void interface(const std::vector<Rooms>& allRooms){
    cout << "Hotel management system" << endl;
    cout << "--------------------------------" << endl;
    cout << "1. Show available rooms" << endl;
    cout << "2. Check-in room" << endl;
    cout << "3. Check-out room" << endl;
    cout << "4. Search Customer" << endl;
    cout << "5. Guest summary" << endl;
    cout << "6. Exit" << endl;
    cout << "--------------------------------" << endl;
    cout << "Enter your choice: " << endl;
    putInput();
    showResponse(response,allRooms); // Pass allRooms to showResponse
}

int main() {
    int numRooms = 10;
    std::vector<Rooms> allRooms = createRooms(numRooms);


    do{
        interface(allRooms); // Pass allRooms to interface
    } while(response != 6);

    return 0;
}
