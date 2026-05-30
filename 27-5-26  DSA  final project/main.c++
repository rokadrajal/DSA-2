#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <list>
using namespace std;

// ========== Train Class =========
class Train
{
public:
    int trainnumber;
    string name;
    string source;
    string destination;
    string departuretime;
    string arrivaltime;
    int totalseats;
    int availableseats;
    float fare;

    Train(int trainnumber, string name, string source, string destination, string departuretime, string arrivaltime, int totalseats, int availableseats, float fare)
    {
        this->trainnumber = trainnumber;
        this->name = name;
        this->source = source;
        this->destination = destination;
        this->departuretime = departuretime;
        this->arrivaltime = arrivaltime;
        this->totalseats = totalseats;
        this->availableseats = availableseats;
        this->fare = fare;
    }
};

// ========= passenger =========
class Passenger
{
public:
    string passengername;
    int age;
    string gender;
    string berthpreference;
    string phone;

    Passenger()
    {
    }

    Passenger(string passengername, int age, string gender, string berthpreference, string phone)
    {
        this->passengername = passengername;
        this->age = age;
        this->gender = gender;
        this->berthpreference = berthpreference;
        this->phone = phone;
    }
};

// ========= Ticket ==========
class Ticket
{
public:
    string pnr;
    int trainnumber;
    Passenger passenger;
    string bookingStatus;
    string bookingTime;
    float fare;

    Ticket()
    {
    }

    Ticket(string pnr, int trainnumber, Passenger passenger, string bookingStatus, string bookingTime, float fare)
    {
        this->pnr = pnr;
        this->trainnumber = trainnumber;
        this->passenger = passenger;
        this->bookingStatus = bookingStatus;
        this->bookingTime = bookingTime;
        this->fare = fare;
    }
};

// ========= Railway system class =======

class RailwaySystem
{
    vector<Train> trainList;
    vector<Ticket> booking;
    queue<Ticket> waitingList;
    stack<Ticket> cancellation;

public:
    void AddTrain()
    {
        int trainnumber;
        string name;
        string source;
        string destination;
        string departuretime;
        string arrivaltime;
        int totalseats;
        int availableseats;
        float fare;

        cout << endl
             << "Enter Train Number :";
        cin >> trainnumber;

        cout << "Enter Train Name :";
        cin >> name;

        cout << "Enter Train Source :";
        cin >> source;

        cout << "Enter Train Destination :";
        cin >> destination;

        cout << "Enter Train Departure Time :";
        cin >> departuretime;

        cout << "Enter Train Arrival Time :";
        cin >> arrivaltime;

        cout << "Enter Train Total Seats :";
        cin >> totalseats;

        cout << "Enter Train Fare :";
        cin >> fare;

        availableseats = totalseats;

        Train t1(trainnumber, name, source, destination, departuretime, arrivaltime, totalseats, availableseats, fare);

        trainList.push_back(t1);

        cout << endl
             << "Train Added successfully !" << endl;
    }

    void displayAllTrains()
    {
        if (trainList.empty())
        {
            cout << "Train is Empty !" << endl;
            return;
        }

        for (Train display : trainList)
        {
            cout << endl
                 << "Train Number :" << display.trainnumber << endl;
            cout << "Train Name :" << display.name << endl;
            cout << "Train Source :" << display.source << endl;
            cout << "Train Destination :" << display.destination << endl;
            cout << "Train Departuretime :" << display.departuretime << endl;
            cout << "Train Arrival Time :" << display.arrivaltime << endl;
            cout << "Train Total Seats :" << display.totalseats << endl;
            cout << "Train Available Seats :" << display.availableseats << endl;
            cout << "Train Fare :" << display.fare << endl;
        }

        cout << endl
             << "Show all Train Successfully !" << endl;
    }

    void SearchTrainNumber()
    {
        if (trainList.empty())
        {
            cout << "Train is Empty !" << endl;
            return;
        }

        int number;
        bool flag = false;
        cout << "Entre Train Number :";
        cin >> number;

        for (int i = 0; i < trainList.size(); i++)
        {
            if (trainList[i].trainnumber == number)
            {
                cout << "This number train is available!" << endl;
                flag = true;
            }
        }

        if (flag == false)
        {
            cout << "This number train is not available!" << endl;
        }
    }

    void SearchTrainName()
    {
        if (trainList.empty())
        {
            cout << "Train is Empty !" << endl;
            return;
        }

        string searchname;
        bool flag = false;
        cout << "Entre Train Name :";
        cin >> searchname;

        for (int i = 0; i < trainList.size(); i++)
        {
            if (trainList[i].name == searchname)
            {
                cout << "This name train is available!" << endl;
                flag = true;
            }
        }

        if (flag == false)
        {
            cout << "This name train is not available!" << endl;
        }
    }

    void UpdateTrain()
    {
        if (trainList.empty())
        {
            cout << "Train is Empty !" << endl;
            return;
        }

        int number;
        bool flag = false;
        cout << "Entre Train Number :";
        cin >> number;

        for (int i = 0; i < trainList.size(); i++)
        {
            if (trainList[i].trainnumber == number)
            {
                flag = true;

                cout << "Enter Train New Name :";
                cin >> trainList[i].name;

                cout << "Enter Train New Source :";
                cin >> trainList[i].source;

                cout << "Enter Train New Destination :";
                cin >> trainList[i].destination;

                cout << "Enter Train New Departure Time :";
                cin >> trainList[i].departuretime;

                cout << "Enter Train New Arrival Time :";
                cin >> trainList[i].arrivaltime;

                cout << "Enter Train New Total Seats :";
                cin >> trainList[i].totalseats;

                cout << "Enter Train New Fare :";
                cin >> trainList[i].fare;

                trainList[i].availableseats = trainList[i].totalseats;

                cout << "Train Updated Successfully !" << endl;
            }
        }

        if (flag == false)
        {
            cout << "Train is not Available !" << endl;
        }
    }

    void deleteTrain()
    {
        if (trainList.empty())
        {
            cout << "Train is Empty !" << endl;
            return;
        }

        int number;
        bool flag = false;
        cout << "Entre Train Number :";
        cin >> number;

        for (int i = 0; i < trainList.size(); i++)
        {
            if (trainList[i].trainnumber == number)
            {
                trainList.erase(trainList.begin() + i);
                cout << "Train Deleted Successsfully !" << endl;
                flag = true;
            }
        }

        if (flag == false)
        {
            cout << "Train is not found" << endl;
        }
    }

    void AvailableSeat()
    {
        if (trainList.empty())
        {
            cout << "Train is Empty !" << endl;
            return;
        }

        int number;
        bool flag = false;
        cout << "Entre Train Number :";
        cin >> number;

        for (int i = 0; i < trainList.size(); i++)
        {
            if (trainList[i].trainnumber == number)
            {
                flag = true;
                cout << "Available Seats :" << trainList[i].availableseats << endl;
            }
        }

        if (flag == false)
        {
            cout << endl
                 << "Not Available Seats" << endl;
        }
    }

    // ===== Ticket Booking =====

    void bookTicket()
    {
        if (trainList.empty())
        {
            cout << "Train is Empty !" << endl;
            return;
        }

        int number;
        bool flag = false;
        cout << "Entre Train Number :";
        cin >> number;

        for (int i = 0; i < trainList.size(); i++)
        {
            if (trainList[i].trainnumber == number)
            {
                flag = true;

                if (trainList[i].totalseats <= 0)
                {
                    cout << "Seat is not Available !" << endl;
                    return;
                }

                Ticket t;

                cout << "Enter your Name :";
                cin >> t.passenger.passengername;

                cout << "Enter your Age :";
                cin >> t.passenger.age;

                cout << "Enter your Gender :";
                cin >> t.passenger.gender;

                cout << "Enter your Phone number :";
                cin >> t.passenger.phone;

                t.trainnumber = number;

                t.pnr = autoGeneratePNR();

                t.fare = trainList[i].fare;

                t.bookingStatus = "CONFIRMED";

                booking.push_back(t);

                trainList[i].availableseats--;

                cout << "Ticket Booked Successfully !" << endl;
            }
        }
    }

    string autoGeneratePNR()
    {
        return "4502";
    }

    void confirmBooking()
    {
        string num;
        bool flag = false;
        cout << "Enter PNR Number :";
        cin >> num;

        for (int i = 0; i < booking.size(); i++)
        {
            if (booking[i].pnr == num)
            {
                flag = true;
                cout << "Train Number :" << booking[i].trainnumber << endl;
                cout << "Train PNR Number :" << booking[i].pnr << endl;
                cout << "Passenger Name :" << booking[i].passenger.passengername << endl;
                cout << "Passenger Age :" << booking[i].passenger.age << endl;
                cout << "Passenger Gender :" << booking[i].passenger.gender << endl;
                cout << "Passenger Phono no. :" << booking[i].passenger.phone << endl;
                cout << "Train Fare :" << booking[i].fare << endl;
            }
        }

        if (flag == false)
        {
            cout << "PNR Number Not Found !" << endl;
        }
    }

    void addTowaitlist()
    {
        Ticket p;

        cout << "Enter Train Number :";
        cin >> p.trainnumber;

        cout << "Enter your Name :";
        cin >> p.passenger.passengername;

        cout << "Enter your Age :";
        cin >> p.passenger.age;

        cout << "Enter your Gender :";
        cin >> p.passenger.gender;

        cout << "Enter your Phone Number :";
        cin >> p.passenger.phone;

        p.pnr = autoGeneratePNR();
        cout << "PNR Number :" << p.pnr << endl;

        p.bookingStatus = "WAITING";
        cout << "Booking Status :" << p.bookingStatus << endl;

        waitingList.push(p);

        cout << "Passenger Added To Waiting List !" << endl;
    }

    void displayBooking()
    {
        if (booking.empty())
        {
            cout << "Train is Empty !" << endl;
            return;
        }

        for (int i = 0; i < booking.size(); i++)
        {
            cout << "Train Number :" << booking[i].trainnumber << endl;
            cout << "Train PNR Number :" << booking[i].pnr << endl;
            cout << "Passenger Name :" << booking[i].passenger.passengername << endl;
            cout << "Passenger Age :" << booking[i].passenger.age << endl;
            cout << "Passenger Gender :" << booking[i].passenger.gender << endl;
            cout << "Passenger Phono no. :" << booking[i].passenger.phone << endl;
            cout << "Train Fare :" << booking[i].fare << endl;
        }
    }

    void bookMultipleTickets()
    {

        if (trainList.empty())
        {
            cout << "Train is Empty !" << endl;
            return;
        }

        int number;
        int totalTicket;
        bool flag = false;
        cout << "Entre Train Number :";
        cin >> number;

        for (int i = 0; i < trainList.size(); i++)
        {
            if (trainList[i].trainnumber == number)
            {
                flag = true;

                cout << "How Many Tickets You Want To Book :";
                cin >> totalTicket;

                if (totalTicket < trainList[i].totalseats)
                {
                    for (int j = 0; j < totalTicket; j++)
                    {
                        Ticket t;

                        cout << "Enter your Name :";
                        cin >> t.passenger.passengername;

                        cout << "Enter your Age :";
                        cin >> t.passenger.age;

                        cout << "Enter your Gender :";
                        cin >> t.passenger.gender;

                        cout << "Enter your Phone Number :";
                        cin >> t.passenger.phone;

                        t.pnr = autoGeneratePNR();
                        cout << "PNR NUmber :" << t.pnr << endl;

                        t.bookingStatus = "CONFIRMED";
                        cout << "Booking Status :" << t.bookingStatus << endl;

                        trainList[i].totalseats--;

                        cout << "Ticket Booked Successfully !" << endl;

                        booking.push_back(t);
                    }
                }
                else
                {
                    cout << "Train is not found !" << endl;
                }
            }
        }
    }

    void checkBookingStatus()
    {
        string pnr;
        bool flag = false;
        cout << "Entre PNR Number :";
        cin >> pnr;

        for (int i = 0; i < booking.size(); i++)
        {
            if (booking[i].pnr == pnr)
            {
                flag = true;
                cout << "Train Number :" << booking[i].trainnumber << endl;
                cout << "Train PNR Number :" << booking[i].pnr << endl;
                cout << "Passenger Name :" << booking[i].passenger.passengername << endl;
                cout << "Passenger Age :" << booking[i].passenger.age << endl;
                cout << "Passenger Gender :" << booking[i].passenger.gender << endl;
                cout << "Passenger Phono no. :" << booking[i].passenger.phone << endl;
                cout << "Train Fare :" << booking[i].fare << endl;
            }
        }

        if (flag == false)
        {
            cout << "PNR Number Not Found !" << endl;
        }
    }

    // ======  Cancellation  ======

    void cancleTicket()
    {
        string pnr;
        bool flag = false;
        cout << "Enter PNR Number :";
        cin >> pnr;

        for (int i = 0; i < booking.size(); i++)
        {
            if (booking[i].pnr == pnr)
            {
                flag = true;
                cancellation.push(booking[i]);
                booking.erase(booking.begin() + i);
                cout << "Ticket Cancelled Successfully !" << endl;
            }
        }
    }

    void calculateRefund()
    {
        float cancellationcharge = 50;
        stack<Ticket> temp = cancellation;

        while (!temp.empty())
        {
            Ticket t = temp.top();
            temp.pop();

            float refund = t.fare - cancellationcharge;
            cout << "Refund Amount :" << refund << endl;
        }
    }

    void upGradeWaitlist()
    {
        if (waitingList.empty())
        {
            cout << "Waitlist is Empty !" << endl;
            return;
        }

        Ticket t = waitingList.front();

        booking.push_back(t);

        waitingList.pop();

        cout << "Waitlist Passenger Confirmed !" << endl;
    }

    void undoCancellation()
    {
        if (cancellation.empty())
        {
            cout << "No Cancelled Ticket Found !" << endl;
            return;
        }

        Ticket t = cancellation.top();

        booking.push_back(t);

        cancellation.pop();

        cout << "Cancellation Undo Successfully !" << endl;
    }

    void displayCancellationHistory()
    {
        if (cancellation.empty())
        {
            cout << "No Cancellation History Found !" << endl;
            return;
        }

        stack<Ticket> temp = cancellation;

        while (!temp.empty())
        {
            Ticket t = temp.top();

            cout << "Train Number :" << t.trainnumber << endl;
            cout << "Train PNR Number :" << t.pnr << endl;
            cout << "Passenger Name :" << t.passenger.passengername << endl;
            cout << "Passenger Age :" << t.passenger.age << endl;
            cout << "Passenger Gender :" << t.passenger.gender << endl;
            cout << "Passenger Phone no. :" << t.passenger.phone << endl;
            cout << "Train Fare :" << t.fare << endl;

            temp.pop();
        }
    }

    // ====== Search & Display ======

    void searchTicketByPNR()
    {
        if (booking.empty())
        {
            cout << "Not Booking Found !" << endl;
            return;
        }

        string pnr;
        bool flag = false;

        cout << "Enter PNR Number : ";
        cin >> pnr;

        for (int i = 0; i < booking.size(); i++)
        {
            if (booking[i].pnr == pnr)
            {
                cout << "Train PNR Number : " << booking[i].pnr << endl;
                cout << "Train Number : " << booking[i].trainnumber << endl;
                cout << "Passenger Name : " << booking[i].passenger.passengername << endl;
                cout << "Passenger Age : " << booking[i].passenger.age << endl;
                cout << "Passenger Gender : " << booking[i].passenger.gender << endl;
                cout << "Passenger Phone Number : " << booking[i].passenger.phone << endl;

                flag = true;
                break;
            }
        }

        if (flag == false)
        {
            cout << endl
                 << "Train is not Found !" << endl;
        }
    }

    void searchPassengerByName()
    {
        if (booking.empty())
        {
            cout << "No Booking Found !" << endl;
            return;
        }

        string name;
        bool flag = false;

        cout << "Enter Passenger Name : ";
        cin >> name;

        for (int i = 0; i < booking.size(); i++)
        {
            if (booking[i].passenger.passengername == name)
            {
                cout << "Train PNR Number : " << booking[i].pnr << endl;
                cout << "Train Number : " << booking[i].trainnumber << endl;
                cout << "Passenger Name : " << booking[i].passenger.passengername << endl;
                cout << "Passenger Age : " << booking[i].passenger.age << endl;
                cout << "Passenger Gender : " << booking[i].passenger.gender << endl;
                cout << "Passenger Phone Number : " << booking[i].passenger.phone << endl;

                flag = true;
            }
        }

        if (flag == false)
        {
            cout << endl
                 << "Passenger is not found !" << endl;
        }
    }

    void displayTrainsBetweenStations()
    {
        if (trainList.empty())
        {
            cout << "Train is not Available !" << endl;
            return;
        }

        string source, destination;
        bool flag = false;

        cout << "Enter Source Station : ";
        cin >> source;

        cout << "Enter Destination Station : ";
        cin >> destination;

        for (int i = 0; i < trainList.size(); i++)
        {
            if (trainList[i].source == source &&
                trainList[i].destination == destination)
            {
                cout << "Train Number : " << trainList[i].trainnumber << endl;
                cout << "Train Name : " << trainList[i].name << endl;
                cout << "Train Source : " << trainList[i].source << endl;
                cout << "Train Destination : " << trainList[i].destination << endl;
                cout << "Train Total Seats : " << trainList[i].totalseats << endl;
                cout << "Train Fare : " << trainList[i].fare << endl;

                flag = true;
            }
        }

        if (flag == false)
        {
            cout << endl
                 << "Train not Found Between These Station !" << endl;
        }
    }

    void displayWaitlist()
    {
        if (waitingList.empty())
        {
            cout << "Waitlist is Empty !" << endl;
            return;
        }

        queue<Ticket> temp = waitingList;
        int position = 1;

        while (!temp.empty())
        {
            Ticket t = temp.front();

            cout << "Train Number : " << t.trainnumber << endl;
            cout << "Passenger Name : " << t.passenger.passengername << endl;
            cout << "Passenger Age : " << t.passenger.age << endl;
            cout << "Passenger Gender : " << t.passenger.gender << endl;
            cout << "Passenger Phone Number : " << t.passenger.phone << endl;

            temp.pop();
        }
    }

    void displayPassengersForTrain()
    {
        if (booking.empty())
        {
            cout << "Not Booking Found !" << endl;
            return;
        }

        int trainNumber;
        bool flag = false;

        cout << "Enter Train Number : ";
        cin >> trainNumber;

        for (int i = 0; i < booking.size(); i++)
        {
            if (booking[i].trainnumber == trainNumber)
            {
                cout << endl
                     << "Train PNR Number : " << booking[i].pnr << endl;
                cout << "Passenger Name : "
                     << booking[i].passenger.passengername << endl;
                cout << "Passenger Age : "
                     << booking[i].passenger.age << endl;
                cout << "Passenger Gender : "
                     << booking[i].passenger.gender << endl;
                cout << "Passenger Phone Number : "
                     << booking[i].passenger.phone << endl;

                flag = true;
            }
        }

        if (flag == false)
        {
            cout << endl
                 << "Passenger is Not Found For This Train!" << endl;
        }
    }

    void searchTicketByPhone()
    {
        if (booking.empty())
        {
            cout << "No Booking Found !" << endl;
            return;
        }

        string phone;
        bool flag = false;

        cout << "Enter Phone Number : ";
        cin >> phone;

        for (int i = 0; i < booking.size(); i++)
        {
            if (booking[i].passenger.phone == phone)
            {
                cout << "Train PNR Number : " << booking[i].pnr << endl;
                cout << "Train Number : " << booking[i].trainnumber << endl;
                cout << "Passenger Name : "
                     << booking[i].passenger.passengername << endl;
                cout << "Passenger Age : "
                     << booking[i].passenger.age << endl;
                cout << "Passenger Gender : "
                     << booking[i].passenger.gender << endl;
                cout << "Passenger Phone Number : "
                     << booking[i].passenger.phone << endl;

                flag = true;
            }
        }

        if (flag == false)
        {
            cout << endl
                 << "Ticket is Not Found !" << endl;
        }
    }

    void Menu()
    {
        int choice;
        do
        {
            cout << "====== WELCOME TO OUR RAILWAY BOOKING SYSTEM =======" << endl;

            cout << "Enter 1 to Train Management" << endl;
            cout << "Enter 2 to Ticket Booking " << endl;
            cout << "Enter 3 to Cancellation" << endl;
            cout << "Enter 4 to Search & Reports" << endl;
            cout << "Enter 5 to Exit" << endl;

            cout << endl
                 << "Entre your choice :";
            cin >> choice;

            switch (choice)
            {
            case 1:
                do
                {
                    cout << endl
                         << "Enter 1 to Add Train" << endl;
                    cout << "Enter 2 to Display All Train" << endl;
                    cout << "Enter 3 to Search Train by Number" << endl;
                    cout << "Entre 4 to Search Train by Name" << endl;
                    cout << "Entre 5 to Update Train " << endl;
                    cout << "Entre 6 to Delete Train" << endl;
                    cout << "Entre 7 to Available Seate" << endl;
                    cout << "Entre 0 to Exit" << endl;

                    cout << endl
                         << "Entre your choice :";
                    cin >> choice;

                    switch (choice)
                    {
                    case 1:
                        AddTrain();
                        break;

                    case 2:
                        displayAllTrains();
                        break;

                    case 3:
                        SearchTrainNumber();
                        break;

                    case 4:
                        SearchTrainName();
                        break;

                    case 5:
                        UpdateTrain();
                        break;

                    case 6:
                        deleteTrain();
                        break;

                    case 7:
                        AvailableSeat();
                        break;

                    case 0:
                        cout << "Thank you" << endl;
                        break;

                    default:
                        cout << "invalid choice " << endl;
                        break;
                    }

                } while (choice != 0);
                break;

            case 2:
                do
                {
                    cout << endl
                         << "Enter 1 to Ticket Book" << endl;
                    cout << "Enter 2 to Auto Generate PNR" << endl;
                    cout << "Enter 3 to Confirmbooking" << endl;
                    cout << "Enter 4 to Add Waitlist" << endl;
                    cout << "Enter 5 to Display Booking" << endl;
                    cout << "Enter 6 to Multiple Ticket Book" << endl;
                    cout << "Enter 7 to Check Booking Status" << endl;
                    cout << "Enter 0 Exit" << endl;

                    cout << endl
                         << "Entre your choice :";
                    cin >> choice;

                    switch (choice)
                    {
                    case 1:
                        bookTicket();
                        break;

                    case 2:
                        autoGeneratePNR();
                        break;

                    case 3:
                        confirmBooking();
                        break;

                    case 4:
                        addTowaitlist();
                        break;

                    case 5:
                        displayBooking();
                        break;

                    case 6:
                        bookMultipleTickets();
                        break;

                    case 7:
                        checkBookingStatus();
                        break;

                    case 0:
                        cout << "Thank you" << endl;
                        break;

                    default:
                        cout << "invalid choice" << endl;
                        break;
                    }

                } while (choice != 0);
                break;

            case 3:
                do
                {
                    cout << endl
                         << "Enter 1 to cancle Ticket " << endl;
                    cout << "Enter 2 to Calculate Refund " << endl;
                    cout << "Enter 3 to Upgrade Waitlist " << endl;
                    cout << "Enter 4 to Undo Cancellation " << endl;
                    cout << "Enter 5 to Display Cancellation History" << endl;
                    cout << "Enter 0 to Exit " << endl;

                    cout << endl
                         << "Enter your choice :";
                    cin >> choice;

                    switch (choice)
                    {
                    case 1:
                        cancleTicket();
                        break;

                    case 2:
                        calculateRefund();
                        break;

                    case 3:
                        upGradeWaitlist();
                        break;

                    case 4:
                        undoCancellation();
                        break;

                    case 5:
                        displayCancellationHistory();
                        break;

                    case 0:
                        cout << "Thank you" << endl;
                        break;

                    default:
                        cout << "invalid choice" << endl;
                        break;
                    }
                } while (choice != 0);
                break;

            case 4:
                do
                {
                    cout << endl
                         << "Enter 1 to Search Ticket" << endl;
                    cout << "Enter 2 to Search Passenger by name" << endl;
                    cout << "Enter 3 to Display Train Stations" << endl;
                    cout << "Enter 4 to Display waitlist" << endl;
                    cout << "Enter 5 to Dispaly Train for Passenger" << endl;
                    cout << "Enter 6 to Search Ticket by Phone" << endl;
                    cout << "Enter 0 to Exit" << endl;

                    cout << endl
                         << "Enter your choice :";
                    cin >> choice;

                    switch (choice)
                    {
                    case 1:
                        searchTicketByPNR();
                        break;

                    case 2:
                        searchPassengerByName();
                        break;

                    case 3:
                        displayTrainsBetweenStations();
                        break;

                    case 4:
                        displayWaitlist();
                        break;

                    case 5:
                        displayPassengersForTrain();
                        break;

                    case 6:
                        searchTicketByPhone();
                        break;

                    case 0:
                        cout << "Thank you" << endl;
                        break;

                    default:
                        cout << "invalid choice" << endl;
                        break;
                    }
                } while (choice != 0);
                break;

            case 5:
                cout << "Thank You" << endl;
                return;

            default:
                cout << "invalid choice" << endl;
                break;
            }
        } while (choice != 5);
    }
};

int main()
{
    RailwaySystem systeam;
    systeam.Menu();
}