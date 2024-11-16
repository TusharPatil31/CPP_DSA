#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int i = 1;
    int fact = 1;
    while(i<=n)
    {
        fact *= i;
        i++;
    }
    cout<<"Factorial is "<< fact <<endl;

    return 0;
}