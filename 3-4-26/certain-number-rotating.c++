#include<iostream>
using namespace std;

int main()
{
    // Q-1  Write a C++ Program to rotating elements by a certain number of positions in given array

    // i |  arr[i]  |  (k+i)%n  |  temp index  | temp after stap
    // 0 |  10      |  (2+0)%5  |      2       |  _ _ 10 _ _
    // 1 |  20      |  (2+1)%5  |      3       |  _ _ 10 20 _
    // 2 |  30      |  (2+2)%5  |      4       |  _ _ 10 20 30
    // 3 |  40      |  (2+3)%5  |      0       |  40 _ 10 20 30
    // 4 |  50      |  (2+4)%5  |      1       |  40 50 10 20 30

    int arr[5] = { 10 ,20 , 30 , 40 ,50};

    int k = 2;

    int temp[5];

    for(int i=0; i<5; i++)
    {
        temp[(k+i)%5] = arr[i];
    }

    for(int i=0; i<5; i++)
    {
        arr[i] = temp[i];
    }

    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }

}