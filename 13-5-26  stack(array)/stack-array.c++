#include<iostream>
using namespace std;

class stack
{
    int arr[2];
    int top = -1;

    public: 
       // push element 
       int push(int num)
       {
        if(top == sizeof(arr)/sizeof(int) - 1)
        {
            cout<<"Stack Overflow !!"<<endl;
            return 0;
        }
        arr[++top] = num;
        cout<<"Data added successfully !"<<endl;
       }


       // pop element
       void pop()
       {
        if(top == -1)
        {
            cout<<"stack is empty"<<endl;
            return;
        }
        top--;
        cout<<"\nElement removed successfully "<<endl;
       }


       // top element
       void topp()
       {
        cout<<arr[top];
       }


       // print
       void display()
       {
        // cout<<arr[1]; // 13 delete nathi thato pan top 1 step pachhad khase 6e aetle have 12 top thay jay 6e

        for(int i=0; i<=top; i++)
        {
            cout<<arr[i]<<" -> ";
        }
       }

};

int main()
{
    stack s1;
    s1.push(12);
    s1.push(13);
    s1.push(14);
    
    s1.topp();
    cout<<endl;
    s1.pop();
    // s1.pop();
    s1.display();
    s1.topp();

}