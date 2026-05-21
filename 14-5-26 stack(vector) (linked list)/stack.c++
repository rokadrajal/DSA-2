#include<iostream>
#include<stack>
using namespace std;


int main()
{
    stack<int> s1;
    s1.push(12);
    s1.push(11);
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
    cout<<s1.size()<<endl;
    cout<<s1.empty();


}