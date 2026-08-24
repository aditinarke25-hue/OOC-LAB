#include<iostream>
using namespace std;
class employee
{
private:
int employee_id;
string name;
float salary;
public:
employee()
{
employee_id=0;
name="____";
salary=0;
}
employee(int i,string n,float s)
{
employee_id=i;
name=n;
salary=s;
}
void display()
{
cout<<"Employee Id : "<<employee_id<<endl;
cout<<"Employee Name : "<<name<<endl;
cout<<"Employee salary per annum : "<<salary<<endl;
}
};
int main()
{
employee e1;
employee e2(59,"Harish Toraskar" ,3.9);
e1.display();
e2.display();
return 0;
}
