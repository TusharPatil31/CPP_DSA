#include<iostream>
using namespace std;

int frienfPairing(int n)
{
    if(n==1 || n==2)
    {
        return n;
    }

    return frienfPairing(n-1) + ((n-1)*frienfPairing(n-2));
}

int main()
{

    cout<<frienfPairing(4)<<endl;
    return 0;
}