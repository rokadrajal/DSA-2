#include<iostream>
using namespace std;

int main()
{
    // Q-2 Write a C++ Program to find Leaders in an array

    int arr[5] = {12 , 43 , 7 , 23 , 2};
    int n = 5;

    int max_leader = arr[n-1];
    cout<<"leader in this array are :"<<max_leader<<" ";
 

    for(int i=n-2; i>=0; i--)
    {
        if(arr[i] > max_leader)
        {
            max_leader = arr[i];
            cout<<arr[i]<<" ";

        }
    }

}