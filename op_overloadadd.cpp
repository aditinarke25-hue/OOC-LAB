#include<iostream>
using namespace std;
class Number
{
    int x;
    public:
    Number(int a)
    {
        x=a;
    }
    Number operator+(Number n)
    {
        cout<<"Value of x:"<<x<<endl;
        cout<<"Value of n.x :"<<n.x<<endl;
        Number temp=0;
        temp.x=x+n.x;
        return temp;
    }
    void display()
    {
        cout<<"Addition : "<<x<<endl;
    }
};
int main()
{
    Number n1(10);
    Number n2(20);
    Number n4(30);
    Number n3=n1+n2+n4;
    n3.display();
    return 0;
}


/*output 
Value of x:10
Value of n.x :20
Value of x:30
Value of n.x :30
Addition : 60
so basically it works like a loop*/


 /*Number operator+(Number n)
    {
        cout<<x<<endl;
        Number temp=0;
        temp.x=x+n.x;
        return temp;
    }
        output :
        10 
        30
    add=60
    i.e it saves 10 first value and n.x is n2 i.e 20 then addition is performed of n1 and n2 and that value is stored in x again so ouput 10
    next output 30 is the value of 10 +20 is 30
    next we take n.x that is n4 30 then we print total addition add=60
    */

/*
Number operator+(Number n)
    {
        cout<<n.x<<endl;
        Number temp=0;
        temp.x=x+n.x;
        return temp;
    }
        here we print the n.x values first then total addition
        so first x is 10 and n.x is n2 that is 20
        that is added to become 30 
        then for next x is 30 and n.x is 30 that is n4 value
        so first n.x is 20 second n.x is 30
        and total add is 60*/

