#include<iostream>
using namespace std;

int main()
{
    // Q-1  Write a C++ Program Traversing arrays to find specific elements (Searching)

    int arr[5] = {12 , 4 , 9 , 10 , 23};
    bool flag = false;

    int value;
    cout<<"Enter the value :";
    cin>>value;

    for(int i=0; i<5; i++)
    {
        if(arr[i] == value)
        {
            cout<<"The element  "<<value<<"is on index no."<<i;
            flag = true;
        }
        
    }

    if(flag == false)
    {
        cout<<"invalid value"<<endl;
    }

}