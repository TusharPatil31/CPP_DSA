#include<iostream>
#include<string>
using namespace std;

class Example
{
public:
    Example()
    {
        cout<<"Constructor...!\n";
    }

    ~Example()
    {
        cout<<"Destructor...!\n";
    }

};


int main()
{
    int x = 0;

    if(x ==0)
    {
        static Example e1;
    }

    cout<<"Code ending...!\n";

    return 0;
}