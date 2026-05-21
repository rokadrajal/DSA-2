#include<iostream>
using namespace std;

class Node
{
    public:
      int value;
      Node* next;

    Node(int Data)
    {
        value = Data;
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
        head = tail = NULL;
    }
    
    void push(int v)
    {
        Node* newnode = new Node(v);
        if(empty())
        {
            head = tail = newnode;
            cout<<"head == tail"<<endl;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
            cout<<"tail"<<endl;
        }
    }


    void pop()
    {
        if(empty()) return;
        Node* temp = head;
        head = head->next;
        delete temp;

    }


    void front()
    {
        if(empty())
        {
            cout<<"Queue is empty"<<endl;
            return;
        }

        cout<<"Deleted :"<<head->value<<endl;
    }


    bool empty()
    {
        return head==NULL;
    }

};

int main()
{
    Queue q1;
    q1.push(10);
    q1.push(20);
    q1.pop();
    // q1.pop();
    q1.front();
   cout<< q1.empty();


}