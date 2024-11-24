// Time complexity for this program O(n)

#include<iostream>
using namespace std;

int trapWater(int *arr_ptr, int n)
{
    int leftMax[20000], rightMax[20000];
    leftMax[0] = arr_ptr[0];
    rightMax[n-1] = arr_ptr[n-1];

    for (int i = 1; i<n; i++)
    {
        leftMax[i] = max(leftMax[i-1], arr_ptr[i-1]);
    }

    for (int i = n-2; i>=0; i--)
    {
        rightMax[i] = max(rightMax[i+1], arr_ptr[i+1]);
    }

    int trappedWater = 0;

    for(int i =0; i<n; i++)
    {
        int currWater = (min(leftMax[i], rightMax[i])) - arr_ptr[i];
        if (currWater>0)
        {
            trappedWater += currWater;
        }
    }

    //TC = O(n+n+n) = O(3n) = O(n)
    cout<<"Total trapped water is " <<trappedWater<<endl;

    return trappedWater;

}

int main()
{
    int arr[] = {4,2,0,6,3,2,5};
    int n = sizeof(arr)/sizeof(int);

    trapWater(arr, n);
    return 0;
}