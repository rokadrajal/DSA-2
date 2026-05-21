#include<iostream>
using namespace std;

int main()
{
    // 1. single pointer

    int a = 12;
    int b = 23;

    int *ptr ;
    int *ptr2 ;
    
    ptr = &a;
    ptr2 = &b;

    cout<<"print value of a without pointer :"<<a<<endl;
    cout<<"print value of b without pointer :"<<b<<endl;

    cout<<"print value of a using pointer :"<<ptr<<endl;
    cout<<"print value of b using pointer :"<<ptr2<<endl;

    cout<<"print value of a using pointer :"<<*ptr<<endl;
    cout<<"print value of b using pointer :"<<*ptr2<<endl;


    // 2 . double pointer

    int num;
    int *ptr3;
    int **ptr4;

    ptr3 = &num;
    ptr4 = &ptr3;

    // cout<<"enter the value :";
    // cin>>**ptr4;

    // cout<<"value of num :"<<num;

    cout<<"enter the value :";
    cin>>num;

    cout<<"num value :"<<num<<endl;
    cout<<"ptr3 value :"<<*ptr3<<endl;
    cout<<"ptr4 value :"<<**ptr4<<endl;
    
}