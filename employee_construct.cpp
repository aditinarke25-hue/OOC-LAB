#include<iostream>
using namespace std;
class employee
{
private:
int employee_id;
string name;
float salary;
public:
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
cout<<"Employee salary per annum  : "<<salary;
}
};
int main()
{
employee e(59,"Harish Toraskar" ,3.9);
e.display();
return 0;
}

