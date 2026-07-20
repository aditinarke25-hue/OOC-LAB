#include<iostream>
using namespace std;
int main()
{
int n,i=1;
int s=0;
cin>>n;
while(i<=n)
{
s=s+i;

i++;
}
cout<<"Sum of "<<n<<" natural numbers is "<<s;
}
