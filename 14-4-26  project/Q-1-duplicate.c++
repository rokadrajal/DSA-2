#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {12, 7, 21, 12, 35};
    int n = 5;
   

    for (int i = 0; i < n; i++)
    {
        bool flag = true;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = false;
            }
        }

        if(flag == true)
        {
            cout << arr[i] << " ";
        }
            
        
    }

    
}