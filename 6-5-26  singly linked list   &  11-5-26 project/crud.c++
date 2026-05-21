#include<iostream>
using namespace std;


struct Node
{
    int value;
    Node *next;
};

void insertStart(Node *& head , int data)
{
    Node* newnode = new Node();
    newnode->value = data;
    newnode->next = head;
    head = newnode;

}

void insertLast(Node *& head , int data)
{
    Node* newnode = new Node();
    newnode->value = data;
    newnode->next = NULL;

    Node* temp = head;
    if(temp == NULL)
    {
        head = newnode;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;

}

void deleteStart(Node*& head)
{
    Node* temp = head;
    if(temp->next == NULL)
    {
        head = NULL;
        delete temp;
        return;
    }

    head = head->next;
    delete temp;
    return;
}

void deleteLast(Node*& head)
{
    if(head == NULL) return;

    Node* temp = head;

    if(head->next == NULL)
    {
        head = NULL;
        delete temp;
        return;
    }

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;
    return;
    

}


void printData(Node* head)
{
    Node* temp = head;

    while (temp != NULL)
    {
        cout<<temp->value<<" -> ";
        temp = temp->next;
    }

    cout<<"NULL"<<endl;
    
}

void countNode(Node* head)
{
    int count = 0;

    Node* temp = head;

    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    cout<<"Total nodes : "<<count<<endl;
}

void reverseNode(Node* head)
{
    if(head == NULL)
    {
        cout<<"NULL";
        return;
    }

    reverseNode(head->next);
    cout<<head->value<<" -> ";
}

int main()
{
    Node* head = NULL;

    while (true)
    {
        cout<<endl<<"welcome to our programme"<<endl;

        cout<<endl<<"Enter 1 to insert an element at the beginning"<<endl;
        cout<<"Enter 2 to insert an element at the end"<<endl;
        cout<<"Enter 3 to delete an element from the beginning"<<endl;
        cout<<"Enter 4 to delete an element from the end"<<endl;
        cout<<"Enter 5 to Display all elements of the linked list"<<endl;
        cout<<"Enter 6 to Count the total number of element"<<endl;
        cout<<"Enter 7 to reverse number of element"<<endl;
        cout<<"Enter 0 to Exit"<<endl;

        int choice;
        cout<<endl<<"Enter the choice :";
        cin>>choice;

        switch (choice)
        {
        case 1:
            insertStart(head , 1);
            insertStart(head , 2);
            insertStart(head , 3);
            insertStart(head , 4);
            insertStart(head , 5);
            insertStart(head , 6);
            insertStart(head , 7);
            insertStart(head , 8);
            insertStart(head , 9);
            insertStart(head , 10);
            printData(head);
            break;

        case 2 :
            insertLast(head , 11);    
            insertLast(head , 12);    
            insertLast(head , 13);    
            insertLast(head , 14);    
            insertLast(head , 15);    
            insertLast(head , 16);    
            insertLast(head , 17);    
            insertLast(head , 18);    
            insertLast(head , 19);    
            insertLast(head , 20);    
            insertLast(head , 21);    
            insertLast(head , 22);    
            insertLast(head , 23);    
            insertLast(head , 24);    
            insertLast(head , 25);    
            insertLast(head , 26);    
            insertLast(head , 27);    
            insertLast(head , 28);    
            insertLast(head , 29);    
            insertLast(head , 30); 
            printData(head);  
            break; 

        case 3 :
            deleteStart(head);
            printData(head);
            break;

        case 4 :
            deleteLast(head);
            printData(head);
            break;
            
        case 5 :
            printData(head);
            break;
            
        case 6 :
            printData(head);  
            countNode(head);
            break;

        case 7 :
            reverseNode(head);    
            
        case 0 :
            cout<<endl<<"visit again"<<endl;
            return 0;
               
        default:
            cout<<endl<<"invalid choice"<<endl;
            break;
        }
    }
    


}