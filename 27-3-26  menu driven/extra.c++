#include <iostream>
using namespace std;

int main()
{
    int arr[20];
    int num;
    int pos;
    int value;


    while(true)
    {
        cout<<endl<<"welcome to our program !"<<endl;

        cout<<endl<<"Enter 1 to create an array"<<endl;
        cout<<"Enter 2 to view an array"<<endl;
        cout<<"Enter 3 to delete an element of  array"<<endl;
        cout<<"Enter 4 to update an array"<<endl;
        cout<<"Enter 0 to exit"<<endl;

        int choice;
        cout<<endl<<"Enter your choice:";
        cin>>choice;


        switch (choice)
        {
        case 1:
            cout<<endl<<"Enter how many element you want to add :";
            cin>>num;

            if(num > 0 && num < 20)
            {
                for(int i=0; i<num; i++)
                {
                    cout<<"Enter the value of element :"<<i+1<<" = ";
                    cin>>arr[i];
                }

            }
            else
            {
                cout<<endl<<"invalid size ! "<<endl;
            }

            cout<<endl<<"Array created successfully !"<<endl;
            break;

        case 2 :
            cout<<endl<<"Element in array are :";

            for(int i=0; i<num; i++)
            {
                cout<<arr[i]<<" ";
            }

            cout<<endl<<"view all elements successfully !"<<endl;
            break;

        case 3:
            cout<<endl<<"Enter position to delete :";
            cin>>pos;

            if(pos >= 0 && pos < num)
            {
               for(int i=pos; i<num; i++)
               {
                arr[i] = arr[i+1];
               }
               num--;
            }
            else
            {
                cout<<endl<<"invalid position !"<<endl;
            }

            cout<<endl<<"element is deleted successfully !"<<endl;
            break;

        case 4 :
            cout<<endl<<"Enter position to update :";
            cin>>pos;

            if(pos >= 0 && pos < num)
            {
                cout<<endl<<"Enter new value :";
                cin>>value;

                arr[pos] = value;
            }
            else
            {
                cout<<endl<<"invalid position !"<<endl;
            }

            cout<<endl<<"element is updated successfully ! "<<endl;
            break;

        case 0:
            cout<<endl<<"visit again "<<endl;
            return 0;    
        
        default:
            cout<<endl<<"invalid choice !"<<endl;
            break;
        }

    }
}