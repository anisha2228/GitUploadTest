#include<iostream>
using namespace std;

class Anisha
{
  const char* ptr;

public:
  Anisha()
  {

    ptr = new char[15];
    ptr = "Anisha Kumari";
  }

  void display()
  {
    cout << ptr;
  }
};

int main()
{
  Anisha obj1;
  obj1.display();
}
