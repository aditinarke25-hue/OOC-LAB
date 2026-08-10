#include<iostream>
using namespace std;
class fraction
{  private:
    float n1,n2,d1,d2;
    public:
    void input(float a,float b,float c,float d)
    {
        n1=a,d1=b,n2=c,d2=d;
        cout << "First fraction: " << n1 << "/" << d1 << endl; 
        cout << "Second fraction: " << n2 << "/" << d2 << endl;
        cout<<endl;
        
    }
    void fadd()
    {
        cout<<"Addition of numerator:"<<((n1*d2)+(n2*d1))<<endl;
        cout<<"Addition of denominator:"<<(d1*d2)<<endl;
        cout<<"Fraction after addition is "<<((n1*d2)+(n2*d1))<<"/"<<(d1*d2)<<endl;
        cout<<endl;
    }
    void fsub()
    {
        cout<<"subtraction of numerator:"<<((n1*d2)+(n2*d1))<<endl;
        cout<<"subtraction of denominator:"<<(d1*d2)<<endl;
        cout<<"Fraction after subtraction is "<<((n1*d2)+(n2*d1))<<"/"<<(d1*d2)<<endl;
    }
};
int main()
{
    fraction f;
    float a,b,c,d;
    char sign;
    cout << "Enter first fraction: "; 
    cin >> a >> sign >> b; 
    cout << "Enter second fraction: "; 
    cin >> c >> sign >> d;
   cout<<endl;
    f.input(a,b,c,d);
    
    
    f.fadd();
    f.fsub();

    return 0;
}
