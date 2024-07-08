#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "LinkedList.h"
#include "Car.h"
#include "Menu.h"

using namespace std;

LinkedList availableCars;
LinkedList rentedCars;

int main()
{
    availableCars.addCar(new Car("XYZ-789", "Toyota Camry", 2022, "Sedan", 5000));
    availableCars.addCar(new Car("LMN-456", "Honda Civic", 2022, "Sedan", 4800));
    availableCars.addCar(new Car("QPR-234", "Toyota Yaris", 2021, "Sedan", 4500));
    availableCars.addCar(new Car("HJK-987", "Toyota Mark-X", 2005, "Sedan", 2500));
    availableCars.addCar(new Car("DEF-321", "Mercedes BenZ", 2013, "Sedan", 5500));
    availableCars.addCar(new Car("MNO-654", "Proton Saga", 2011, "Sedan", 3200));
    availableCars.addCar(new Car("RST-876", "Toyota Vitz", 2014, "Compact", 4000));
    availableCars.addCar(new Car("GHI-543", "Suzuki Cultus", 2016, "Compact", 3600));
    availableCars.addCar(new Car("UVW-210", "Daihatsu Coure", 2009, "Compact", 2800));
    availableCars.addCar(new Car("PQR-765", "Toyota Hiace", 2012, "Minivan", 6500));
    availableCars.addCar(new Car("CDE-098", "Suzuki Bolan", 2012, "Minivan", 6000));
    availableCars.addCar(new Car("JKL-432", "Mazda Biante", 2014, "Minivan", 6200));
    availableCars.addCar(new Car("VWX-678", "FAW XPV", 2017, "Minivan", 7000));
    availableCars.addCar(new Car("ABC-901", "Daihatsu Hijet", 2018, "Minivan", 7500));
    availableCars.addCar(new Car("NOP-345", "Nissan Clipper", 2019, "Minivan", 8000));
    availableCars.addCar(new Car("QRS-567", "Daihatsu Mira", 2023, "Compact", 4800));
    availableCars.addCar(new Car("IJK-789", "Hyundai Sonata", 2018, "Sedan", 5000));
    availableCars.addCar(new Car("TUV-654", "Suzuki Swift", 2023, "Compact", 4500));
    availableCars.addCar(new Car("LMN-123", "Suzuki Alto", 2012, "Compact", 3200));
    availableCars.addCar(new Car("XYZ-876", "Nissan March", 2019, "Compact", 4200));
    Menu m;
    m.mainMenu(availableCars, rentedCars);
}