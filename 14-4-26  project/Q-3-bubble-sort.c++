#include<iostream>
using namespace std;

int main()
{
    // Ascending order

    int arr[5] = {21 , 6 , 35 , 18 , 2};

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
    cout<<"Ascending order :";
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    


    // Descending order

    int arr2[5] = {21 , 6 , 35 , 18 , 2};

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5-1-i; j++)
        {
            if(arr2[j] < arr2[j+1])
            {
                int temp = arr2[j];
                arr2[j] = arr2[j+1];
                arr2[j+1] = temp;
            }
        }
    }
    cout<<"Descending order :";
    for(int i=0; i<5; i++)
    {
        cout<<arr2[i]<<" ";
    }
}