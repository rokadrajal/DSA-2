#include<iostream>
#include<vector>
using namespace std;

class stack
{
    vector<int> v;

    public:

       // push
       void push(int data)
       {
        v.push_back(data);
        cout<<"Element added successfully "<<endl;
       }


       // pop
       void pop()
       {
        if(v.empty())
        {
            cout<<"stack is a empty"<<endl;
            return;
        }
        v.pop_back();
        cout<<"Element removed successfully"<<endl;
       }


       // top element
       void top()
       {
        if(v.empty())
        {
            cout<<"\nstack is empty"<<endl;
            return;
        }
        cout<<"Top element :"<<v.at(v.size() -1)<<endl;
       }


       //print
       void display()
       {
        for(int i : v)
        {
            cout<<i<<" ";
        }
       }

       
       // Empty
       bool empty()
       {
        return v.empty();
       }


       //size
       int vectorsize()
       {
        return v.size();
       }
};

int main()
{
   stack s1;
   s1.push(12);
   s1.push(11);
   s1.push(10);
   s1.pop();
   s1.top();
   s1.display();
   cout<<s1.empty()<<endl;
   cout<<"Total size :"<<s1.vectorsize();
    


}