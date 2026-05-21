#include<iostream>
using namespace std;

class Browser
{
    string arr[5];
    int top = -1;

    public :
       int newpage(string page)
       {
        if(top == (sizeof(arr)/sizeof(int)) -1)
        {
            cout<<"History is full"<<endl;
            return -1;

        }
        arr[++top] = page;
        cout<<"visit new page complete"<<endl;

       } 

       void GoBack()
       {
        if(top == -1)
        {
            cout<<"History not found"<<endl;
            return;
        }
        top--;
        cout<<"Top History :"<<arr[top];
       }

       void Display()
       {
        if(top == -1)
        {
            cout<<"History not found"<<endl;
            return;
        }

        cout<<endl<<"Current Page :"<<arr[top]<<" ";

       }
};

int main()
{
    Browser b1;
    int choice;

    do
    {
        cout<<endl<<"======== BROWSER BACK BUTTON SYSTEM ======== "<<endl;
        cout<<endl<<"Enter 1 to Visit New Page "<<endl;
        cout<<"Enter 2 to Go Back "<<endl;
        cout<<"Enter 3 to Display Current History"<<endl;
        cout<<"Enter Exit to 0"<<endl;

        cout<<"Enter your choice :";
        cin>>choice;

        switch (choice)
        {
        case 1:
            b1.newpage("W3school");
            b1.newpage("Google");
            b1.newpage("Classroom");
            break;

        case 2 :
            b1.GoBack();
            break;
            
        case 3 :
            b1.Display();
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