#include<iostream>
using namespace std;

int main()
{
    // Ascending order

    int arr[5] = {12 , 21 , 9 , 43 , 3};

    for(int i=0; i<5; i++)
    {
        int min_index = i;

        for(int j=i+1; j<5; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }

        }

        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }

    cout<<"Ascending order :";
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<" ";


    // Descending order 

    int arr2[5] = {12 , 21 , 9 , 43 , 3};

    for(int i=0; i<5; i++)
    {
        int min_index = i;

        for(int j=i+1; j<5; j++)
        {
            if(arr2[j] > arr2[min_index])
            {
                min_index = j;
            }

        }

        int temp = arr2[i];
        arr2[i] = arr2[min_index];
        arr2[min_index] = temp;
    }


    cout<<"Descending order :";
    for(int i=0; i<5; i++)
    {
        cout<<arr2[i]<<" ";
    }
}