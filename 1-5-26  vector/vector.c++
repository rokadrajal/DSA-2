#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<int>data;

    // 1 . push_back function thi  element add thay
    cout<<"====== push_back() ======="<<endl;
    data.push_back(12);  
    data.push_back(19);
    data.push_back(6);
    data.push_back(21);
    data.push_back(60);
    cout<<endl;
    cout<<endl;


    // 2 . size() return number of element aetle ke vector ni size khabar pade
    
    cout<<"====== size() ======="<<endl;
    cout<<data.size()<<endl;
    cout<<endl;
    cout<<endl;



    // for each loop badha element show kare

     cout<<"====== for each loop ======="<<endl;
    for(int vect : data)  
    {
        cout<<vect<<endl;
    }
    cout<<endl;
    cout<<endl;



    // 3 . at() access element aetle ke koy specific element show karave

    cout<<"====== at() ======="<<endl;
    cout<<data.at(1)<<endl; 
    cout<<data[3]<<endl; // direct access
    cout<<endl;
    cout<<endl;


    // 4 . pop_back() remove element from back side

    cout<<"====== pop_back() ======="<<endl;
    data.pop_back(); 

    cout<<data.size()<<endl;
    cout<<endl;
    cout<<endl;


    // 5 . insert begin aetle pelathi +1 = 2ja element ni jagyaye add thay

    cout<<"====== insert() ======="<<endl; 
    data.insert(data.begin()+1,100);

    for(int vect : data)  
    {
        cout<<vect<<endl;
    }
    cout<<endl;
    cout<<endl;


    // 6 . erase

    cout<<"====== erase() ======="<<endl; 
    data.erase(data.begin()+2);

    for(int vect : data)  
    {
        cout<<vect<<endl;
    }

    cout<<endl;
    cout<<endl;

    // 7 . front first element print kare

    cout<<"====== front() ======="<<endl;

    cout<<data.front();
    cout<<endl;
    cout<<endl;

    
    // 8 . back last element print kare

    cout<<"====== back() ======="<<endl;

    cout<<data.back();
    cout<<endl;
    cout<<endl; 


    // 9. end  aetle chhelethi - 1 = 2ja element ni jagyaye add thay

    cout<<"====== end() ======="<<endl;

    data.insert(data.end()-1,200);

    for(int vect : data)  
    {
        cout<<vect<<endl;
    }
    cout<<endl;
    cout<<endl;



    // 10 . clear // data clear thay jay

    cout<<"====== clear() ======="<<endl; 
    data.clear();

    cout<<data.size();

    cout<<endl;
    cout<<endl;


    // 11. empty 
    
    cout<<"====== empty() ======="<<endl;

    if(data.empty())
    {
        cout<<"memory is empty"<<endl;
    }
    else
    {
        cout<<"memory is not empty"<<endl;
    }


   
}
