#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

class Management;

void mainMenu();

class Details {
public:
    static string name, gender;
    int phoneNo;
    int age;
    string add;
    static int cId;
    char arr[100];

    void information() {
        cout << "\nEnter the customer ID: ";
        cin >> cId;
        cin.ignore();

        cout << "\nEnter the name: ";
        getline(cin, name);

        cout << "\nEnter the age: ";
        cin >> age;

        cin.ignore();
        cout << "\nAddress: ";
        getline(cin, add);
        cout << "\nGender: ";
        cin >> gender;
        cout << "Your details are saved with us\n" << endl;
    }
};

int Details::cId;
string Details::name;
string Details::gender;

class Registration {
public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void flights() {
        string flightN[] = {"Singapore", "Japan", "Germany", "USA", "Australia", "Europe"};

        for (int a = 0; a < 6; a++) {
            cout << (a + 1) << ". Flight to " << flightN[a] << endl;
        }

        cout << "\nWelcome to the Airlines!" << endl;
        cout << "Press the number of the country you want to book the flight to: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "_______________________Welcome to Singapore Airlines____________________\n" << endl;
                cout << "Your comfort is our priority. Enjoy the journey!" << endl;
                cout << "Following are the flights \n" << endl;
                cout << "1. SIN - 498" << endl;
                cout << "\t08-01-2024 8:00AM 10hrs Rs. 14000" << endl;
                cout << "2. SIN - 658" << endl;
                cout << "\t15-02-2024 4:00AM 12hrs Rs. 10000" << endl;
                cout << "3. SIN - 508" << endl;
                cout << "\t11-03-2024 11:00AM 11hrs Rs. 9000" << endl;

                cout << "\nSelect the flight you want to book: ";
                cin >> choice1;

                if (choice1 == 1) {
                    charges = 14000;
                    cout << "\nYou have successfully booked the flight SIN - 498" << endl;
                } else if (choice1 == 2) {
                    charges = 10000;
                    cout << "\nYou have successfully booked the flight SIN - 658" << endl;
                } else if (choice1 == 3) {
                    charges = 9000;
                    cout << "\nYou have successfully booked the flight SIN - 508" << endl;
                } else {
                    cout << "Invalid input, shifting to the previous menu" << endl;
                    flights();
                }

                cout << "Press any key to go back to the main menu: ";
                cin.ignore(); // Clear newline character
                cin.get();    // Wait for Enter key
                mainMenu();
                break;
            }

            case 2: {
                cout << "_______________________Welcome to Japan Airlines____________________\n" << endl;
                cout << "Your comfort is our priority. Enjoy the journey!" << endl;
                cout << "Following are the flights \n" << endl;
                cout << "1. JP - 198" << endl;
                cout << "\t09-01-2024 2:00PM 20hrs Rs. 34000" << endl;
                cout << "2. JP - 158" << endl;
                cout << "\t11-03-2024 6:00AM 23hrs Rs. 29000" << endl;
                cout << "3. JP - 208" << endl;
                cout << "\t14-01-2024 12:00AM 21hrs Rs. 40000" << endl;

                cout << "\nSelect the flight you want to book: ";
                cin >> choice1;

                if (choice1 == 1) {
                    charges = 34000;
                    cout << "\nYou have successfully booked the flight JP - 198" << endl;
                } else if (choice1 == 2) {
                    charges = 29000;
                    cout << "\nYou have successfully booked the flight JP - 158" << endl;
                } else if (choice1 == 3) {
                    charges = 40000;
                    cout << "\nYou have successfully booked the flight JP - 208" << endl;
                } else {
                    cout << "Invalid input, shifting to the previous menu" << endl;
                    flights();
                }

                cout << "Press any key to go back to the main menu: ";
                cin.ignore(); // Clear newline character
                cin.get();    // Wait for Enter key
                mainMenu();
                break;
            }

            case 3: {
                cout << "_______________________Welcome to German Airways____________________\n" << endl;
                cout << "Your comfort is our priority. Enjoy the journey!" << endl;
                cout << "Following are the flights \n" << endl;
                cout << "1. GER - 798" << endl;
                cout << "\t12-01-2024 10:00AM 14hrs Rs. 44000" << endl;

                cout << "\nSelect the flight you want to book: ";
                cin >> choice1;

                if (choice1 == 1) {
                    charges = 44000;
                    cout << "\nYou have successfully booked the flight GER - 798" << endl;
                } else {
                    cout << "Invalid input, shifting to the previous menu" << endl;
                    flights();
                }

                cout << "Press any key to go back to the main menu: ";
                cin.ignore(); // Clear newline character
                cin.get();    // Wait for Enter key
                mainMenu();
                break;
            }

            case 4: {
                cout << "_______________________Welcome to US Airways____________________\n" << endl;
                cout << "Your comfort is our priority. Enjoy the journey!" << endl;
                cout << "Following are the flights \n" << endl;
                cout << "1. US - 567" << endl;
                cout << "\t10-07-2024 9:00AM 22hrs Rs. 37000" << endl;
                cout << "2. US - 658" << endl;
                cout << "\t09-08-2024 6:00AM 22hrs Rs. 35000" << endl;
                cout << "3. US - 508" << endl;
                cout << "\t12-09-2024 10:00AM 21hrs Rs. 30000" << endl;

                cout << "\nSelect the flight you want to book: ";
                cin >> choice1;

                if (choice1 == 1) {
                    charges = 37000;
                    cout << "\nYou have successfully booked the flight US - 567" << endl;
                } else if (choice1 == 2) {
                    charges = 35000;
                    cout << "\nYou have successfully booked the flight US - 658" << endl;
                } else if (choice1 == 3) {
                    charges = 30000;
                    cout << "\nYou have successfully booked the flight US - 508" << endl;
                } else {
                    cout << "Invalid input, shifting to the previous menu" << endl;
                    flights();
                }

                cout << "Press any key to go back to the main menu: ";
                cin.ignore(); // Clear newline character
                cin.get();    // Wait for Enter key
                mainMenu();
                break;
            }

            case 5: {
                cout << "_______________________Welcome to Australian Airlines____________________\n" << endl;
                cout << "Your comfort is our priority. Enjoy the journey!" << endl;
                cout << "Following are the flights \n" << endl;
                cout << "1. AS - 698" << endl;
                cout << "\t18-01-2024 9:00AM 20hrs Rs. 40000" << endl;
                cout << "2. AS - 158" << endl;
                cout << "\t19-03-2024 4:00AM 22hrs Rs. 50000" << endl;
                cout << "3. AS - 708" << endl;
                cout << "\t17-02-2024 10:00AM 15hrs Rs. 42000" << endl;

                cout << "\nSelect the flight you want to book: ";
                cin >> choice1;

                if (choice1 == 1) {
                    charges = 40000;
                    cout << "\nYou have successfully booked the flight AS - 698" << endl;
                } else if (choice1 == 2) {
                    charges = 50000;
                    cout << "\nYou have successfully booked the flight AS - 158" << endl;
                } else if (choice1 == 3) {
                    charges = 42000;
                    cout << "\nYou have successfully booked the flight AS - 708" << endl;
                } else {
                    cout << "Invalid input, shifting to the previous menu" << endl;
                    flights();
                }

                cout << "Press any key to go back to the main menu: ";
                cin.ignore(); // Clear newline character
                cin.get();    // Wait for Enter key
                mainMenu();
                break;
            }

            case 6: {
                cout << "_______________________Welcome to European Airlines____________________\n" << endl;
                cout << "Your comfort is our priority. Enjoy the journey!" << endl;
                cout << "Following are the flights \n" << endl;
                cout << "1. EU - 898" << endl;
                cout << "\t22-01-2024 12:00PM 18hrs Rs. 36000" << endl;
                cout << "2. EU - 958" << endl;
                cout << "\t21-01-2024 6:00AM 19hrs Rs. 39000" << endl;
                cout << "3. EU - 608" << endl;
                cout << "\t19-01-2024 9:00AM 20hrs Rs. 42000" << endl;

                cout << "\nSelect the flight you want to book: ";
                cin >> choice1;

                if (choice1 == 1) {
                    charges = 36000;
                    cout << "\nYou have successfully booked the flight EU - 898" << endl;
                } else if (choice1 == 2) {
                    charges = 39000;
                    cout << "\nYou have successfully booked the flight EU - 958" << endl;
                } else if (choice1 == 3) {
                    charges = 42000;
                    cout << "\nYou have successfully booked the flight EU - 608" << endl;
                } else {
                    cout << "Invalid input, shifting to the previous menu" << endl;
                    flights();
                }

                cout << "Press any key to go back to the main menu: ";
                cin.ignore(); // Clear newline character
                cin.get();    // Wait for Enter key
                mainMenu();
                break;
            }

            default: {
                cout << "Invalid input, shifting to the previous menu" << endl;
                mainMenu();
                break;
            }
        }
    }
};

float Registration::charges;
int Registration::choice;

class Ticket : public Registration, Details {
public:
    void Bill() {
        string destination = "";
        ofstream outf("records.txt");
        {
            outf << "___________ABC Airlines__________" << endl;
            outf << "____________Ticket_______________" << endl;
            outf << "_____________Bill________________" << endl;

            outf << "Customer ID: " << Details::cId << endl;
            outf << "Customer Name: " << Details::name << endl;
            outf << "Customer Gender: " << Details::gender << endl;
            outf << "Description: " << "Have a Safe Journey!!.. Visit us Again. Thankyou!!" << endl;

            if (Registration::choice == 1)
                destination = "Singapore";
            else if (Registration::choice == 2)
                destination = "Japan";
            else if (Registration::choice == 3)
                destination = "Germany";
            else if (Registration::choice == 4)
                destination = "USA";
            else if (Registration::choice == 5)
                destination = "Australia";
            else if (Registration::choice == 6)
                destination = "Europe";

            outf << "Destination\t\t" << destination << endl;
            outf << "Flight cost: \t\t" << Registration::charges << endl;
        }
        outf.close();
    }

    void dispBill() {
        ifstream ifs("records.txt");
        {
            if (!ifs) {
                cout << "File error!" << endl;
            }
            while (!ifs.eof()) {
                ifs.getline(arr, 100);
                cout << arr << endl;
            }
        }
        ifs.close();
    }
};

void mainMenu() {
    int lchoice;
    int back;

    cout << "\t           Welocme to Our Airlines  \n" << endl;
    cout << "\t_____________Main Menu_______________" << endl;

    cout << "\t_____________________________________" << endl;
    cout << "\t|\t\t\t\t\t\t|" << endl;

    cout << "\t|\t Press 1 to add the Customer Details       \t|" << endl;
    cout << "\t|\t Press 2 for Flight Registration          \t|" << endl;
    cout << "\t|\t Press 3 for Ticket and Charges           \t|" << endl;
    cout << "\t|\t Press 4 to Exit                          \t|" << endl;
    cout << "\t|\t\t\t\t\t\t|" << endl;
    cout << "\t_____________________________________\n" << endl;

    cout << "Enter your choice: ";
    cin >> lchoice;

    Details d;
    Registration r;
    Ticket t;

    switch (lchoice) {
        case 1: {
            cout << "_____________Customers_____________\n" << endl;
            d.information();
            cout << "Press any key to go back to Main menu ";
            cin.ignore(); // Clear newline character
            cin.get();    // Wait for Enter key
            mainMenu();
            break;
        }
        case 2: {
            cout << "___________Book a flight using this system___________\n" << endl;
            r.flights();
            break;
        }
        case 3: {
            cout << "___________GET YOUR TICKET___________\n" << endl;
            t.Bill();

            cout << "Your ticket is printed, you can collect it \n" << endl;
            cout << "Press 1 to display your ticket ";

            cin >> back;

            if (back == 1) {
                t.dispBill();
                cout << "Press any key to go back to main menu: ";
                cin.ignore(); // Clear newline character
                cin.get();    // Wait for Enter key
                mainMenu();
            } else {
                mainMenu();
            }
            break;
        }
        case 4: {
            cout << "\n\n\t___________Thank-you___________" << endl;
            break;
        }
        default: {
            cout << "Invalid input, Please try again!\n" << endl;
            mainMenu();
            break;
        }
    }
}

class Management {
public:
    Management() {
        mainMenu();
    }
};

int main() {
    Management Mobj;
    return 0;
}
