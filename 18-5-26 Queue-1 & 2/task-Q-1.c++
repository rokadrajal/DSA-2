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
        head = tail = NULL;
    }   


    void enqueue(int v)
    {
        Node* newnode = new Node(v);
        if(empty())
        {
            head = tail = newnode;
        }
        else{
            tail->next = newnode;
            tail = newnode;
        }
    }

    void dequeue()
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
            cout<<"Queue is Empty"<<endl;
            return;
        }

        cout<<"Deleted :"<<head->value<<endl;
    }

    void rear()
    {
        if(empty())
        {
            cout<<"Queue is Empty"<<endl;
            return;
        }

        cout<<"Deleted :"<<tail->value<<endl;

    }

    bool empty()
    {
        return head == NULL;
    }


    void size()
    {
        int count = 0;
        Node* temp = head;

        while (temp != NULL)
        {
            count++;
            temp = head->next;
        }

        cout<<"Total size :"<<count<<endl;
    }
       
};

int main()
{
    Queue q1;

    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);

    q1.dequeue();

    q1.front();
    q1.rear();

    q1.size();



    cout<< q1.empty();

}