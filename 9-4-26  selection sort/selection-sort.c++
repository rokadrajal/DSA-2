#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {12 , 7 , 23 , 32 , 8};

    for(int i=0; i<5; i++)
    {
        int minindex = i;

        for(int j=i+1; j<5; j++)
        {
            if(arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;
    }

    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
}