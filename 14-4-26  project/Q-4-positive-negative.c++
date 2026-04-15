#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {12 , 7 , -34 , -8 , 10};
    int positive = 0;
    int negative = 0;

    for(int i=0; i<5; i++)
    {
        if(arr[i] > 0)
        {
            cout<<"positive :"<<arr[i]<<endl;
            positive++;
        }
        else
        {
            cout<<"Negative :"<<arr[i]<<endl;
            negative++;
        }
    }

    cout<<"Total positive number :"<<positive<<endl;
    cout<<"Total negative number :"<<negative<<endl;
}