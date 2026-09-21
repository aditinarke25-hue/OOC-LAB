#include<iostream>
#include<string>
using namespace std;

class student
{
    protected:
    string s_name;
    int s_roll_no;
    public:
    void getdata()
    {
        cout<<"Enter student name : ";
        cin>>s_name;
        cout<<"Enter student roll_no : ";
        cin>>s_roll_no;

    }
};

class student_marks:public student
{
    protected:
    float m1,m2,m3,m4,m5;
    float totalm;
    public:
    void getmarks()
    {
    cout<<"Enter marks for five subjects(out of 40)";
    cin >> m1;
    cin >> m2;
    cin >> m3;
    cin >> m4;
    cin >> m5;

    }
    void calculate()
    {
    totalm=m1+m2+m3+m4+m5;
    cout<<"Total marks: "<<totalm<<endl;
    }
};

class student_result:public student_marks
{
    protected:
    float percentage;
    public:
    void cal()
    {
        percentage=(totalm/200)*100;

    }
    void display()
    {
        cout<<"Total percentage of student : "<<percentage<<"%"<<endl;
    }
};

int main()
{
    student_result sr;

    sr.getdata();
    sr.getmarks();
    sr.calculate();
    sr.cal();
    sr.display();
    return 0;
}