#include<iostream>
using namespace std;
class rectangle
{
private:
float a,b;
float area;
public:

rectangle()
{
a=0;
b=0;
area=0;
}

rectangle(float r,float s)
{
a=r,b=s;
cout<<"Enter two values :"<<a<<" "<<b<<endl;
}

void calculate()
{
area=a*b;
}

rectangle(const rectangle &r)
{
a=r.a;
b=r.b;
}

void display()
{
cout<<"Area = "<<area<<endl;
}
};
int main()
{
rectangle r1;
rectangle r2(90,34);
rectangle r3(r2);

r1.calculate();
r1.display();

r2.calculate();
r2.display();

r3.calculate();
r3.display();
return 0;
}
