#include<iostream>
using namespace std;

void BinToDec(int bin){
    int n = bin;
    int dec = 0;
    int pow = 1;
    while(n>0)
    {
        int lastdig = n% 10;
        dec += lastdig * pow;
        pow = pow * 2;
        n /= 10;
    }
    cout<< dec<<endl;
}


int main()
{
    BinToDec(10101);
    return 0;
}