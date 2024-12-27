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

        Car(Car &original)
        {
            cout<<"Copying original to new....!\n";
            name = original.name;
            color = original.color;
            mileage = new int ; // Deep copy 
            *mileage = *original.mileage; // Deep copy
        }
        
        //Destructor
        ~Car()
        {
            cout<<"Object deleting...\n";
            if(mileage != NULL)
            {
                delete mileage;
                mileage = NULL;
            }
        }
};


int main()
{
    Car c1("Porsha", "Black");

    cout<<c1.name<<endl;
    cout<<c1.color<<endl;
    cout<<*c1.mileage<<endl;

    return 0;

}