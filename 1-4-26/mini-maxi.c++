#include<iostream>
using namespace std;

int main()
{
    // Q-4 Write a C++ Program to find minimum and maximum element in given Array

    int arr[5] = {12 , 7 , 9, 14 , 17};
    int min = arr[0];
    int max = arr[0];
    
    for(int i=0; i<5; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    for(int i=0; i<5; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout<<"minimum element is : "<<min<<endl;
    cout<<"maximum element is : "<<max<<endl;

}