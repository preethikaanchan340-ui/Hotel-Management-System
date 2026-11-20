#include <iostream>
#include <string>
using namespace std;

// Room Class
class Room {
private:
    int roomNumber;
    string roomType;
    double price;
    bool isBooked;

public:
    Room() {
        roomNumber = 0;
        roomType = "";
        price = 0;
        isBooked = false;
    }

    Room(int number, string type, double cost) {
        roomNumber = number;
        roomType = type;
        price = cost;
        isBooked = false;
    }

    void displayRoom() {
        cout << "\nRoom Number: " << roomNumber;
        cout << "\nRoom Type: " << roomType;
        cout << "\nRoom Price: Rs. " << price;
        cout << "\nRoom Status: ";

        if (isBooked)
            cout << "Booked";
        else
            cout << "Available";

        cout << "\n-------------------------\n";
    }
};

// Customer Class
class Customer {
private:
    int customerID;
    string name;
    string phone;

public:
    Customer() {
        customerID = 0;
        name = "";
        phone = "";
    }

    Customer(int id, string n, string p) {
        customerID = id;
        name = n;
        phone = p;
    }

    void displayCustomer() {
        cout << "\nCustomer ID: " << customerID;
        cout << "\nCustomer Name: " << name;
        cout << "\nPhone Number: " << phone;
        cout << "\n-------------------------\n";
    }
};

// Main Function
int main() {

    Room rooms[3] = {
        Room(101, "Single", 1000),
        Room(102, "Double", 2000),
        Room(103, "Deluxe", 3000)
    };

    Customer customer(1001, "Rahul", "9876543210");

    int choice;

    do {
        cout << "\n================================";
        cout << "\n      HOTEL MANAGEMENT SYSTEM";
        cout << "\n================================";
        cout << "\n1. Display Room Details";
        cout << "\n2. Display Customer Details";
        cout << "\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\n--- Room Details ---\n";

            for (int i = 0; i < 3; i++) {
                rooms[i].displayRoom();
            }
            break;

        case 2:
            cout << "\n--- Customer Details ---\n";
            customer.displayCustomer();
            break;

        case 3:
            cout << "\nThank you for using the system!\n";
            break;

        default:
            cout << "\nInvalid choice! Try again.\n";
        }

    } while (choice != 3);

    return 0;
}
