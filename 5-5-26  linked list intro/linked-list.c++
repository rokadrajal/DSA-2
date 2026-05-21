#include<iostream>
using namespace std;

struct Node
{
    int num;
    Node* next;

};


int main()
{
    Node *head = NULL;
    head = new Node();
    head->num = 20;
    head->next = NULL;

    Node *head2 = NULL;
    head2 = new Node();
    head2->num = 30;
    head2->next = NULL;
    head->next =  head2;

    Node *head3 = NULL;
    head3 = new Node();
    head3->num = 40;
    head3->next = NULL;
    head2->next = head3;



    cout<<"data :"<<head->num<<endl;
    cout<<"next :"<<head->next<<endl;

    cout<<"data :"<<head2->num<<endl;
    cout<<"next :"<<head2->next<<endl;

    cout<<"data :"<<head3->num<<endl;
    cout<<"next :"<<head3->next<<endl;



}