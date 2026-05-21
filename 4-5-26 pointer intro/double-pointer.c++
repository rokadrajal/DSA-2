#include<iostream>
using namespace std;

int main()
{
    int num;
    int *p1;
    int **p2;

    p1 = &num;
    p2 = &p1;

    cout<<"Enter the number :";
    cin>>**p2;

    // p2 -> p1 -> num

     //*p2 = p1
    // **p2 = num

    if(**p2 > 0)
    {
        cout<<"positive number"<<endl;
    }
    else if(**p2 < 0)
    {
        cout<<"negative number"<<endl;
    }
    else
    {
        cout<<"number is zero"<<endl;
    }

   

}