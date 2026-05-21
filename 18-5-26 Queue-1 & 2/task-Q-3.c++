#include<iostream>
#include<stack>
#include<queue>
using namespace std;


int main()
{
    stack<int> s1;
    stack<int> s2;
    stack<int> temp;
    queue<int> q1;

    s1.push(10);
    s1.push(20);

    s2.push(30);
    s2.push(40);


    while (!s2.empty())
    {
        temp.push(s2.top());
        s2.pop();
    }

    while (!s1.empty())
    {
        temp.push(s1.top());
        s1.pop();
    }

    while (!temp.empty())
    {
        q1.push(temp.top());
        temp.pop();
    }

    while (!q1.empty())
    {
        cout<<q1.front()<<" ";
        q1.pop();

    }
    
    
    
    
    // while (!s1.empty())
    // {
    //     s2.push(s1.top());
    //     s1.pop();
    // }

    // while (!s2.empty())
    // {
    //     q1.push(s2.top());
    //     s2.pop();
    // }
    
    // while (!q1.empty())
    // {
    //     cout<<q1.front()<<" ";
    //     q1.pop();

    // }
    
    
    
}