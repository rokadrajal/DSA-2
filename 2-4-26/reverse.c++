#include<iostream>
using namespace std;

int main()
{
    // Q-1 Write a C++ Program to Reverse the array

    int arr[5] = {10,20,30,40,50};

    for(int i=0; i<5/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[4-i];
        arr[4-i] = temp;

    }

    for(int i=0; i<5; i++)
    {
        cout<<arr[i] <<" ";
    }

}