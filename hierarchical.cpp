#include <iostream>
#include <string>
using namespace std;

class library_item
{
protected:
    int item_id;
    string title;

public:
    void getdata()
    {
        cout << "Enter item_id: " << endl;
        cin >> item_id;

        cout << "Enter Title of the item: " << endl;
        cin >> title;
    }

    void display()
    {
        cout << "Item id: " << item_id << endl;
        cout << "Title: " << title << endl;
    }
};

class book : public library_item
{
protected:
    string author_n;

public:
    void getdata1()
    {
        getdata();

        cout << "Enter Author: ";
        cin >> author_n;
    }

    void display1()
    {
        display();

        cout << "Author: " << author_n << endl;
    }
};

class magazine : public library_item
{
protected:
    string issue_year;

public:
    void getdata2()
    {
        getdata();

        cout << "Enter Issue year: ";
        cin >> issue_year;
    }

    void display2()
    {
        display();

        cout << "Issue year: " << issue_year << endl;
    }
};

int main()
{
    book b;
    magazine m;

    b.getdata1();
    m.getdata2();

    cout << "\nBook Details" << endl;
    b.display1();

    cout << "\nMagazine Details" << endl;
    m.display2();

    return 0;
}

