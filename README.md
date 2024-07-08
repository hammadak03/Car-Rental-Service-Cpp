# Car Rental Service Project

## Introduction
The Car Rental Service project addresses the need for a robust and user-friendly system for renting and managing cars of different types, including Sedans, Compacts, and Minivans. The system provides a user-friendly interface for renting, returning, and tracking cars efficiently.

### Objectives
- **Implementation of Efficient Data Structures:** Utilize linked lists for fast operations like adding, removing, and searching cars.
- **Car Management:** Manage inventory (renting and returning) of cars with specific details.
- **Customer Interactions:** Facilitate user-friendly interactions for renting and returning cars.
- **Billing and Payment:** Accurately calculate rental costs, generate bills, and handle payments.

## Project Overview
The Car Rental Service project includes the following key features:
- **Car Management:** Classifies cars into Sedan, Compact, and Minivan types.
- **Menu Interface:** Provides a menu-driven interface for user interaction.
- **Renting Cars:** Allows users to select and rent cars based on availability.
- **Returning Cars:** Facilitates the return of rented cars with automated billing.
- **Viewing Cars:** Displays lists of available and rented cars.
- **About Us:** Includes information about the project team.

## Implementation
### Data Structures
- **Linked List:** Manages available and rented cars efficiently.
- **Class Objects:** Represents car and customer information using classes for modular development.

### Coding Details
The project is written in C++ and includes several classes:
- `Car`: Manages individual car details.
- `Node`: Implements a node for the linked list.
- `LinkedList`: Core data structure for managing car data.
- `Menu`: Provides a menu-driven interface for user interactions.

#### Example Functions:
- `addCar()`: Adds a new car to the linked list.
- `removeCar()`: Removes a car based on its ID.
- `findCar()`: Searches for a car by its ID.
- `rentCar()`: Allows customers to rent a car.
- `returnCar()`: Handles the return of rented cars.

### Main Function
The `main()` function initializes linked lists, populates car data, and starts the menu interface for user interaction.

## Project Complexity
- **Space Complexity:** O(n) due to linked list storage of car and customer information.
- **Time Complexity:** Efficient operations like adding and removing cars (O(1)), searching cars (O(n)), and core operations (O(1)).

## Drawbacks
- Stores data in memory, leading to data loss on program exit.
  
## Future Work
1. **Database Integration:** Implement MySQL or SQLite for persistent data storage.
2. **Graphical User Interface:** Develop GUI using Qt, Tkinter, or JavaFX.
3. **User Management:** Introduce accounts, roles, and data encryption for security.
4. **Dynamic Pricing:** Implement pricing models based on car popularity and seasonality.
5. **Online Payment:** Enable online payment methods for user convenience.

