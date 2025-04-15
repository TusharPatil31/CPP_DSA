#include<iostream>
#include<string>
using namespace std;

long int MOD = 1e9 + 7;

long long power(long long a, long long b)
{
    if(b == 0)
    {
        return 1;
    }

    long long half_power = power(a,b/2);
    cout<<"half power: "<<half_power<<endl;
    cout<<"b: "<<b<<endl;
    if(b%2 == 0)
    {
        // cout<<"IF "<<(half_power*half_power % MOD)<<endl;
        return half_power*half_power % MOD;
    }else
    {   
        // cout<<"ELSE "<<(half_power*half_power % MOD * (a % MOD) % MOD)<<endl;
        return half_power*half_power % MOD * (a % MOD) % MOD;
    }
}

int coutGoodNum(long long n)
{
    long long ed;
    long long od;

    if(n&1)
    {
        od = n/2;
        ed =(n+1)/2;

    }else
    {
        od = n/2;

        ed = n/2;

    }
    cout<<"od: "<<od<<endl;
    cout<<"ed: "<<ed<<endl;

    return ((power(5,ed)% MOD)*(power(4,od)% MOD))%MOD;
}

int main()
{
    cout<<coutGoodNum(3)<<endl;

    return 0;
}