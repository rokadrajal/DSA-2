#include<iostream>
using namespace std;

class Node
{
   public:
      int value;
      Node* next;

    Node(int data)
    {
        value = data;
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
        // head = tail = NULL;
    }  



    // Add data

    void push(int val)
    {
        Node* newnode = new Node(val);
        if(empty())
        {
            head = tail = newnode;
            cout<<"head == tail"<<endl;
        }
        else{
            tail = newnode;
            cout<<"tail"<<endl;
        }

    }


    // remove data

    void pop()
    {

    }

    // front data

    void front()
    {
        if(empty())
        {
            cout<<"Queue is Empty"<<endl;
            return;
        }
    }


    // is Empty
    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    Queue q1;
    q1.front();

    cout<< q1.empty() <<endl;

    q1.push(12);
    q1.push(20);
    q1.push(16);

    q1.pop();

}