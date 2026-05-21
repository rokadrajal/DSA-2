#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;

    int *p1;
    int *p2;

    p1 = &a;
    p2 = &b;

    cout<<"Enter the value of a :";
    cin>>a;
    
    cout<<"Enter the value of b :";
    cin>>b;

    cout<<"address of a :"<<p1<<endl;
    cout<<"address of b :"<<p2<<endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"after swap value is a :"<<a<<endl;
    cout<<"after swap value is b :"<<b<<endl;




}