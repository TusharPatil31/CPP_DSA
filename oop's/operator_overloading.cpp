#include<iostream>
#include<string>
using namespace std;

class Complex{

public:
    int real; 
    int img;
    Complex(int r, int i )
    {
        real = r;
        img = i;
    }

    void show()
    {
        cout<<real<<"+"<<img<<"i\n";
    }

    Complex operator +(Complex &c2){
        int resReal = this->real + c2.real;
        int resImg = this->img + c2.img;
        Complex c3(resReal, resImg);
        return c3;
    }
};

int main()
{
    Complex c1(1,2);
    Complex c2(3,4);

    c1.show();
    c2.show();

    Complex c3 = c1+c2;
    c3.show();
    
    return 0;

}