#pragma once // Include guard to prevent multiple inclusions
#include <iostream>
#include "Node.h"
#include "LinkedList.h"
class Queue{
    // private:
        Node *front;
        Node *back;

    public:
    Queue() : front(nullptr), back(nullptr) {}

    void push(Car *car){
        Node* n = new Node();
        if(front == nullptr){
            back = n;
            front = n;
            return;
        }
        back->next = n;
        back = n;
    }
    void pop(){
        if(front == nullptr){
            cout<<"Queue underflow"<<endl;
            return;
        }
        Node* toDelete = front;
        front = front->next;

        delete toDelete;
    }
    Car* peek() {
        if(front == nullptr){
            cout<<"No element in queue"<<endl;
            return nullptr;
        }
        Car* carToPeek = front->car;
        pop();
        return carToPeek;
    }
    bool isEmpty(){
        if(front == nullptr){
            return true;
        }
        return false;
    }
    void bookCar(string carID, LinkedList& availableCars, Queue& bookedCars) {
        Car *carToBook = availableCars.findCar(carID);

        if (carToBook != nullptr && !carToBook->isRented) {
            availableCars.removeCar(carID);
            bookedCars.push(carToBook);
            cout << "Car " << carID << " has been booked and added to the queue." << endl;
        } else {
            cout << "Car ID " << carID << " is not available for booking." << endl;
        }
    }
};