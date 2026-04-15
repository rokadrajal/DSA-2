#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int arr[10];
        int num;

        cout << endl << "welcome to our programme" << endl;

        cout<<endl<<"Enter 1 to create an array "<<endl;
        cout<<"Enter 2 to view an array "<<endl;
        cout<<"Enter 3 to bubble sort an array "<<endl;
        cout<<"Enter 4 to insertion sort an array "<<endl;
        cout<<"Enter 5 to selection sort an array "<<endl;
        cout<<"Enter 0 to exit "<<endl;


        int choice;
        cout<<endl<<"Enter your choice :";
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
                    cout<<"Enter the value of element "<<i+1<<" = ";
                    cin>>arr[i];
                }

                cout<<endl<<"array created successfully !"<<endl;
            }
            else
            {
                cout<<endl<<"invalid size"<<endl;
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
            for(int i=0; i<5; i++)
            {
                for(int j=0; j<5-1-i; j++)
                {
                    if(arr[j] > arr[j+1])
                    {
                        int temp = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = temp;

                    }

                }
            }   
            
            cout<<endl<<"bubble sorted successfully !"<<endl;
            break;

        case 4 :
            for(int i=1; i<5; i++)
            {
                int key = arr[i];

                for(int j=i-1; j>=0; j--)
                {
                    if(arr[j] > key)
                    {
                        arr[j+1] = arr[j];
                        key = arr[j];
                    }

                }
            }  
            
            cout<<endl<<"insertion sorted successfully !"<<endl;
            break;

        case 5 :
            for(int i=0; i<5; i++)
            {
                int minindex = i;

                for(int j=i+1; j<5; j++)
                {
                    if(arr[j] < arr[minindex])
                    {
                        minindex = j;
                    }
                }

                int temp = arr[i];
                arr[i] = arr[minindex];
                arr[minindex] = temp;
            }    

            cout<<endl<<"selection sorted successfully !"<<endl;
            break;

        case 0 :
            cout<<endl<<"visit again"<<endl;
            return 0;    

        
        default:
            cout<<endl<<"invalid choice"<<endl;
            break;
        }
    }
}