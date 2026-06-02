#include<iostream>
using namespace std;

// Type 1 = function based

template <typename T>
T add(T a , T b)
{
    return a+b;
}

template <typename t1>
t1 fun(t1 n , t1 fact)
{
    for(int i=1; i<n; i++)
    {
        fact*=i;

    }
    return fact;
}




// Type 2 = class based

template <class T1 , class T2>
class student
{
    public :
      T1 name;
      T2 age;
      
};


int main()
{
    cout<<add(12 , 3);

    cout<<fun(5 , 1);


    student <string , int> s1 ;
    s1.name = "Ram";
    s1.age = 18;

    cout<<s1.name<<endl<<s1.age<<endl;

    // pair aek template 6e aetle tempalte create no karvu pade

    pair<string , int> p1;
    p1.first = "sita";
    p1.second = 17;

    cout<<p1.first<<" "<<p1.second<<endl;

}