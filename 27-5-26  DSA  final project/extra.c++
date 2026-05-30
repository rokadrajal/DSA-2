#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <fstream>
#include <ctime>

using namespace std;

// ================= PASSENGER CLASS =================
class Passenger
{
public:
    string name;
    int age;
    string gender;
    string phone;

    Passenger() {}

    Passenger(string n, int a, string g, string p)
    {
        name = n;
        age = a;
        gender = g;
        phone = p;
    }
};

// ================= TRAIN CLASS =================
class Train
{
public:
    int trainNumber;
    string trainName;
    string source;
    string destination;
    int totalSeats;
    int availableSeats;
    float fare;

    Train() {}

    Train(int num, string name, string src, string dest,
          int seats, float f)
    {
        trainNumber = num;
        trainName = name;
        source = src;
        destination = dest;
        totalSeats = seats;
        availableSeats = seats;
        fare = f;
    }
};

// ================= TICKET CLASS =================
class Ticket
{
public:
    string pnr;
    int trainNumber;
    Passenger passenger;
    string status;
    float fare;

    Ticket() {}

    Ticket(string p, int tNo, Passenger pass,
           string s, float f)
    {
        pnr = p;
        trainNumber = tNo;
        passenger = pass;
        status = s;
        fare = f;
    }
};

// ================= LINKED LIST =================
class Node
{
public:
    Passenger data;
    Node* next;

    Node(Passenger p)
    {
        data = p;
        next = NULL;
    }
};

class LinkedList
{
private:
    Node* head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void insertPassenger(Passenger p)
    {
        Node* newNode = new Node(p);
        newNode->next = head;
        head = newNode;
    }

    void displayPassengers()
    {
        Node* temp = head;

        while (temp != NULL)
        {
            cout << "Name : " << temp->data.name << endl;
            cout << "Age : " << temp->data.age << endl;
            cout << "Gender : " << temp->data.gender << endl;
            cout << "Phone : " << temp->data.phone << endl;
            cout << "----------------------" << endl;

            temp = temp->next;
        }
    }
};

// ================= RAILWAY SYSTEM =================
class RailwaySystem
{
private:
    vector<Train> trains;
    vector<Ticket> bookings;

    queue<Passenger> waitlist;
    stack<Ticket> cancelledTickets;

    LinkedList passengerList;

public:

    // Add Train
    void addTrain()
    {
        int number, seats;  
        string name, src, dest;
        float fare;

        cout << "\nEnter Train Number : ";
        cin >> number;

        cin.ignore();

        cout << "Enter Train Name : ";
        getline(cin, name);

        cout << "Enter Source : ";
        getline(cin, src);

        cout << "Enter Destination : ";
        getline(cin, dest);

        cout << "Enter Total Seats : ";
        cin >> seats;

        cout << "Enter Fare : ";
        cin >> fare;

        Train t(number, name, src, dest, seats, fare);

        trains.push_back(t);

        cout << "\nTrain Added Successfully!\n";
    }

    // Display Trains
    void displayTrains()
    {
        if (trains.empty())
        {
            cout << "\nNo Trains Available!\n";
            return;
        }

        for (int i = 0; i < trains.size(); i++)
        {
            cout << "\nTrain Number : "
                 << trains[i].trainNumber << endl;

            cout << "Train Name : "
                 << trains[i].trainName << endl;

            cout << "Route : "
                 << trains[i].source
                 << " -> "
                 << trains[i].destination << endl;

            cout << "Available Seats : "
                 << trains[i].availableSeats << endl;

            cout << "Fare : "
                 << trains[i].fare << endl;

            cout << "----------------------" << endl;
        }
    }

    // Generate PNR
    string generatePNR()
    {
        return "PNR" + to_string(rand() % 100000);
    }

    // Book Ticket
    void bookTicket()
    {
        int trainNo;

        cout << "\nEnter Train Number : ";
        cin >> trainNo;

        Train* selectedTrain = NULL;

        for (int i = 0; i < trains.size(); i++)
        {
            if (trains[i].trainNumber == trainNo)
            {
                selectedTrain = &trains[i];
                break;
            }
        }

        if (selectedTrain == NULL)
        {
            cout << "\nTrain Not Found!\n";
            return;
        }

        string name, gender, phone;
        int age;

        cin.ignore();

        cout << "Enter Passenger Name : ";
        getline(cin, name);

        cout << "Enter Age : ";
        cin >> age;

        cin.ignore();

        cout << "Enter Gender : ";
        getline(cin, gender);

        cout << "Enter Phone : ";
        getline(cin, phone);

        Passenger p(name, age, gender, phone);

        passengerList.insertPassenger(p);

        string status;

        if (selectedTrain->availableSeats > 0)
        {
            status = "CONFIRMED";
            selectedTrain->availableSeats--;
        }
        else
        {
            status = "WAITLIST";
            waitlist.push(p);
        }

        string pnr = generatePNR();

        Ticket t(
            pnr,
            trainNo,
            p,
            status,
            selectedTrain->fare
        );

        bookings.push_back(t);

        cout << "\nTicket Booked Successfully!\n";
        cout << "PNR : " << pnr << endl;
        cout << "Status : " << status << endl;
    }

    // Display Bookings
    void displayBookings()
    {
        if (bookings.empty())
        {
            cout << "\nNo Bookings Found!\n";
            return;
        }

        for (int i = 0; i < bookings.size(); i++)
        {
            cout << "\nPNR : "
                 << bookings[i].pnr << endl;

            cout << "Train Number : "
                 << bookings[i].trainNumber << endl;

            cout << "Passenger Name : "
                 << bookings[i].passenger.name << endl;

            cout << "Status : "
                 << bookings[i].status << endl;

            cout << "Fare : "
                 << bookings[i].fare << endl;

            cout << "----------------------" << endl;
        }
    }

    // Cancel Ticket
    void cancelTicket()
    {
        string pnr;

        cout << "\nEnter PNR Number : ";
        cin >> pnr;

        for (int i = 0; i < bookings.size(); i++)
        {
            if (bookings[i].pnr == pnr)
            {
                cancelledTickets.push(bookings[i]);

                bookings[i].status = "CANCELLED";

                // increase seat
                for (int j = 0; j < trains.size(); j++)
                {
                    if (trains[j].trainNumber ==
                        bookings[i].trainNumber)
                    {
                        trains[j].availableSeats++;
                    }
                }

                cout << "\nTicket Cancelled Successfully!\n";

                upgradeWaitlist();

                return;
            }
        }

        cout << "\nPNR Not Found!\n";
    }

    // Upgrade Waitlist
    void upgradeWaitlist()
    {
        if (!waitlist.empty())
        {
            Passenger p = waitlist.front();
            waitlist.pop();

            for (int i = 0; i < bookings.size(); i++)
            {
                if (bookings[i].passenger.phone == p.phone &&
                    bookings[i].status == "WAITLIST")
                {
                    bookings[i].status = "CONFIRMED";

                    cout << "\nWaitlist Passenger Confirmed!\n";
                    return;
                }
            }
        }
    }

    // Undo Cancellation
    void undoCancellation()
    {
        if (cancelledTickets.empty())
        {
            cout << "\nNo Cancellation History!\n";
            return;
        }

        Ticket t = cancelledTickets.top();
        cancelledTickets.pop();

        for (int i = 0; i < bookings.size(); i++)
        {
            if (bookings[i].pnr == t.pnr)
            {
                bookings[i].status = "CONFIRMED";

                cout << "\nCancellation Undo Successful!\n";
                return;
            }
        }
    }

    // Display Waitlist
    void displayWaitlist()
    {
        if (waitlist.empty())
        {
            cout << "\nWaitlist Empty!\n";
            return;
        }

        queue<Passenger> temp = waitlist;

        cout << "\nWaitlist Passengers:\n";

        while (!temp.empty())
        {
            Passenger p = temp.front();

            cout << p.name << endl;

            temp.pop();
        }
    }

    // Save Data
    void saveData()
    {
        ofstream file("trains.txt");

        for (int i = 0; i < trains.size(); i++)
        {
            file << trains[i].trainNumber << " "
                 << trains[i].trainName << " "
                 << trains[i].source << " "
                 << trains[i].destination << " "
                 << trains[i].availableSeats << " "
                 << trains[i].fare << endl;
        }

        file.close();
    }

    // Main Menu
    void menu()
    {
        int choice;

        do
        {
            cout << "\n=============================\n";
            cout << " Railway Booking System\n";
            cout << "=============================\n";

            cout << "1. Add Train\n";
            cout << "2. Display Trains\n";
            cout << "3. Book Ticket\n";
            cout << "4. Display Bookings\n";
            cout << "5. Cancel Ticket\n";
            cout << "6. Undo Cancellation\n";
            cout << "7. Display Waitlist\n";
            cout << "8. Display Passengers\n";
            cout << "9. Exit\n";

            cout << "\nEnter Choice : ";
            cin >> choice;

            switch (choice)
            {
                case 1:
                    addTrain();
                    break;

                case 2:
                    displayTrains();
                    break;

                case 3:
                    bookTicket();
                    break;

                case 4:
                    displayBookings();
                    break;

                case 5:
                    cancelTicket();
                    break;

                case 6:
                    undoCancellation();
                    break;

                case 7:
                    displayWaitlist();
                    break;

                case 8:
                    passengerList.displayPassengers();
                    break;

                case 9:
                    saveData();
                    cout << "\nThank You!\n";
                    break;

                default:
                    cout << "\nInvalid Choice!\n";
            }

        } while (choice != 9);
    }
};

// ================= MAIN FUNCTION =================
int main()
{
    srand(time(0));

    RailwaySystem system;

    system.menu();

    return 0;
}