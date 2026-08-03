#include <iostream>

using namespace std;


class student
{

public:

string name;

int roll_no;

float marks;

void input()

{

roll_no=21;

marks=98;

name="Aditi";

}

void display()

{

cout<<"Name: "<<name<<endl;

cout<<"Roll no: "<<roll_no<<endl;

cout<<"Marks: "<<marks;

}

};

int main()

{

student s;

s.input();

s.display();

return 0;

}