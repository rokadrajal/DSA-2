#include<iostream>
#include<list>
using namespace std;

class stack
{
    list<int> l;

    public:

       // push
       void push(int data)
       {
        l.push_back(data);
        cout<<"element added successfully"<<endl;
       }


       //pop
       void pop()
       {
        if(l.empty())
        {
            cout<<"Stack is empty"<<endl;
            return;
        }
        l.pop_back();
       }


       //top
       void top()
       {
        cout<<"Top element :"<<l.back()<<endl;
       }


       //print
       void display()
       {
        for(int i : l)
        {
            cout<<i<<" -> ";
        }
       }

       //Empty
       bool empty()
       {
        return l.empty();
       }

};

int main()
{
    stack s1;
    s1.push(10);
    s1.push(20);
    s1.top();
    s1.display();
    cout<<s1.empty();

}