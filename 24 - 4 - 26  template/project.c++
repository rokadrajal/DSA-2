#include <iostream>
using namespace std;

template <typename T>
T multiple(T a, T b)
{
  return a * b;
}


template <typename T1>
T1 divide(T1 a, T1 b)
{
  return a / b;
}


template <typename T2>
T2 prime(T2 num)
{
  int count = 0;
  int i = 1;
  while (i <= num)
  {
    if (num % i == 0)
    {
      count++;
    }
    i++;
  }
  if (count == 2)
  {
    cout << endl
         << "prime number" << endl;
  }
  else
  {
    cout << endl
         << "not prime number" << endl;
  }
}


template <typename T3>
T3 EvenOdd(T3 num)
{
  if (num % 2 == 0)
  {
    cout << " This number is Even" << endl;
  }
  else
  {
    cout << "This number is Odd" << endl;
  }
}


template <typename T4>
T4 fullname(T4 first, T4 last)
{
  return first + last;
}


template <class T5, class T6, class T7, class T8>
class bio
{
public:
  T5 firstname;
  T6 lastname;
  T7 age;
  T8 goal;
};


template <typename T9>
T9 table(T9 num)
{
  for(int i=1; i<=10 ; i++)
  {
    cout<<num<<" x "<<i<<" = "<<num*i<<endl;
  }

}










int main()
{
  while (true)
  {
    int num;
    string first;
    string last;
    bio<string, string, int, string> b;

    cout << endl
         << "welcome to our programme" << endl;
    cout << endl
         << "Enter 1 to calculate an array" << endl;
    cout << "Enter 2 to find prime number an array" << endl;
    cout << "Enter 3 to even and odd number find an array" << endl;
    cout << "Enter 4 to print fullname an array" << endl;
    cout << "Enter 5 to bio an array" << endl;
    cout << "Enter 6 to table an array" << endl;
    cout << "Enter 7 to exit" << endl;

    int choice;
    cout << endl
         << "Enter your choice :";
    cin >> choice;

    switch (choice)
    {
    case 1:
      cout << endl
           << "Enter 1 to multiple " << endl;
      cout << "Enter 2 to divide" << endl;

      int choice2;
      cout << endl
           << "Enter your choice :";
      cin >> choice2;

      switch (choice2)
      {
      case 1:
        cout << multiple(2, 18) << endl;
        break;

      case 2:
        cout << divide(18, 2);
        break;

      default:
        break;
      }

      break;

    case 2:
      cout << "Enter the number :";
      cin >> num;

      prime(num);

      break;

    case 3:
      cout << "Enter the number :";
      cin >> num;

      EvenOdd(num);
      break;

    case 4:
      cout << "Enter your first name :";
      cin >> first;

      cout << "Enter your last name :";
      cin >> last;

      cout << fullname(first, last);
      break;

    case 5:

      b.firstname = "rokad";
      b.lastname = "rajal";
      b.age = 18;
      b.goal = "developer";

      cout << b.firstname << " " << b.lastname << endl
           << b.age << endl
           << b.goal << endl;
      break;


    case 6 :
      cout << "Enter the number :";
      cin >> num;

      table(num);
      break;

    case 0 :
      cout<<"visit again"<<endl;
      return 0;

    default:
      cout<<"invalid choice"<<endl;
      break;
    }
  }
}