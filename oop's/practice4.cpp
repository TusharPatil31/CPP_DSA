#include<iostream>
#include<string>
using namespace std;

class BankAccount{

int accountNo;

public: 

    void deposit()
    {
        cout<<"depositing...\n";
    }

    void withdraw()
    {
        cout<<"withdrawing...\n";
    }

    void getBal()
    {
        cout<<"Balance:";
    }

    //setter
    void setAccount(int accountNo)
    {
        this->accountNo = accountNo;
    }

    //getter
    void getAccount()
    {
        cout<<accountNo<<endl;
    }
};

int main()
{
    BankAccount b1;
    b1.setAccount(126345);

    b1.getAccount();

    return 0;
}
