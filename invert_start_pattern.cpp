#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*"<<" ";
        }
            cout<<endl;
    }

    return 0;
}

/*  another solution */

// #include<iostream>
// #include<cmath>
// using namespace std;

// int main()
// {

//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=1; i<=n; i++)
//     {
//         for(int j=1; j<=(n-i+1); j++)
//         {
//             cout<<"*"<<" ";

//         }
//             cout<<endl;
//     }

//     return 0;
// }