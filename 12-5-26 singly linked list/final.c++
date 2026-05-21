#include<iostream>
#include<list>
using namespace std;


int main()
{
    int choice;
    list<int> linkedlist;
    do
    {
        int value;
        int count = 0;
        int newvalue;
        bool flag = false;
        int pos = 1;

        cout<<endl<<"Enter 1 to insert start"<<endl;
        cout<<"Enter 2 to insert end"<<endl;
        cout<<"Enter 3 to delete start"<<endl;
        cout<<"Enter 4 to delete end"<<endl;
        cout<<"Enter 5 to reverse element"<<endl;
        cout<<"Enter 6 to display all element"<<endl;
        cout<<"Enter 7 to count element"<<endl;
        cout<<"Enter 8 to update element"<<endl;
        cout<<"Enter 9 to find position"<<endl;
        cout<<"Enter 0 to Exit"<<endl;

        cout<<"Entre your choice :";
        cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<endl<<"Enter the value :";
            cin>>value;
            linkedlist.push_front(value);
            cout<<endl<<"insert start element successfully !"<<endl;
            break;

        case 2:
            cout<<endl<<"Enter the value :";
            cin>>value;
            linkedlist.push_back(value);
            cout<<endl<<"insert end element successfully !"<<endl;
            break;

        case 3:
            if(!linkedlist.empty())
            {
                linkedlist.pop_front();
            }
            else{
                cout<<"This programme is empty"<<endl;
            }
            cout<<endl<<"delete start element successfully !"<<endl;
            break;

            // ====== OR ======

            // if(linkedlist.empty())
            // {
            //     cout<<"This programme is empty"<<endl;
            // }
            // else{
            //     linkedlist.pop_front();
            // }
            // break;
        
        case 4:
            if(!linkedlist.empty())
            {
                linkedlist.pop_back();
            }
            else{
                cout<<"This programme is empty"<<endl;
            }
            cout<<endl<<"delete end element successfully !"<<endl;
            break;

        case 5:
            linkedlist.reverse();

            for(int list : linkedlist)
            {
                cout<<list<<" => ";
            }
            cout<<endl<<"reverse element successfully !"<<endl;
            break;

        case 6:
            for(int list : linkedlist)
            {
                cout<<list<<" => ";
            }
            break;

        case 7:
            for(int list : linkedlist)
            {
                count++;
            }

            cout<<endl<<"Total Element :"<<count<<endl;
            cout<<endl<<"count element successfully !"<<endl;
            break;

        case 8:
            cout<<"Enter the value :";
            cin>>value;

            cout<<endl<<"Enter the new value :";
            cin>>newvalue;

            for(int &list : linkedlist)
            {
                if(list == value)
                {
                   list = newvalue;
                   flag = true;
                }
                
            }

            if(flag == false)
            {
                cout<<endl<<"invalid value"<<endl;
            }
            else
            {
                cout<<endl<<"update element successfully !"<<endl;
            }
            
            break;

        case 9:
            cout<<endl<<"Enter the value :";
            cin>>value;
            flag = false;

            for(int list : linkedlist)
            {
                if(list == value)
                {
                    cout<<"position :"<<pos;
                    flag = true;
                }

                pos++;
            }

            if(flag == false)
            {
                cout<<"invalid value"<<endl;
            }
            break;

        case 0:
            exit(0);
        
        default:
            cout<<endl<<"invalid choice"<<endl;
            break;
        }


    } while (choice != 0);
    
}
