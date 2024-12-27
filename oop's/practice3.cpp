#include<iostream>
#include<string>
using namespace std;

class Complex{

public:
    int real;
    int img;

    Complex(int r, int i)
    {
        real = r;
        img = i;
    }

    void show()
    {
        cout<<real<<"-"<<img<<"i\n";
    }

    Complex operator -(Complex &obj)
    {
        int resReal = this->real - obj.real;
        int resImg = this->img - obj.img;
        Complex c3(resReal, resImg);

        return c3;
    }

};

int main()
{
    Complex c1(3,4);
    Complex c2(1,2);

    c1.show();
    c2.show();

    Complex c3 = c1-c2;

    c3.show();

    return 0;
}
