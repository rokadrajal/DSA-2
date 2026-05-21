
#include <iostream>
using namespace std;

class stack
{
private:
    string arr[5];
    int top;

public:
    stack()
    {
        top = -1;
    }

    void push(string value)
    {
        if (top == sizeof(arr) / sizeof(string) - 1)
        {
            cout << "Stack is Overflow !" << endl;
            return;
        }

        arr[++top] = value;
        cout << "Element added successfully !" << endl;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is Empty !" << endl;
            return;
        }
        top--;

        cout << "Element Removed successfully !" << endl;
    }

    void TopElement()
    {
        if (top == -1)
        {
            cout << "Stack is Empty !" << endl;
            return;
        }

        cout << "Top Element :" << arr[top] << endl;
    }

    void Empty()
    {
        if (top == -1)
        {
            cout << "Stack is Empty !" << endl;
            return;
        }
        else
        {
            cout << "Stack is not Empty !" << endl;
        }
    }

    void Full()
    {
        if (top == sizeof(arr) / sizeof(string) - 1)
        {
            cout << "Stack is Full !" << endl;
            return;
        }
        else
        {
            cout << "Stack is not Full !" << endl;
        }
    }

    void display()
    {
        cout << "Diaplay all Elements :";
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " , ";
        }
    }
};


int main()
{
    stack s1;
    int choice;

    do
    {
        cout << endl << "======= WELCOME TO OUE PROGRAMME =======" << endl;

        cout << endl << "Enter 1 to Add Element" << endl;
        cout << "Enter 2 to remove Element" << endl;
        cout << "Enter 3 to top Element" << endl;
        cout << "Enter 4 to check stack empty " << endl;
        cout << "Enter 5 to check stack full " << endl;
        cout << "Enter 6 to Display all element " << endl;
        cout << "Enter 0 to Exit" << endl;

        cout << endl << "Entre your choice :";
        cin >> choice;

        switch (choice)
        {
        case 1:
            s1.push("Rajal");
            s1.push("Ansi");
            s1.push("Sruti");
            s1.push("Hiral");
            s1.push("Srusti");
            break;

        case 2:
            s1.pop();
            break;

        case 3:
            s1.TopElement();
            break;

        case 4:
            s1.Empty();
            break;

        case 5:
            s1.Full();
            break;

        case 6:
            s1.display();
            break;

        case 0:
            cout << endl
                 << "Thank you !" << endl;
            exit(0);

        default:
            cout << "invalid choice !" << endl;
            break;
        }

    } while (choice != 0);
}