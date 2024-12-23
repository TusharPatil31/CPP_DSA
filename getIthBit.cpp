#include<iostream>
using namespace std;

int getIthBit(int num, int i)
{
    int bitmask = 1<< i;
    if(num & bitmask)
    {
        return 1;
    }
    return 0;

}

int setIthBit(int num, int i)
{
    int bitmask = 1 << i;

    return (num | bitmask);
}

int clearIthBit(int num, int i)
{
    int bitmask = ~(1 << i);
    return (num & bitmask);
}

bool isPowerOf2(int num)
{
    if(!(num&(num-1)))
    {
        return true;
    }else{
        return false;
    }
}

int updateIthBit(int num, int i, int val)
{
    num = num & ~(1 << i);  //clear ith bit

    num = num | (val << i);

    return num;
}

void clearIbits(int num, int i)
{
    int bitmask = ~0 << i;
    cout<<(num&bitmask)<<endl;    
}

int coutSetBits(int num)
{
    int count = 0;

    while(num > 0)
    {
        int lastDig = num & 1;
        count += lastDig;

        num = num >> 1;
    }
    return count;
}

void fastExpo(int x, int n)
{
    int ans = 1;

    while(n>0)
    {
        int lastDig = n & 1;
        if (lastDig){
            ans = ans * x;
        }
        x = x * x;
        n = n >> 1;
    }

    cout<<ans<<endl; 
}

void question1(int num , int i, int j)
{

    //write function clear the range of bits from i to j in a given number
    int bitmask = ~0 << (j+1);
    num = num & bitmask;
    int bitmask2= ~(~0 << i);
    cout<<(num | bitmask2)<<endl;
}

void singleNumber(int *arr, int n)
{

    /*Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
    You must implement a solution with a linear runtime complexity and use only constant extra space.*/

    int ans = 0;
    for(int i = 0; i<n; i++)
    {
        ans = ans ^ arr[i];
        cout<<ans<<endl;
    }
    cout<<ans<<endl;
}

void xorBeauty(int *arr, int n)
{
    int a =0, b =0;
    for(int i =0; i<n; i++)
    {
        a = a | arr[i];
        b = b ^ arr[i];
    }
    cout<<(a&b)<<endl;
}

int main()
{
    // cout<<getIthBit(3,4)<<endl;
    // cout<<setIthBit(3,2)<<endl;
    // cout<<clearIthBit(6,1)<<endl;
    // cout<<isPowerOf2(28)<<endl;
    // cout<<updateIthBit(7,3,1)<<endl;
    // cout<<updateIthBit(7,2,0)<<endl;

    // clearIbits(15,2);

    // cout<<coutSetBits(7)<<endl;

    // fastExpo(3,5);
    // question1(15,2,3);

    int arr[10] = {15,45,20,2,34,35,5,44,32,30};

    xorBeauty(arr, 10);


    return 0;
}