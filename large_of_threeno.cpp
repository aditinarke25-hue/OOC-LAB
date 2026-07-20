#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cin>>a>>b>>c;
if(a>b&&a>c)
cout<<a<<"\tis greatest";
else if(b>c)
cout<<b<<"\tis greatest";
else
cout<<c<<"\tis greatest";
}
