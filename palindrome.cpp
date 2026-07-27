#include<iostream>
using namespace std;
int main()
{
int n,b;
int rev=0;
int rem;
cin>>n;
b=n;
while(n!=0)
{
  rem=n%10;
  rev=rev*10+rem;
  n=n/10;
}
if (rev!=b)
{
  cout<<"Number is not a palindrome";
 }
 else
 {
   cout<<"Number is a palindrome";
 }
 }