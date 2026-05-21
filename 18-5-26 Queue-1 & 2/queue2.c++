#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    q.push(100);
    q.push(40);

    q.pop();

    cout << q.front()<<endl;
    cout<< q.empty()<<endl;


    

}