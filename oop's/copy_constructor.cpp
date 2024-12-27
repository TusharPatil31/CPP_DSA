#include<iostream>
#include<string>
using namespace std;

class Car {
    public:
        string name;
        string color;
        int *mileage;

        Car(string name, string color)
        {
            this->name = name;
            this->color = color;
            mileage = new int; //dynamic allocation
            *mileage = 12;

        }
        //copy constructor it will called implicitly but we can create our own customised copy constructor 
        //when we create customised copy constructor that will be called
        //cutomised copy construtor 

        Car(Car &original)
        {
            cout<<"Copying original to new....!\n";
            name = original.name;
            color = original.color;
            mileage = new int ; // Deep copy 
            *mileage = *original.mileage; // Deep copy
        }

};


int main()
{
    Car c1("Porsha", "Black");

    Car c2(c1);

    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    cout<<*c2.mileage<<endl;
    *c2.mileage = 10;

    cout<<*c1.mileage<<endl;
    cout<<*c2.mileage<<endl;


    return 0;

}