#include<iostream>
using namespace std;

int main()
{
    // Q-3  Write a C++ Program to Perform sum, Average in given elements of Array

    int arr[5] = {12 , 7 , 3 , 21 , 1};
    int sum = 0;


    for(int i=0; i<5; i++)
    {
        sum = sum + arr[i];

    }

    cout<<"sum is :"<<sum<<endl;
    cout<<"average is :"<<sum/5<<endl;

}