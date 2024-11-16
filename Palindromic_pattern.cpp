/*

        1
       212
      32123
     4321234
    543212345
   65432123456
  7654321234567
 876543212345678
98765432123456789

*/

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
        for(int j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        for(int j=i; j>=1; j--)
        {
            cout<<j;
        }
        for(int j=2; j<=i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}