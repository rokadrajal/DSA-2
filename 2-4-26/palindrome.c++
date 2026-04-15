#include<iostream>
using namespace std;

int main()
{
    // Q-2 Write a C++ Program to check Array is palindrome or not

    int arr[5] = {10 , 20 , 30 , 20 ,10};
    bool flag = true;

    for(int i=0; i<5/2; i++)
    {
       if(arr[i] != arr[4-i])
       {
        flag = false;
       }
    }

    if(flag == true)
    {
        cout<<"palindrom"<<endl;
    }
    else
    {
        cout<<"not palindrom"<<endl;
    }

}