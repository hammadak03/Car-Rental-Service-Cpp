#pragma once
#include <iostream>
#include <windows.h>
#include <iomanip>
#include "LinkedList.h"
#include "Car.h"
using namespace std;

class Menu
{
public:
    void aboutUs()
    {
        system("cls");
        Sleep(150);
        cout << "\n\n\t\t\t  _______________________________________________________________________________";
        Sleep(150);
        cout << "\n\t\t\t |                                  OUR TEAM MEMBERS                             |";
        Sleep(150);
        cout << "\n\t\t\t |                                                                               |";
        Sleep(150);
        cout << "\n\t\t\t |                                                                               |";
        Sleep(150);
        cout << "\n\t\t\t |          Hammad Ahmed         (21CS004)                                       |";
        Sleep(150);
        cout << "\n\t\t\t |                                                                               |";
        Sleep(150);
        cout << "\n\t\t\t |          Nawal Ahmed          (21CS008)                                       |";
        Sleep(150);
        cout << "\n\t\t\t |                                                                               |";
        Sleep(150);
        cout << "\n\t\t\t |          Laiba Noor Malik     (21CS084)                                       |";
        Sleep(150);
        cout << "\n\t\t\t |                                                                               |";
        Sleep(150);
        cout << "\n\t\t\t |          From Department of Computer Systems Engineering                      |";
        Sleep(150);
        cout << "\n\t\t\t |                                                                               |";
        Sleep(150);
        cout << "\n\t\t\t |            BATCH    --->   21CS                                               |";
        Sleep(150);
        cout << "\n\t\t\t |                                                                               |";
        Sleep(150);
        cout << "\n\t\t\t |            SECTION  --->   II                                                 |";
        Sleep(150);
        cout << "\n\t\t\t |_______________________________________________________________________________|\n\n\t\t\t";

        system("pause");
    }
    void welcomeScreen()
    {
        system("CLS");
        Sleep(200);
        cout << setw(130) << "\n\n\n\n\t\t\t\t     *********************************************";
        Sleep(200);
        cout << setw(130) << "\n\t\t\t\t     ******* WELCOME TO CAR RENTAL SERVICE *******";
        Sleep(200);
        cout << setw(130) << "\n\t\t\t\t     *********************************************";
        cout << "\n\n\n";
        system("pause");
    }
    void mainMenu(LinkedList &availableCars, LinkedList &rentedCars)
    {
        welcomeScreen();
        int choice;
        string carID;
        while (true)
        {
            system("CLS");
            cout << "\n\n\n\n";
            Sleep(150);
            cout << "\t\t\t\t   ******************************************************************\n";
            Sleep(150);
            cout << "\n\t\t\t\t   ********************** WELCOME TO MAIN MENU **********************\n";
            Sleep(150);
            cout << "\n\t\t\t\t   ******************************************************************\n\n";
            Sleep(150);
            cout << "\t\t\t\t 1. RENT CAR" << endl;
            Sleep(150);
            cout << "\t\t\t\t 2. RETURN CAR" << endl;
            Sleep(150);
            cout << "\t\t\t\t 3. OUR CARS" << endl;
            Sleep(150);
            cout << "\t\t\t\t 4. ABOUT US" << endl;
            Sleep(150);
            cout << "\t\t\t\t 5. EXIT" << endl;
            Sleep(150);
            cout << "\n\t\t\t\tEnter your choice :";
            cin >> choice;
            switch (choice)
            {
            case 1:
            {
                system("CLS");
                cout << "\n\n\n\n";
                Sleep(150);
                cout << "   *******************************************************\n";
                Sleep(150);
                cout << "\n  ********************** RENT CAR **********************\n";
                Sleep(150);
                cout << "\n*****************************************************\n\n";
                bool toBreak = true;
                while (toBreak)
                {
                    int choice1;
                    Sleep(150);
                    cout << "1. Sedan" << endl;
                    Sleep(150);
                    cout << "2. Compact" << endl;
                    Sleep(150);
                    cout << "3. Minivan" << endl;
                    Sleep(150);
                    cout << "4. Go Back" << endl;
                    Sleep(150);
                    cout<<"Enter your Choice: ";
                    cin >> choice1;
                    switch (choice1)
                    {
                    case 1:
                        availableCars.printSedans();
                        toBreak = false;
                        break;
                    case 2:
                        availableCars.printCompacts();
                        toBreak = false;
                        break;
                    case 3:
                        availableCars.printMinivans();
                        toBreak = false;
                        break;
                    case 4:
                        toBreak = false;
                        mainMenu(availableCars, rentedCars);
                        break;
                    default:
                        cout << "Invalid choice, try again!";
                    }
                }

                cout << endl;
                cout << "\n\n\nEnter the Car ID to rent: ";
                cin >> carID;
                system("CLS");
                rentedCars.rentCar(carID, availableCars);

                break;
            }
            case 2:
                                system("CLS");
                cout << "\n\n\n\n";
                Sleep(150);
                cout << "    *******************************************************\n";
                Sleep(150);
                cout << "\n  ********************** RETURN CAR *********************\n";
                Sleep(150);
                cout << "\n*******************************************************\n\n";
                if (rentedCars.head == nullptr)
                {
                    cout << "No car on rent right now." << endl;
                    system("pause");
                    break;
                }
                rentedCars.printCars();
                cout << "Enter the Car ID to return: ";
                cin >> carID;
                rentedCars.returnCar(carID, availableCars);
                break;

            case 3:
                system("CLS");
                cout << "\n\n\n******************************************************************\n";
                Sleep(150);
                cout << "\n********************** AVAILABLE CARS ****************************\n";
                Sleep(150);
                cout <<"\n******************************************************************\n\n";
                availableCars.printCars();
                cout<<endl;
                system("pause");
                system("CLS");
                cout << "\n\n\n******************************************************************\n";
                Sleep(150);
                cout << "********************** RENTED CARS ****************************\n";
                Sleep(150);
                cout << "******************************************************************\n\n";
                rentedCars.printCars();
                cout<<endl;
                system("pause");
                break;

            case 4:
                aboutUs();
                break;
            case 5:
                system("CLS");
                cout << endl;
                cout << "\n\n\n\tExiting the program." << endl;
                exit(0);

            default:
                system("CLS");
                cout << endl;
                cout << "\n\n\n\tInvalid choice. Please try again." << endl;
            }
        }
    }
};
