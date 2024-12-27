#include<iostream>
#include<string>
using namespace std;

class Parent{

public: 
    void show()
    {
        cout<<"Parent class show.\n";

    }

    virtual void hello()
    {
        cout<<"Parent hello\n";
    }

};

class Child : public Parent {

public: 
    void show()
    {
        cout<<"Child class show.\n";
    }

    void hello()
    {
        cout<<"Child hello\n";
    }
};

int main()
{
    Child c1;
    Parent *ptr;

    ptr = &c1;

    ptr->hello();
    
    return 0;
}