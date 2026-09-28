#include<iostream>
using namespace std;

// Saving account
class savingacc
{
private:
    string acchold_name;
    int acc_no;
    double balance;
    float interest_r;

public:
    savingacc(string name, int no, double m, float r)
    {
        acchold_name = name;
        acc_no = no;
        balance = m;
        interest_r = r;
    }

    void deposit(double money)
    {
        if (money > 0)
        {
            balance += money;
            cout << "Deposited : " << money << " rupees" << endl;
        }
    }

    void withdraw(double amount)
    {
        cout << "Amount to withdraw : " << amount << " rupees" << endl;

        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << amount << " rupees Withdrawn successfully" << endl;
        }
        else
        {
            cout << "Insufficient balance :)" << endl;
        }
    }

    void applyinterest()
    {
        double interest = balance * interest_r / 100;
        balance += interest;

        cout << "Interest applied : " << interest << " rupees" << endl;
    }

    void display()
    {
        cout << "SAVINGS ACCOUNT" << endl;
        cout << "Account holder name : " << acchold_name << endl;
        cout << "Account number : " << acc_no << endl;
        cout << "Bank Balance : " << balance << " rupees" << endl;
        cout << "Interest rate : " << interest_r << " %" << endl;
    }
};


// Checking account
class checkingacc
{
private:
    string acchold_name;
    int acc_no;
    double balance;
    float transac_fee;

public:
    // Fixed constructor name
    checkingacc(string name, int no, double m, float f)
    {
        acchold_name = name;
        acc_no = no;
        balance = m;
        transac_fee = f;
    }

    void deposit(double money)
    {
        if (money > 0)
        {
            balance += money;
            cout << "Deposited : " << money << " rupees" << endl;
        }
    }

    void withdraw(double amount)
    {
        cout << "Amount to withdraw : " << amount << " rupees" << endl;

        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << amount << " rupees Withdrawn successfully" << endl;
        }
        else
        {
            cout << "Insufficient balance :)" << endl;
        }
    }

    void transaction_f(int n)
    {
        cout << "No. of transactions carried out up to date : "
             << n << endl;

        if (n < 10)
        {
            cout << "No transaction fee applied" << endl;
        }
        else
        {
            // Fixed variable name
            cout << "Transaction fee applied : "
                 << transac_fee << " rupees" << endl;
        }
    }

    void display()
    {
        cout << "CHECKING ACCOUNT" << endl;
        cout << "Account holder name : " << acchold_name << endl;
        cout << "Account number : " << acc_no << endl;
        cout << "Bank Balance : " << balance << " rupees" << endl;
        cout << "Transaction fee : " << transac_fee << " rupees" << endl;
    }
};


// Main function
int main()
{
    savingacc s("Alice", 2025, 40000, 7.5);

    s.display();
    s.deposit(25000);
    s.withdraw(20000);
    s.applyinterest();

   


    cout << endl << endl;

    checkingacc c("SAKSHI", 2006, 49000, 8.6);

    c.display();
    c.deposit(26000);
    c.withdraw(15000);
    c.transaction_f(8);


    return 0;
}

/*
SAVINGS ACCOUNT
Account holder name : Alice
Account number : 2025
Bank Balance : 40000 rupees
Interest rate : 7.5 %
Deposited : 25000 rupees
Amount to withdraw : 20000 rupees
20000 rupees Withdrawn successfully
Interest applied : 3375 rupees


CHECKING ACCOUNT
Account holder name : SAKSHI
Account number : 2006
Bank Balance : 49000 rupees
Transaction fee : 8.6 rupees
Deposited : 26000 rupees
Amount to withdraw : 15000 rupees
15000 rupees Withdrawn successfully
No. of transactions carried out up to date : 8
No transaction fee applied*/
