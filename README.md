# Airline Ticket Booking System
## Overview
This project is an airline ticket booking system developed in C++. It allows users to manage customer details, book flights to various destinations, generate tickets, and save booking records.

## Features
 1. *Customer Details Management:*

    - Users can enter and store customer information such as name, age, gender, address, and phone number.
    Each customer is assigned a unique ID for identification.

 2. *Flight Booking:*
     - Users can choose from multiple destinations (Singapore, Japan, Germany, USA, Australia, Europe) and view available flights.
     - Flight details include flight numbers, departure times, duration, and ticket prices.
     - Customers can select a flight and book tickets based on their preference.
    
3. *Ticket Generation:*

   - After booking a flight, a ticket is generated for the customer.
   - The ticket includes customer details, flight details (destination, flight number, date, time), and ticket cost.

4. *Data Persistence:*

   - Customer details and booking records are stored in a text file (records.txt) for future reference.
   - The system supports reading from and writing to files to maintain persistent data across sessions.

5. *User Interface:*

   - The system provides a command-line interface (CLI) for users to interact with different functionalities.
   - Options are presented in a menu format, allowing users to navigate between customer details entry, flight booking, ticket generation, and exit.

## Implementation
  1. *Classes:*
       - Details: Manages customer information and static variables for customer ID, name, and gender.
      - Registration: Handles flight booking options and calculates ticket charges.
      - Ticket: Generates and displays the ticket details based on customer and flight information.
      - Management: Orchestrates the main menu and controls the flow of the application.

 2. *File Handling:*

     - Uses C++ file handling (ifstream, ofstream) to read from and write to the records.txt file for storing customer and booking data.

## Future Improvements
- Implement user authentication and authorization for secure access.
- Enhance error handling and input validation to improve robustness.
- Integrate a graphical user interface (GUI) for a more user-friendly experience.
- Expand flight destinations and booking options for greater flexibility.
 
## Conclusion
This project demonstrates a basic airline ticket booking system implemented in C++, showcasing fundamental concepts such as class structure, file handling, user input/output, and menu-driven interaction. It provides a foundation for further enhancements and scalability in a real-world airline reservation system context.
