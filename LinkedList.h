#pragma once
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <iomanip>
#include <windows.h>
#include "Node.h"
#include "car.h"

using namespace std;

class LinkedList
{
public:
    Node *head;
    LinkedList() : head(nullptr) {}

    void addCar(Car *car)
    {
        Node *newNode = new Node();
        newNode->car = car;
        newNode->next = head;
        head = newNode;
    }

    void removeCar(string carID)
    {
        Node *current = head;
        Node *prev = nullptr;

        while (current != nullptr)
        {
            if (current->car->id == carID)
            {
                if (prev != nullptr)
                {
                    prev->next = current->next;
                }
                else
                {
                    head = current->next;
                }
                current = nullptr;
                return;
            }
            prev = current;
            current = current->next;
        }
    }

    Car *findCar(string carID)
    {
        Node *current = head;
        while (current != nullptr)
        {
            if (current->car->id == carID)
            {
                return current->car;
            }
            current = current->next;
        }
        return nullptr;
    }

    void printCars()
    {
        Node *current = head;
        if (current == nullptr)
        {
            cout << "No cars available to show." << endl;
            return;
        }

        // Define column widths
        const int idWidth = 8;
        const int nameWidth = 20;
        const int yearWidth = 10;
        const int customerNameWidth = 20;
        const int customerIDWidth = 15;

        // Print table headers
        cout << left << setw(idWidth) << "Car ID" << setw(nameWidth) << "Name" << setw(yearWidth) << "Year" << setw(customerNameWidth) << "Rented by" << setw(customerIDWidth) << "CNIC" << endl;

        // Print horizontal line
        cout << setfill('-') << setw(idWidth + nameWidth + yearWidth + customerNameWidth + customerIDWidth) << "" << setfill(' ') << endl;

        while (current != nullptr)
        {
            if (current->car->isRented)
            {
                cout << left << setw(idWidth) << current->car->id
                     << setw(nameWidth) << current->car->name
                     << setw(yearWidth) << current->car->year
                     << setw(customerNameWidth) << current->car->customerName
                     << setw(customerIDWidth) << current->car->customerID << endl;
                current = current->next;
            }
            else
            {
                cout << left << setw(idWidth) << current->car->id
                     << setw(nameWidth) << current->car->name
                     << setw(yearWidth) << current->car->year
                     << setw(customerNameWidth) << "N/A" // or any other suitable value
                     << setw(customerIDWidth) << "N/A"   // or any other suitable value
                     << endl;
                current = current->next;
            }

            // Sleep for a specified time (e.g., 1 second)
            Sleep(150);
        }
    }

void printSedans()
{
    Node *current = head;
    system("CLS");
    cout << "\n\n\n\n";
    Sleep(150);
    cout << "    ****************************************************\n";
    Sleep(150);
    cout << "  ********************** SEDANS **********************\n";
    Sleep(150);
    cout << "****************************************************\n\n";

    // Define column widths
    const int idWidth = 15;
    const int nameWidth = 20;
    const int yearWidth = 10;
    const int rentWidth = 15;

    // Print table headers
    cout << left << setw(idWidth) << "Car ID" << setw(nameWidth) << "Name" << setw(yearWidth) << "Year" << setw(rentWidth) << "Rent/Day (Rs.)" << endl;

    // Print horizontal line
    cout << setfill('-') << setw(idWidth + nameWidth + yearWidth + rentWidth) << "" << setfill(' ') << endl;

    while (current != nullptr)
    {
        if (current->car->type == "Sedan")
        {
            cout << left << setw(idWidth) << current->car->id
                 << setw(nameWidth) << current->car->name
                 << setw(yearWidth) << current->car->year
                 << setw(rentWidth) << current->car->rentPerDay << endl;
        }
        current = current->next;
    }
}

void printCompacts()
{
    Node *current = head;
    system("CLS");
    cout << "\n\n\n\n";
    Sleep(150);
    cout << "    ****************************************************\n";
    Sleep(150);
    cout << "  ********************** COMPACTS ********************\n";
    Sleep(150);
    cout << "****************************************************\n\n";

    // Define column widths
    const int idWidth = 15;
    const int nameWidth = 20;
    const int yearWidth = 10;
    const int rentWidth = 15;

    // Print table headers
    cout << left << setw(idWidth) << "Car ID" << setw(nameWidth) << "Name" << setw(yearWidth) << "Year" << setw(rentWidth) << "Rent/Day (Rs.)" << endl;

    // Print horizontal line
    cout << setfill('-') << setw(idWidth + nameWidth + yearWidth + rentWidth) << "" << setfill(' ') << endl;

    while (current != nullptr)
    {
        if (current->car->type == "Compact")
        {
            cout << left << setw(idWidth) << current->car->id
                 << setw(nameWidth) << current->car->name
                 << setw(yearWidth) << current->car->year
                 << setw(rentWidth) << current->car->rentPerDay << endl;
        }
        current = current->next;
    }
}

void printMinivans()
{
    Node *current = head;
    system("CLS");
    cout << "\n\n\n\n";
    Sleep(150);
    cout << "    ****************************************************\n";
    Sleep(150);
    cout << "  ********************** MINIVANS ********************\n";
    Sleep(150);
    cout << "****************************************************\n\n";

    // Define column widths
    const int idWidth = 15;
    const int nameWidth = 20;
    const int yearWidth = 10;
    const int rentWidth = 15;

    // Print table headers
    cout << left << setw(idWidth) << "Car ID" << setw(nameWidth) << "Name" << setw(yearWidth) << "Year" << setw(rentWidth) << "Rent/Day (Rs.)" << endl;

    // Print horizontal line
    cout << setfill('-') << setw(idWidth + nameWidth + yearWidth + rentWidth) << "" << setfill(' ') << endl;

    while (current != nullptr)
    {
        if (current->car->type == "Minivan")
        {
            cout << left << setw(idWidth) << current->car->id
                 << setw(nameWidth) << current->car->name
                 << setw(yearWidth) << current->car->year
                 << setw(rentWidth) << current->car->rentPerDay << endl;
        }
        current = current->next;
    }
}


    void rentCar(string carID, LinkedList &availableCars)
    {
        Car *carToRent = availableCars.findCar(carID);
        string confirm;
        if (carToRent != nullptr && !carToRent->isRented)
        {
            system("CLS");
            string name, id;
            cout << "\n\n\n   ******************************************************************\n";
            Sleep(150);
            cout << "\n  ********************** ENTER DETAILS **********************\n";
            Sleep(150);
            cout << "\n******************************************************************\n\n";
            cout << "\n\nEnter Name: ";
            cin.ignore();
            getline(cin, carToRent->customerName);
            cout << "\n\nEnter CNIC no.: ";
            cin >> carToRent->customerID;
            cout << "\n\nAre you sure you want to rent " << carToRent->id << ", "
                 << " " << carToRent->name << ", to Mr./Ms. "<< carToRent->customerName<< " ? (Y/N)" << endl;
            cin >> confirm;
            if (confirm == "Y" || confirm == "y")
            {
                billGeneration(carToRent, true);
                carToRent->isRented = true;
                availableCars.removeCar(carID);
                this->addCar(carToRent);
            }
            system("CLS");
            cout << "\n\n" << carToRent->id << ", "
                 << " " << carToRent->name << " is rented successfully, to "<< carToRent->customerName << endl;
        }
        else
        {
            cout << "\n\nCar ID " << carID << " is not available for rent." << endl;
        }
    }

void billGeneration(Car *car, bool renting) {
    int days;

    if (renting) {
        cout << "\n\nHow many days do you want to rent " << car->name << " for?" << endl;
        cin >> days;
        system("CLS");
        car->rentalDays = days;
        double totalCost = car->rentalDays * car->rentPerDay;
        cout << "\n\n-------------------------------------------" << endl;
        Sleep(150);
        cout << "RENTAL RECEIPT" << endl;
        Sleep(150);
        cout << "Customer Name: " << car->customerName << endl;
        Sleep(150);
        cout << "Customer CNIC: " << car->customerID << endl;
        Sleep(150);
        cout << "Car Name: " << car->name << endl;
        Sleep(150);
        cout << "Car ID: " << car->id << endl;
        Sleep(150);
        cout << "Rented For(days): " << car->rentalDays << " days" << endl;
        Sleep(150);
        cout << "Rent Per Day: Rs. " << car->rentPerDay << endl;
        Sleep(150);
        cout << "Total Bill: Rs. " << totalCost << endl;
        Sleep(150);
        cout << "-------------------------------------------" << endl;
        Sleep(150);
        cout << "Please bring Rs. " << totalCost << " when returning. Thank You!" << endl;
        Sleep(150);
        system("pause");
        system("CLS");
    } else {
        cout << "After how many days are you returning " << car->name << " ?" << endl;
        cin >> days;
        system("CLS");
        car->returnDays = days;

        double initialBill = (car->rentalDays) * (car->rentPerDay);
        double totalBill = 0;

        if (car->returnDays > car->rentalDays) {
            int fine = 1000;
            int extraDay = car->returnDays - car->rentalDays;
            totalBill = (car->returnDays * car->rentPerDay) + (fine * extraDay);

            cout << "\n\n-------------------------------------------" << endl;
            Sleep(150);
            cout << "RENTAL RECEIPT" << endl;
            Sleep(150);
            cout << "Customer Name: " << car->customerName << endl;
            Sleep(150);
            cout << "Customer CNIC: " << car->customerID << endl;
            Sleep(150);
            cout << "Car Name: " << car->name << endl;
            Sleep(150);
            cout << "Car ID: " << car->id << endl;
            Sleep(150);
            cout << "Rent Per Day: Rs. " << car->rentPerDay << endl;
            Sleep(150);
            cout << "Rented For(days): " << car->rentalDays << " days" << endl;
            Sleep(150);
            cout << "Returned In(days): " << car->returnDays << " days" << endl;
            Sleep(150);
            cout << "Initial Bill: Rs. " << initialBill << endl;
            Sleep(150);
            cout << "New Bill(inc. Fine): Rs. " << totalBill << endl;
            Sleep(150);
            cout << "-------------------------------------------" << endl;
            system("pause");
            system("CLS");
        } else if (car->returnDays == car->rentalDays) {
            totalBill = initialBill;
            cout << "\n\n-------------------------------------------" << endl;
            Sleep(150);
            cout << "RENTAL RECEIPT" << endl;
            Sleep(150);
            cout << "Customer Name: " << car->customerName << endl;
            Sleep(150);
            cout << "Customer CNIC: " << car->customerID << endl;
            Sleep(150);
            cout << "Car Name: " << car->name << endl;
            Sleep(150);
            cout << "Car ID: " << car->id << endl;
            Sleep(150);
            cout << "Rent Per Day: Rs. " << car->rentPerDay << endl;
            Sleep(150);
            cout << "Rented For(days): " << car->rentalDays << " days" << endl;
            Sleep(150);
            cout << "Returned In(days): " << car->returnDays << " days" << endl;
            Sleep(150);
            cout << "Total Cost: Rs. " << totalBill << endl;
            Sleep(150);
            cout << "-------------------------------------------" << endl;
            system("pause");
            system("CLS");
        } else {
            totalBill = car->returnDays * car->rentPerDay;
            cout << "\n\n-------------------------------------------" << endl;
            Sleep(150);
            cout << "RENTAL RECEIPT" << endl;
            Sleep(150);
            cout << "Customer Name: " << car->customerName << endl;
            Sleep(150);
            cout << "Customer CNIC: " << car->customerID << endl;
            Sleep(150);
            cout << "Car Name: " << car->name << endl;
            Sleep(150);
            cout << "Car ID: " << car->id << endl;
            Sleep(150);
            cout << "Rent Per Day: Rs. " << car->rentPerDay << endl;
            Sleep(150);
            cout << "Rented For(days): " << car->rentalDays << " days" << endl;
            Sleep(150);
            cout << "Returned In(days): " << car->returnDays << " days" << endl;
            Sleep(150);
            cout << "Initial Bill: Rs. " << initialBill << endl;
            Sleep(150);
            cout << "New Bill: Rs. " << totalBill << endl;
            Sleep(150);
            cout << "-------------------------------------------" << endl;
            system("pause");
            system("CLS");
        }
    }
}

    void returnCar(string carID, LinkedList &availableCars)
    {
        Car *carToReturn = this->findCar(carID);
        string confirm;
        system("CLS");

        if (carToReturn != nullptr && carToReturn->isRented)
        {
            system("CLS");
            cout <<"\n\n"<< carToReturn->customerName << ", Are you sure you want to return " << carToReturn->id << ", "
                 << " " << carToReturn->name << " ? (Y/N)" << endl;
            cin >> confirm;
            system("CLS");
            if (confirm == "Y" || confirm == "y")
            {
                cout << "\n\n";
                billGeneration(carToReturn, false);
                carToReturn->isRented = false;
                carToReturn->customerName.clear();
                carToReturn->customerID.clear();
                this->removeCar(carID);
                availableCars.addCar(carToReturn);
                cout << "\n\nCar ID " << carID << " has been returned." << endl;
            }
        }
        else
        {
            cout << "\n\nIncorrect Car ID, or car is not rented." << endl;
        }
    }
};
