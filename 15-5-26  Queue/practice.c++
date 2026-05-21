#include<iostream>
using namespace std;

class Node
{
    public:
      int value ;
      Node* next;

    Node(int val)
    {
        value = val;
        next = NULL;
    }  

};

class Queue
{
    public:
       Node* head;
       Node* tail;

    Queue()
    {
        head = NULL;
        tail = NULL;
    }   

    void push(int data)
    {
        Node* newnode = new Node(data);
        if(empty())
        {
            head = tail = newnode;
            cout<<"head == tail"<<endl;
        }
        else
        {
            tail = newnode;
            cout<<"tail"<<endl;
        }
    }


    void pop()
    {

    }

    void front()
    {
        if(empty())
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
    }

    bool empty()
    {
        return head == NULL;
    }
       
};

int main()
{
    Queue q1;
    q1.push(10);
    q1.push(15);
    q1.front();
    cout<<q1.empty();



}