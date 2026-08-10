#include<iostream>
using namespace std;
class complex 
{
    private:
    float r1,r2,im1,im2;
    public:
    void input()
    {
        char sign,i;
        cout<<"Enter first complex no.";
        cin>>r1>>sign>>im1>>i;

        cout<<"Enter second complex no.";
        cin>>r2>>sign>>im2>>i;
    }
    void c_add()
    {
        cout<<"Addition:"<<(r1+r2)<<"+"<<(im1+im2)<<"i"<<endl;
    }
    void c_sub()
    {
        cout<<"Subtraction:"<<(r1-r2)<<"+"<<(im1-im2)<<"i";
    }
};
int main()
{
    complex cn;
    cn.input();
    cn.c_add();
    cn.c_sub();

    return 0;
}
