#include<iostream>
using namespace std;

int main()
{
    // Q-2  Write a C++ Program to count occurrences of each elements using Array

    int arr[5] = {12 , 7 , 3 , 12 , 1};
    int count = 0;

    int value;
    cout<<"Enter the value :";
    cin>>value;

    for(int i=0; i<5; i++)
    {
        if(arr[i] == value)
        {
            count++;
        }
       
    }

    cout<<"count is :"<<count;

}