#include <iostream>
using namespace std;

class increment
{
private:
    int num1;

public:
    // Constructor
    increment(int x)
    {
        num1 = x;
    }

    void operator++()
    {
        cout << "Value before increment: " << num1 << endl;
        cout << "After prefix increment: " << ++num1 << endl;
        cout << "After postfix increment: " << num1++ << endl;
        cout << "New value: " << num1 << endl;
    }
};

class decrement
{
private:
    int num2;

public:
    // Constructor
    decrement(int y)
    {
        num2 = y;
    }

    void operator--()
    {
        cout << "Value before decrement: " << num2 << endl;
        cout << "After prefix decrement: " << --num2 << endl;
        cout << "After postfix decrement: " << num2-- << endl;
        cout << "New value: " << num2 << endl;
    }
};

int main()
{
    increment o1(10);
    decrement o2(20);

    ++o1;
    --o2;

    return 0;
}