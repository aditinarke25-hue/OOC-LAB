#include<iostream>
using namespace std;
class Employee
{
private:
int EmployeeID;
string name;
float salary;
public:
void accept()
{
cout<<"enter employee ID:";
cin>> EmployeeID;
cout<<"enter name:";
cin>>name;
cout <<"enter salary:";
cin>>salary;
}
void display()
{
cout <<"\nEmployee ID: "<<EmployeeID;
cout <<"\nName:"<<name;
cout <<"\nsalary:"<<salary;
}
};
int main()
{
Employee e;
e.accept();
e.display();
return 0;
}