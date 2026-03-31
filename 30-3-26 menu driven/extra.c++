#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int num;
    int pos;
    int value;

    while (true)
    {
        cout<<endl<<"welcome to our programme !"<<endl;

        cout<<endl<<"Enter 1 to create an array "<<endl;
        cout<<"Enter 2 to view an array "<<endl;
        cout<<"Enter 3 to delete an element of array "<<endl;
        cout<<"Enter 4 to updaet an element of array "<<endl;
        cout<<"Enter 0 to exit "<<endl;

        int choice;
        cout<<endl<<"Enter the choice :";
        cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<endl<<"Enter how many element you want to add :";
            cin>>num;

            if(num > 0 && num < 10)
            {
                for(int i=0; i<num; i++)
                {
                    cout<<"enter the value for element :"<<i+1<<" = ";
                    cin>>arr[i];
                }

                cout<<endl<<"array created successfully !"<<endl;
            }
            else
            {
                cout <<endl<<"invalid size !"<<endl;
            }
            break;

        case 2 :
            cout<<endl<<"element in array are :";

            for(int i=0; i<num; i++)
            {
                cout<<arr[i]<<" ";
            }

            cout<<endl<<"view all elements successfully !"<<endl;
            break;

        case 3 :
            cout<<endl<<"Enter the position of element to delete :";
            cin>>pos;

            if(pos>=0 && pos < num)
            {
                for(int i=pos-1; i<num-1; i++)
                {
                    arr[i] = arr[i+1];
                }
                num--;

                cout<<endl<<"element deleted successfully !"<<endl;
            }
            else
            {
                cout<<endl<<"position is not valid !"<<endl;
            }
            break;

        case 4 :
            cout<<endl<<"Enter the position of element to update :";
            cin>>pos;

            cout<<endl<<"Enter the value of element to update :";
            cin>>value;

            if(pos>=0 && pos < num)
            {
                arr[pos-1] = value;

                cout<<endl<<"element deleted successfully !"<<endl;
            }
            else
            {
                cout<<endl<<"position is not valid !"<<endl;
            }
            break;

        case 0:
            cout<<endl<<"visit again"<<endl;
            return 0;
           
        
        default:
            cout<<endl<<"invalid choice "<<endl;
            break;
        }
    }
    
}