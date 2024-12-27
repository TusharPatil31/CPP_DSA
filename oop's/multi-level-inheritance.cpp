#include<iostream>
#include<string>
using namespace std;

class Animal{
public:
    string color;

        void eat()
        {
            cout<<"eats...\n";
        }
        
        void breathe()
        {
            cout<<"breathes...\n";
        }
};

class Mammal: public Animal{
public:
    string bloodType;

    Mammal()
    {
        bloodType = "warm";
    }

};

class Dog : public Mammal{
public:
    void tailWag()
    {
        cout<<"A Dog wags its tail\n";
    }
};



int main()
{

    Dog d1;

    d1.eat();
    d1.breathe();
    cout <<d1.bloodType<<endl;
    d1.tailWag();
    return 0;
}