#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    int n;
    cout<<"Enter a number: ";
    cin>>n;
    char ch = 'A';
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<ch++;

        }
            cout<<endl;
    }

    return 0;
}