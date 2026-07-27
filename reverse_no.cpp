#include<iostream>
using namespace std;
int main()
{
int n;
int rev=0;
int rem;
cin>>n;
while(n!=0)
{
  rem=n%10;
  rev=rev*10+rem;
  n=n/10;
}
 
cout<<"Reverse no is "<<rev;
}