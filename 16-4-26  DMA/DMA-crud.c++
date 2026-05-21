#include <iostream>
using namespace std;

class array
{
private:
   int size;
   int *arr;

public:
   array(int s)
   {
      size = s;
      arr = new int[s];

      if (arr != NULL)
      {
         cout << endl
              << "Memory Allocated successfully !" << endl;
      }
      else
      {
         cout << endl
              << "Memory Allocation failed !" << endl;
      }
   }

   void addarray()
   {
      for (int i = 0; i < size; i++)
      {
         cout << "Enter the value of index " << i + 1 << " : ";
         cin >> arr[i];
      }

      cout << endl
           << "array created successfully !" << endl;
   }

   void viewarray()
   {
      cout << endl
           << "element in array are :";

      for (int i = 0; i < size; i++)
      {
         cout << arr[i] << " ";
      }

      cout << endl
           << "view all elements successfully !" << endl;
   }

   void deletearray(int index)
   {
      if (index >= 0 && index <= size)
      {
         for (int i = index-1; i < size-1; i++)
         {
            arr[i] = arr[i+1];
         }
         size--;

         cout << endl
              << "array deleted successfully !" << endl;
      }

      else
      {
         cout<<endl<<"invalid index"<<endl;
      }
   }

   void updatearray(int index, int value)
   {
      if(index >= 0 && index <= size)
      {
         arr[index - 1] = value;
         cout << endl
           << "array updated successfully !" << endl;

      }
      else
      {
         cout<<endl<<"invalid index"<<endl;
      }
      
   }

   ~array()
   {
      delete[] arr;
      arr = NULL;
      cout << endl
           << "Memory Deallocation successfully !" << endl;
   }
};

int main()
{
   array a1(5);
   int index;
   int value;

   while (true)
   {
      cout << endl
           << "welcome to our programme" << endl;

      cout << endl
           << "Enter 1 to create an array " << endl;
      cout << "Enter 2 to view an array " << endl;
      cout << "Enter 3 to delete an element of array " << endl;
      cout << "Enter 4 to update an element of array " << endl;
      cout << "Enter 0 to exit " << endl;

      int choice;
      cout <<endl<< "Enter your choice :";
      cin >> choice;

      switch (choice)
      {
      case 1:
         a1.addarray();
         break;

      case 2:
         a1.viewarray();
         break;

      case 3:
         cout<<endl<<"Enter the index :";
         cin>>index;
         a1.deletearray(index);
         break;

      case 4:
         cout<<endl<<"Enter the index :";
         cin>>index;

         cout<<endl<<"Enter the value :";
         cin>>value;

         a1.updatearray(index , value);
         break;

      case 0:
         cout<<endl<<"visit again"<<endl;
         return 0;

      default:
         cout<<endl<<"invalid choice"<<endl;
         break;
      }
   }
}