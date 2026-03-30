#include<iostream>
using namespace std;

int main()
{
    // Q-3 Write a C++ program to count odd and even values in array


    int arr[5] = {12 , 25 , 4 , 20 , 8};
    
    int even = 0;
    int odd = 0;

    for(int i=0; i<5; i++)
    {
        if(arr[i]%2 == 0)
        {
            cout<<"Even :"<<arr[i]<<endl;
            even++;
        }
        else
        {
            cout<<"odd :"<<arr[i]<<endl;
            odd++;
        }
    }

    cout<<"even numbers : "<<even<<endl;
    cout<<"odd numbers : "<<odd<<endl;

}