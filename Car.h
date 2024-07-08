#pragma once // Include guard to prevent multiple inclusions

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

    class Car
    {
    public:
        string id;
        string name;
        int year;
        bool isRented;
        string type;
        // ATTRIBUTES USED FOR BILLING PROCESS
        int rentPerDay; // The rent of car per day.
        int rentalDays; // Number of days the customer wants the car for.
        int returnDays; // Number of actual days after which the user returns car.
        string customerName; //Name of the customer who rents car.
        string customerID; //NIC number of the customer who rents car.


        Car(string id, std::string name, int year, std::string type, int rentPerDay)
            : id(id), name(name), year(year), isRented(false), type(type), rentPerDay(rentPerDay) {}
    };
