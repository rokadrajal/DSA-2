#include <iostream>
#include <vector>
using namespace std;

class Railway
{
  vector<string> plate;

public:
  void Add(string name)
  {
    plate.push_back(name);
    cout << "Plate added successfully !" << endl;
  }

  void Remove()
  {
    if (plate.empty())
    {
      cout << "plate is not available !" << endl;
      return;
    }
    plate.pop_back();
    cout << "Plate removed successfully !" << endl;
  }

  void TopPlate()
  {
    if (plate.empty())
    {
      cout << "plate is not available !" << endl;
      return;
    }

    cout << "Top Plate :" << plate.at(plate.size() - 1) << endl;
  }

  void Display()
  {
    if (plate.empty())
    {
      cout << "plate is not available !" << endl;
      return;
    }

    cout << "Display all Plates :";
    for (string i : plate)
    {
      cout << i << " ";
    }
  }
};

int main()
{
  Railway r;
  int choice;

  do
  {
    cout << endl << "======== RAILWAY PLATE STORAGE SYSTEM ======== " << endl;
    cout << endl << "Enter 1 to Add Palte " << endl;
    cout << "Enter 2 to Remove Plate" << endl;
    cout << "Enter 3 to Show Top Plate" << endl;
    cout << "Enter 3 to Display All Paltes " << endl;
    cout << "Enter Exit to 0" << endl;

    cout << "Enter your choice :";
    cin >> choice;

    switch (choice)
    {
    case 1:
      r.Add("Plate 1");
      r.Add("Plate 2");
      r.Add("Plate 3");
      break;

    case 2:
      r.Remove();
      break;

    case 3:
      r.TopPlate();
      break;

    case 4:
      r.Display();
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