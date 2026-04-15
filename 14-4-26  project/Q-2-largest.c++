#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {12 , 23 , 8 , 19 , 4};
    int n = 5;

    int max_leader = arr[n-1];
    cout<<"The largest element is :"<<max_leader<<" ";

    for(int i=n-2; i>=0; i--)
    {
        if(arr[i] > max_leader)
        {
            max_leader = arr[i];
            cout<<max_leader<<" ";
        }
    }


}