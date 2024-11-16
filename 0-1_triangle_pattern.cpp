/*
1
01
101
0101
10101
010101
1010101
01010101
101010101
0101010101
*/


// #include<iostream>
// #include<cmath>
// using namespace std;

// int main()
// {

//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;

//     //upper half
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j=i; j>=1; j--)
//         {
//             if(j%2==0){
//                 cout<<"0";
//             }
//             else{
//                 cout<<"1";
//             }
//         }
//         cout<<endl;
//     }

//     return 0;
// }


//Another solution

#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    bool val = true;
    //upper half
    for(int i = 1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<val;
            val = !val;
        }
        cout<<endl;
    }

    return 0;
}
