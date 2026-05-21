#include <iostream>
#include <stack>
using namespace std;

class TextEditor
{
  stack<string> Text;

public:
  void WriteText(string text)
  {
    Text.push(text);
    cout << "Write a text successfully !" << endl;
  }

  void Undo()
  {
    if (Text.empty())
    {
      cout << "Text is not available !" << endl;
      return;
    }
    Text.pop();
    cout << "Text Undo successfully !" << endl;
  }

  void Display()
  {
    if (Text.empty())
    {
      cout << "Text is not available !" << endl;
      return;
    }

    cout << "Current Text :" << Text.top();
  }
};

int main()
{
  TextEditor t;
  int choice;

  do
  {
    cout << endl << "======== UNDO FEATURE IN TEXT EDITOR ======== " << endl;
    cout << endl << "Enter 1 to Write Text " << endl;
    cout << "Enter 2 to Undo Last Action " << endl;
    cout << "Enter 3 to Display Current Text" << endl;
    cout << "Enter Exit to 0" << endl;

    cout << "Enter your choice :";
    cin >> choice;

    switch (choice)
    {
    case 1:
      t.WriteText("Hello");
      t.WriteText("c++");
      t.WriteText("DSA");
      break;

    case 2:
      t.Undo();
      break;

    case 3:
      t.Display();
      break;

    case 0:
      cout<<"Thank you !"<<endl;
      exit(0);

    default:
      cout << "invalid choice" << endl;
      break;
    }

  } while (choice != 0);
  
}