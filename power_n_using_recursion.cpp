#include<iostream>
using namespace std;


int pow(int x, int n)
{
    if(n == 0)
    {
        return 1;
    }

    int halfPow = pow(x, n/2);
    int halfSqu = halfPow * halfPow;

    if(n % 2 != 0)
    {
        return x * halfSqu;
    }

    return halfSqu;
}

int main()
{
    cout<<pow(2,10)<<endl;
    return 0;

}