#include<iostream>
using namespace std;


void merge(int arr[] , int low , int mid , int high)
{
    int temp[100];
    int i=low, j=mid+1, k = 0;
    
    while (i <= mid && j <= high)
    {
        if(arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    
    }

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    
    while (j <= high)
    {
        temp[k++] = arr[j++];
    }

    for(int x=0; x<k; x++)
    {
        arr[low + x] = temp[x];
    }
    
}

void mergesort(int arr[] , int low , int high)
{
    if(low < high)
    {
        int mid = (low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }

}



int main()
{
    int arr[5] = {21 , 7 , 12 , 28 , 6};
    int n = 5;
    int low = 0;
    int high = 4;
    
    mergesort(arr,low,high);
            //OR
    // mergesort(arr,0  , n-1);

    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
   
     
}