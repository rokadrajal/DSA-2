#include <iostream>
#include <list>
using namespace std;

class Cafeteria
{
    list<string> Tray;

public:
    void Add(string name)
    {
        Tray.push_back(name);
        cout << "Tray added successfully !" << endl;
    }

    void Removed()
    {
        if (Tray.empty())
        {
            cout << "Tray is not available !" << endl;
            return;
        }
        Tray.pop_back();
        cout << "Tray Removed successfully !" << endl;
    }

    void Display()
    {
        if (Tray.empty())
        {
            cout << "Tray is not available !" << endl;
            return;
        }

        cout << "Display all Trays : ";
        for (string i : Tray)
        {
            cout << i << " --> ";
        }
    }

    void TotalTray()
    {
        int count = 0;
        for (string i : Tray)
        {
            count++;
        }
        cout << endl
             << "Total Tray :" << count << endl;
    }
};

int main()
{
    Cafeteria c;
    int choice;

    do
    {
        cout << endl << "======== CAFETERIA TRAY MANAGEMENT  ======== " << endl;
        cout << endl << "Enter 1 to Add Tray " << endl;
        cout << "Enter 2 to Remove Tray" << endl;
        cout << "Enter 3 to Display Tray " << endl;
        cout << "Enter 3 to Count Tray " << endl;
        cout << "Enter Exit to 0" << endl;

        cout << "Enter your choice :";
        cin >> choice;

        switch (choice)
        {
        case 1:
           c.Add("1.Pink Tray");
           c.Add("2.Yellow Tray");
           c.Add("3.Purple Tray");
            break;

        case 2:
            c.Removed();
            break;

        case 3:
            c.Display();
            break;

        case 4:
            c.TotalTray();
            break;

        case 0:
            cout<<"Thank you !"<<endl;
            exit(0);

        default:
            cout<<"invalid choice"<<endl;
            break;
        }

    } while (choice != 0);
    
}