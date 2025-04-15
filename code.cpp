#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;

void oddEven(int num)
{
    if(!(num&1))
    {
        cout<<"Even"<<endl;
    }else
    {
        cout<<"Odd"<<endl;
    }
}

int getIthBit(int num, int i)
{
    int bitmask = 1<<i;

    if(!(num & bitmask))
    {
        return 0;
    }else
    {
        return 1;
    }
}

int setIthBit(int num, int i)
{
    int bitmask = 1<<i;

    return (num|bitmask);
}

int clearIthBit(int num, int i)
{
    int bitmask = ~(1<<i);

    return (num & bitmask);
}

bool isPowerOf2(int num)
{
    if(!(num &(num-1)))
    {
        return true;
    }else{
        return false;
    }
}

void updateIthBit(int num, int pos, int i)
{
    num = num & ~(1<<pos);

    num = num | (i<<pos);

    cout<<num<<endl;
}

void clearLastIthbit(int num, int i)
{
    int bitmask = ~(0)<<i;

    num = num & bitmask;

    cout<<num<<endl;
}

void countSetBits(int num)
{
    int count = 0;

    while(num>0)
    {
        int lastdig = num & 1;

        count += lastdig;

        num = num >> 1;
    }

    cout<<count<<endl;
}

void fastExpo(int x, int n)
{
    int ans = 1;

    while(n>0)
    {
        int lastdig = n & 1;

        if(lastdig)
        {
            ans = ans * x;
        }

        x  = x * x;
        n = n >> 1;
    }

    cout<<ans<<endl;
}

void clearRangeBits(int num, int i, int j)
{
    for(int idx=i; idx<=j; idx++)
    {
        int bitmask = 1<<idx;
        num = num ^ bitmask;
    }
    cout<<num<<endl;
}

void divideTwoInt(int dividend, int divisor)
{
    int qoutient = 0;
    int power = 0;
    int ans =0;
    while(ans>dividend)
    {
        int pow_of_2 = pow(2,power);
        ans = divisor * pow_of_2;
        if(ans <= dividend ){
            qoutient += pow_of_2;
        }
        power++;
    }
    cout<<qoutient<<endl;

}
int main()
{   
    divideTwoInt(10,3);

    cout<<(3<<(2 ^ 0))<<endl;
    return 0;
}