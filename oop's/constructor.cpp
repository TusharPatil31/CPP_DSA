#include<iostream>
#include<string>
using namespace std;

class Car{
    string name;
    string color;
public:
    //default constructor
    Car()
    {
        cout<<"Constructor without parameters"<<endl;
    }

    // parameterised constructor
    Car(string name, string color)
    {
        cout<<"Constructor with parameters"<<endl;
        this->name = name;
        this->color = color;
    }

    void start()
    {
        cout<<"Car has started.\n";
    }

    void stop()
    {
        cout<<"Car has stopped.\n";
    }
    //Getter
    string getName()
    {
        return name;
    }

};

int main()
{
    Car c0;
    Car c1("Porsha", "black");

    cout<<c1.getName()<<endl;
    return 0;
}