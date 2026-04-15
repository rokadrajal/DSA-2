#include<iostream>
using namespace std;


int main()
{
    int arr[5] = {21 , 7, 35 , 9 , 18};

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }
    }

    for(int i=0; i<5; i++)
    {
        cout<<arr[i] <<" ";
    }
}