#include <iostream>
#include <vector>
using namespace std;

// 1.Template basics

// ====== add two numbers ======

template <typename T1>
T1 add(T1 a, T1 b)
{
    return a + b;
}

// ======= find maximum number =======

template <typename T2>
T2 maxi(T2 x, T2 y)
{
    if (x > y)
    {
        cout << x << " is maximum" << endl;
    }
    else
    {
        cout << y << " is minimum" << endl;
    }
}

int main()
{
    cout << add(12, 8) << endl;
    maxi(12, 70);

    // ======= class template for a pair ======

    pair<string, int> p;
    p.first = "ram";
    p.second = 18;

    cout << p.first << " " << p.second << endl;

    // 2 . vector basice

    // ====== push_back function ======

    vector<int> data;
    data.push_back(3);
    data.push_back(12);
    data.push_back(5);
    data.push_back(22);
    data.push_back(56);
    data.push_back(67);
    data.push_back(78);
    data.push_back(2);
    data.push_back(26);
    data.push_back(9);

    // ====== display all element =======

    for (int show : data)
    {
        cout << show << " ";
    }

    // ====== remove element using a pop_back ======

    cout << endl
         << data.size() << endl;

    data.pop_back();

    cout << data.size();

    // ======= find size of the vector ======

    cout << endl
         << "size of vector is :" << data.size() << endl;

    // ====== access element using index ======

    cout << data.at(3) << endl;

    // sort vector

    vector<int> sorting;

    sorting.push_back(12);
    sorting.push_back(7);
    sorting.push_back(21);
    sorting.push_back(17);
    sorting.push_back(9);

    cout << "befor sort :";
    for (int sort : sorting)
    {
        cout << sort << " ";
    }

    cout << sorting.size() << endl;

    for (int i = 0; i < sorting.size(); i++)
    {
        for (int j = 0; j < sorting.size() - 1 - i; j++)
        {
            if (sorting[j] > sorting[j + 1])
            {
                int temp = sorting[j];
                sorting[j] = sorting[j + 1];
                sorting[j + 1] = temp;
            }
        }
    }

    cout << "after sort :";
    for (int i = 0; i < sorting.size(); i++)
    {
        cout << sorting[i] << " ";
    }

    cout << endl;
    cout << endl;

    // reverse vector

    vector<int> reverse;

    reverse.push_back(12);
    reverse.push_back(9);
    reverse.push_back(21);
    reverse.push_back(7);
    reverse.push_back(9);
    cout << reverse.size() << endl;

    cout << "befor reverse :";
    for (int sort : reverse)
    {
        cout << sort << " ";
    }
    cout << endl;

    for (int i = 0; i < reverse.size() / 2; i++)
    {
        int temp = reverse[i];
        reverse[i] = reverse[reverse.size() - 1 - i];
        reverse[reverse.size() - 1 - i] = temp;
    }

    cout << "after reverse :";
    for (int i = 0; i < 5; i++)
    {
        cout << reverse[i] << " ";
    }

    cout<<endl;
    cout<<endl;

    // remove duplicate element

    vector<int> dubli;

    dubli.push_back(12);
    dubli.push_back(9);
    dubli.push_back(12);
    dubli.push_back(7);
    dubli.push_back(20);
  

    cout<<"before removing element :";
    for (int sort : dubli)
    {
        cout << sort << " ";
    }
    cout<<endl;

     cout<<"after removing dublicate :";
    for (int i = 0; i < dubli.size(); i++)
    {
        bool flag = true;
        for (int j = i+1; j < dubli.size(); j++)
        {
            if (dubli[j] == dubli[i])
            {
                flag = false;
            }
        }
       
        if (flag == true)
        {
            cout << dubli[i] << " ";
        }
    }

    cout<<endl;


    // search an element in vector

    vector<int> search;

    search.push_back(10);
    search.push_back(9);
    search.push_back(18);
    search.push_back(3);
    search.push_back(2);

    for (int sort : search)
    {
        cout << sort << " ";
    }
    cout<<endl;

    int num;
    bool flag = false;
    cout<<"Enter the number :";
    cin>>num;

    for(int i=0; i<search.size(); i++)
    {
        if(search[i] == num)
        {
            cout<<"this element"<< num <<"is an index no ."<<i;
            flag = true;
        }

    }
    if(flag == false)
    {
        cout<<"invalid choice"<<endl;
    }

    





    
}