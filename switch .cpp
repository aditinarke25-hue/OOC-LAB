#include<iostream>
using namespace std;
int main()
{
  int a,b,choice;
  cout<<"Enter two values:";
  cin>>a>>b;
  cout << "Enter choice:\n";
  cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
  cin>>choice;
  switch (choice)
  {
  case 1:
  cout<<"Addition:"<<(a+b);
  break;
  case 2:
  cout<<"Subtraction:"<<(a-b);
  break;
  case 3:
  cout<<"Multiplication :"<<(a*b);
  break;
  case 4:
  if (b != 0)
   cout << "Division: " << (a / b);
 else
    cout << "Division by zero is not allowed.";
  break;
  default:
  cout<<"invalid choice";
}
}
  