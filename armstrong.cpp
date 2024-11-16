#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int Armstrong = n;
    int sum = 0; 
    while(n>0)
    {
        sum += ((n%10)*(n%10)*(n%10));
        n = n/10;

    }

    if(sum == Armstrong)
    {
        cout<<"Armstrong Number"<<endl;
    }else{
        cout<<"Not a Armstrong Number"<<endl;
    }
    return 0;
}