#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int i = 1, first=0, sec=1;
    while(i<=n)
    {
        cout<<first<<" ";
        int temp = first;
        first = sec;
        sec += temp;
        i++;
    }

    cout<<endl;
    return 0;
}