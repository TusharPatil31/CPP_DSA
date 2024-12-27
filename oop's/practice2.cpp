#include<iostream>
#include<string>
using namespace std;

class A
{
    public:
        A()
        {
            cout<<"Constructor of A.\n";
        }

        ~A()
        {
            cout<<"Desctructor of A.\n";
        }
};

class B : public A{

    public:
        B()
        {
            cout<<"Constructor of B.\n";
        }

        ~B()
        {
            cout<<"Desctructor of B.\n";
        }

};

int main()
{
    B b1;

    return 0;
}