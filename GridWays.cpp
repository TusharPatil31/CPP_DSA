#include <iostream>
#include <string>
#include <vector>
using namespace std;


int ways(int row, int col, int n, int m, string ans)
{
    //Base case 1
    if(row == n-1 && col == m-1)
    {
        cout<<ans<<endl;
        return 1;
    }
    // Base case 2
    if(row >= n || col >= m)
    {
        return 0;
    }
    
    //right
    int val1 = ways(row, col+1, n, m, ans+"R");
    
    //down
    int val2 = ways(row+1, col, n, m, ans+"D");
    
    return val1+val2;
}


int main()
{
    int n =4, m =4;
    string str = "";
    
    cout<<ways(0,0,n,m,str)<<endl;
}