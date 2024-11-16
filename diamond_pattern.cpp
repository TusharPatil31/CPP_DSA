#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    //upper half
    for(int i = 1; i<=n; i++)
    {
        //spaces
        for(int j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        //stars
        for (int j = 1; j<=(2*i-1); j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    //lower half
    for(int i=n; i>=1; i--)
    {
        //spaces
        for (int j = 1; j<=n-i; j++)
        {
            cout<<" ";
        }
        
        //stars
        for(int j=1; j<=(2*i-1); j++)
        {
            cout<<"*";
        }

        cout<<endl;

    }

    return 0;
}