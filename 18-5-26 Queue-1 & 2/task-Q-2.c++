#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverse(stack<int> s1 , queue<int> &q1)
{
  stack<int> temp;
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

}


int main()
{
  stack<int> s1;
  queue<int> q1;

  s1.push(10);
  s1.push(20);
  s1.push(30);

  reverse(s1,q1);

  while (!q1.empty())
  {
    cout<<q1.front()<<" ";
    q1.pop();
  }

  
  

  
}


