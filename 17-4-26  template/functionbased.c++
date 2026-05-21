#include<iostream>
using namespace std;

template <typename T>
T add(T a , T b)
{
    return a + b;
}

int main()
{
    // cout<<add<float>(12 , 3.2)<<" ";

    int result = add(12 , 4);
    cout<<result<<" ";

}