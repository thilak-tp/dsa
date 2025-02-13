#include<iostream>
#include<vector>
#include<string>
#include<map>
// Low Level Design of a Parkign lot system
using namespace std;


enum PaymentType {
  CASH,
  CREDIT_CARD,
  DEBIT_CARD,
  UPI
};

enum ParkingSpaceType{
  BIKE_PARKING,
  CAR_PARKING,
  TRUCK_PARKING
};


enum VehicleType{
  BIKE, CAR, TRUCK
};

enum ParkingTicketStatus{
  PAID, ACTIVE
};

enum PaymentStatus{
  UNPAID, PENDING, COMPLETED, DECLINED, CANCELLED, REFUNDED
};

// A class for the parking ticket
class ParkingTicket {
  int ticketID;
  int levelID;
  int spaceID;
  string vehicleEntryDate;
  string vehicleExitDate;
  ParkingSpaceType parkingSpaceType;
  double totalCost;
  ParkingTicketStatus parkingTicketStatus;
public:
  void updateTotalCost();
  void UpdateVehicleExitTime(string vehicleExitDateTime);
};
class PaymentInfo {
  double amount;
  string paymentDate;
  int transactionId;
  ParkingTicket parkingTicket;
  PaymentStatus paymentStatus;
};





// This is the vehicle
class Vehicle{
  string licenseNumber;
  VehicleType vehicleType;
  ParkingTicket parkingTicket;
  PaymentInfo paymentInfo;

};
// A class for the individual Parking space
class ParkingSpace{
  // The space ID for the parking space
  int spaceID;
  // A flag to point if the space is free or occupied
  bool isFree;
  // A cost per hour to determine the payment
  double costPerHour;
  // A vehicle that occupies the space
  Vehicle vehicle;
  // To define what type of parking space it is
  ParkingSpaceType parkingSpaceType;
};

class Payment {
public:
  PaymentInfo makePayment(ParkingTicket parkingTicket, PaymentType paymentType);
};

// The attendant class will derive from the Account class all the necessarity as well 
class ParkingAttendant: public Account {
  Payment paymentService;
public:
  bool processVehicleEntry(Vehicle vehicle );
  PaymentInfo processPayment(ParkingTicket parkingTicket, PaymentType paymentType);
  
};
// A Class to define the gate, the gate can be entrance as well as exit
class Gate{

  int gateID;
  ParkingAttendant parkingAttendant;

};

// To define entrace to the parking lot
// We inhert the Gate class and add the Get parking ticket API
class Entrance : public Gate
{
 public:
  ParkingTicket getParkingTicket(Vehicle vehicle);   
};

// To define the exit of the parking lot
// We inhert the Gate class and add the Get parking ticket API
class Exit : public Gate
{
  public:
  ParkingTicket payParkingTicket(Vehicle vehicle);
};

// The implementation class for Parking display board that is on each of the floor
class ParkingDisplayBoard{
  // A map to store the parkingspace type and the count of free spots available of each type.
  map <ParkingSpaceType, int> freeSpotsAvailable;
public:
  void updateFreeSpotsAvailable(ParkingSpaceType parkingSpaceType, int spaces);
};


// A class to define the base class for the accounts
class Account{
// Account has below details
  string name;
  string email;
  string password;
  string empId;
  string address;
    
};


// The parking lot would have multiple floors so we define them here
class ParkingFloor
{
  //The floor level id
  int levelID;
  //The floor is full so no parking space availale 
  bool isFull;
  //The parking space available in that floor
  vector<ParkingSpace> parkingSpaces;
  //Each parking floor has a display board
  ParkingDisplayBoard parkingDisplayBoard;
  
};

class Address{
  string country;
  string city;
  string state;
  string pinCode;
  string street;
};



// This is the overall base class for the whole parking lot
class ParkingLot
{
  // To store the floors in the parking lot
  vector<ParkingFloor> parkingFloors;
  // To store the entances to the parking lot
  vector<Entrance> entrances;
  // To store the exits of the parking lot
  vector<Exit> exits;

  // To store the addres where the parking lot is situated
  Address address;
  // To store the name of the parking lot
  string parkingLotName;

public:
  bool isParkingSpaceAvailable(Vehicle vehicle);
  bool updateParkingAttendant(ParkingAttendant parkingAttendant, int gateID);
};
// The Admin class extends the Account class and adds root functionalities 
class Admin: public Account {
public:
  //Admin can add Parking floors
  bool addParkingFloor(ParkingLot parkingLot, ParkingFloor parkingFloor);
  //Admin can add Parking space to parking floors
  bool addParkingSpace(ParkingFloor parkingFloor, ParkingSpace parkingSpace);
  //Admin can add parking display board to the parking floor
  bool addParkingDisplayBoard(ParkingFloor parkingFloor);
};

// For the payment

// As have its own Payment, vehicle entry and ProcessPayment API







int main()
{
  return 0;
}
