#include<iostream>
using namespace std;

int main()
{
    // Q-3 Write a C++ Program to Remove Duplicates elements in array

    int arr[5] = {1 , 7 , 9 , 1 , 7};
    
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(arr[i] == arr[j])
            {
              cout<<"Duplicate :"<<arr[j]<<" ";

            }
           
        }
    }

}