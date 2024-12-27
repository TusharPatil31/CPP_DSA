#include<iostream>
#include<string>
using namespace std;

class Print{

public:
    void show(int x)
    {
        cout<<"Int: "<<x<<endl;
    }

    void show(string str)
    {
        cout<<"Str: "<<str<<endl;
    }

};

int main()
{
    Print obj1;

    obj1.show(7);
    obj1.show("Moral");
    
    return 0;

}