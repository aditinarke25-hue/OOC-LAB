#include<iostream>
using namespace std;
class maths
{
    public:
    int a,b;
void input()
{
     cout<<"Enter two numbers:";
    cin>>a>>b;
}

    
void add()
{
    cout<<"Addition:"<<(a+b);
}
void sub()
{
    cout<<"Subtraction:"<<(a-b);
}
void product()
{
    cout<<"Multiplication:"<<(a*b);

}
void div()
{
    cout<<"Divison:"<<(a/b);
}
};
int main()
{
    maths m;
    m.input();
    m.add();
    m.sub();
    m.product();
    m.div();
    return 0;
}