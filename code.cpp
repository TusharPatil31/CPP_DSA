#include<iostream>
using namespace std;

void BinToDec(int bin){
    int n = bin;
    int dec = 0;
    int pow = 1; // 2^0, 2^1, 2^2...
    while(n>0)
    {
        int lastdig = n% 10;
        dec += lastdig * pow;
        pow = pow * 2;
        n /= 10;
    }
    cout<< dec<<endl;
}

void DectoBin(int bin){
    int n = bin;
    int Bin = 0;
    int pow = 1; //10^0, 10^1, 10^2 ....
    while(n>0)
    {
        int rem = n % 2;
        Bin += rem * pow;
        pow = pow * 10 ;
        n /= 2;
    }
    cout<<Bin<<endl;
}


int main()
{
    BinToDec(10101);
    DectoBin(16);
    return 0;
}