#include <iostream>
#include <iomanip>
using namespace std;


class Account
{
    string dep_name;
    int number;
    string type;
    double balance;



public:
    Account(string na,int n, string t, double b)
    {
        cout << fixed <<  setprecision(2);
        dep_name=na;
        number=n;
        type=t;
        balance=b;
    }
    void deposit(double n)
    {
        balance+=n;
        cout << "Successfully deposited " << n <<" dollars." << endl;
    }
    void withdraw(double n)
    {
        if(balance>=n)
        {
            balance-=n;
            cout <<"Successfully withdrew " << n<< " dollars." << endl;
        }else
        {
            cout << "Insufficient funds in account";
        }
    }
    void display()
    {
        cout << "Owner name: " << dep_name << endl;
        cout << "Balance: "  << balance << " dollars" << endl;
    }
};

int main()
{
    Account acc1("Adrian Klessa", 123456789, "premium",24329.27);
    acc1.display();
    acc1.deposit(50);
    acc1.withdraw(100);
    acc1.display();


    return 0;
}
