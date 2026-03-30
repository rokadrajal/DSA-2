#include<iostream>
using namespace std;

int main()
{
    // Q-1 Write a C++ program to count positive and negative values in array

   
    int arr[5] = {12 , 4 , -7 , 20 , -5};
    int positive = 0;
    int negative = 0;


    for(int i=0; i<5; i++)
    {
        if(0<arr[i])
        {
            cout<<"positive numbers :"<<arr[i]<<endl;
            positive++;
        }
        else
        {
            cout<<"negative number :"<<arr[i]<<endl;
            negative++;
        }
    }

    cout<<"positive number : "<<positive<<endl;
    cout<<"negative number : "<<negative<<endl;



}