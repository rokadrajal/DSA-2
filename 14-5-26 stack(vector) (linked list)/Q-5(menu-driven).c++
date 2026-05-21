#include <iostream>
#include <vector>
#include <list>
#include <stack>

using namespace std;

class Array
{
    string arr[20];
    int top = -1;

public:
    void Add(string food)
    {
        if (top == (sizeof(arr) / sizeof(string)) - 1)
        {
            cout << "Array is full" << endl;
            return;
        }
        arr[++top] = food;
        cout << endl
             << "Element added successfully !" << endl;
    }

    void cancel()
    {
        if (top == -1)
        {
            cout << "Array is empty" << endl;
            return;
        }
        top--;
        cout << "Element Removed successfully !" << endl;
    }

    void Last()
    {
        if (top == -1)
        {
            cout << "Array is empty" << endl;
            return;
        }
        cout << "Top Element :" << arr[top] << endl;
    }

    void Display()
    {
        if (top == -1)
        {
            cout << "Array is empty" << endl;
            return;
        }

        cout << "Display all Elements :";
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

class Vector
{
    vector<string> v;

public:
    void Addvector(string food)
    {
        v.push_back(food);
        cout << "Element added successfully !" << endl;
    }

    void CancelLast()
    {
        if(v.empty())
        {
            cout<<"Vector is Empty"<<endl;
            return;
        }
        v.pop_back();
        cout<<"Element Removed successfully !"<<endl;
    }


    void ViewLast()
    {
        if(v.empty())
        {
            cout<<"Vector is Empty"<<endl;
            return;
        }
       cout<<"Top Element :"<<v.at(v.size() -1)<<endl;
    }


    void Display()
    {
        if(v.empty())
        {
            cout<<"Vector is Empty"<<endl;
            return;
        }

        cout<<endl<<"Display all Elements :";
        for(string i : v)
        {
            cout<<i<<" ";
        }

    }
};



class LinkedList
{
    list<string> l;

    public:
       void AddLinkedList(string food)
       {
        l.push_back(food);
        cout<<"Element added successfully !"<<endl;
       }

       void CancelLast()
       {
        if(l.empty())
        {
            cout<<"Linked List is Empty"<<endl;
            return;
        }
        l.pop_back();
        cout<<"Element Removed Successfully !"<<endl;
       }


       void ViewLast()
       {
        if(l.empty())
        {
            cout<<"Linked List is Empty"<<endl;
            return;
        }
        cout<<"Top Element : "<<l.back()<<endl;
       }


       void Display()
       {
        if(l.empty())
        {
            cout<<"Linked List is Empty"<<endl;
            return;
        }

        cout<<"Display all Elements :";
        for(string i : l)
        {
            cout<<i<<" ";
        }
       }
};


class Stack
{
    stack<string> s;

    public:  
       void Add(string food)
       {
        s.push(food);
        cout<<"Element added successfully !"<<endl;
       }

       void CancelLast()
       {
        if(s.empty())
        {
            cout<<"Stack is Empty"<<endl;
            return;
        }
        s.pop();
        cout<<"Element Removed successfully !"<<endl;
       }

       void ViewLast()
       {
        if(s.empty())
        {
            cout<<"Stack is Empty"<<endl;
            return;
        }
        cout<<"Top Element :"<<s.top()<<endl;

       }

       void Display()
       {
        if(s.empty())
        {
            cout<<"Stack is Empty"<<endl;
            return;
        }

        stack<string> temp = s;

        cout<<"Display all Elements : ";

        while(!temp.empty())
        {
           cout<<temp.top()<<" ";
           temp.pop();
        }
       }

    
};

int main()
{
    int choice1, choice2;
    Array a1;
    Vector v1;
    LinkedList l1;
    Stack s1;

    do
    {
        cout << endl << "====== welcome to our programme  ======" << endl;
        cout << "Enter 1 to create Array" << endl;
        cout << "Enter 2 to create Vector" << endl;
        cout << "Enter 3 to create Linked List" << endl;
        cout << "Enter 4 to create Stack" << endl;
        cout << "Enter 0 to Exit" << endl;

        cout <<endl<< "Enter your choice :";
        cin >> choice1;

        switch (choice1)    
        {
        case 1:

            do
            {
                cout<<endl<<"====== ARRAY ====== "<<endl;
                cout << endl << "Enter 1 to Add order" << endl;
                cout << "Enter 2 to Cancel Last Order" << endl;
                cout << "Enter 3 to View Last order" << endl;
                cout << "Enter 4 to Display All Orders" << endl;
                cout << "Enter 0 to Exit" << endl;

                cout << endl
                     << "Enter your choice :";
                cin >> choice2;

                switch (choice2)
                {
                case 1:
                    a1.Add("Pizza");
                    a1.Add("Burger");
                    break;

                case 2:
                    a1.cancel();
                    break;

                case 3:
                    a1.Last();
                    break;

                case 4:
                    a1.Display();
                    break;

                case 0:
                    cout << "Thank you !" << endl;
                    break;

                default:
                    cout << "invalid choice" << endl;
                    break;
                }

            } while (choice2 != 0);

            break;

        case 2:
            do
            {
                cout<<endl<<"====== VECTOR ====== "<<endl;
                cout << endl
                     << "Enter 1 to Add order" << endl;
                cout << "Enter 2 to Cancel Last Order" << endl;
                cout << "Enter 3 to View Last order" << endl;
                cout << "Enter 4 to Display All Orders" << endl;
                cout << "Enter 0 to Exit" << endl;

                cout << endl
                     << "Enter your choice :";
                cin >> choice2;

                switch (choice2)
                {
                case 1:
                    v1.Addvector("Pasta");
                    v1.Addvector("Hot dog");
                    break;

                case 2:
                    v1.CancelLast();
                    break;

                case 3:
                    v1.ViewLast();
                    break;

                case 4:
                    v1.Display();
                    break;

                case 0:
                    cout << "Thank you !" << endl;
                    break;

                default:
                    cout << "invalid choice" << endl;
                    break;
                }

            } while (choice2 != 0);
            
            break;

        case 3 :
            do
            {
                cout<<endl<<"====== LINKED LIST ====== "<<endl;
                cout << endl
                     << "Enter 1 to Add order" << endl;
                cout << "Enter 2 to Cancel Last Order" << endl;
                cout << "Enter 3 to View Last order" << endl;
                cout << "Enter 4 to Display All Orders" << endl;
                cout << "Enter 0 to Exit" << endl;

                cout << endl
                     << "Enter your choice :";
                cin >> choice2;

                switch (choice2)
                {
                case 1:
                    l1.AddLinkedList("Cold Drink");
                    l1.AddLinkedList("Noodles");
                    break;

                case 2:
                    l1.CancelLast();
                    break;

                case 3:
                    l1.ViewLast();
                    break;

                case 4:
                   l1.Display();
                    break;

                case 0:
                    cout << "Thank you !" << endl;
                    break;

                default:
                    cout << "invalid choice" << endl;
                    break;
                }

            } while (choice2 != 0);
            
            break;

        case 4 :
            do
            {
                cout<<endl<<"====== STACK ====== "<<endl;
                cout << endl << "Enter 1 to Add order" << endl;
                cout << "Enter 2 to Cancel Last Order" << endl;
                cout << "Enter 3 to View Last order" << endl;
                cout << "Enter 4 to Display All Orders" << endl;
                cout << "Enter 0 to Exit" << endl;

                cout << endl
                     << "Enter your choice :";
                cin >> choice2;

                switch (choice2)
                {
                case 1:
                    s1.Add("Pani Puri");
                    s1.Add("Ice-Cream");
                    break;

                case 2:
                    s1.CancelLast();
                    break;

                case 3:
                    s1.ViewLast();
                    break;

                case 4:
                   s1.Display();
                    break;

                case 0:
                    cout << "Thank you !" << endl;
                    break;

                default:
                    cout << "invalid choice" << endl;
                    break;
                }

            } while (choice2 != 0);
            
            break;

        default:
            cout << "invalid choice" << endl;
            break;
        }
    } while (choice1 != 0);
}