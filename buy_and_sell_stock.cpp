// Time complexity for this program O(n)

#include<iostream>
using namespace std;

void maxProfit(int *arr_ptr, int n)
{
    int bestBuy[100000];
    bestBuy[0] = INT_MAX;

    for( int i = 1; i<n; i++)
    {
        bestBuy[i]= min(arr_ptr[i-1],bestBuy[i-1]);
    }

    int maxprofit = 0;
    for (int i = 0; i < n; i++)
    {
        int currProfit = arr_ptr[i]-bestBuy[i];
        maxprofit = max(maxprofit, currProfit);
    }
    //TC = O(n+n) = O(2n) = O(n)
    cout<<"Max Profit is " <<maxprofit<<endl;

}

int main()
{
    int arr[] = {7,4,3,2,1,0};
    int n = sizeof(arr)/sizeof(int);

    maxProfit(arr, n);
    return 0;
}