#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int size;
    cout << "Enter how many element you want to add:";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value for element number :" << i + 1 << "=";
        cin >> arr[i];
    }

    cout << "Element in array are : ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    

        // int arr[5];
        // int size;
        // cout << "Enter how many element you want to add:";
        // cin >> size;

        // if (size >=0  && size <= 5)
        // {
        //     for (int i = 0; i < size; i++)
        //     {
        //         cout << "Enter the value for element number :" << i + 1 << "=";
        //         cin >> arr[i];
        //     }

        //     cout << "Element in array are : ";

        //     for (int i = 0; i < size; i++)
        //     {
        //         cout << arr[i] << " ";
        //     }
        // }
        // else
        // {
        //     cout<<"invalid size";
        // }
}