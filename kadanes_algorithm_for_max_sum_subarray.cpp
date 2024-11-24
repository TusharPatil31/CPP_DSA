// Time complexity for this program O(n)

#include<iostream>
using namespace std;

void printSubarray(int *arr_ptr, int n)
{
    int currSum = 0;
     int maxSum = INT_MIN;

    for(int i= 0; i<n; i ++)   // tc = n
    {
        currSum += arr_ptr[i];
        maxSum = max(maxSum, currSum);
        if (currSum< 0)
        {
            currSum = 0;
        }

    }
    cout<<"Max sum of subArray: "<< maxSum<<endl;

}

int main()
{
    int arr[] = {-2,-3,-6,-5,-4,-2};
    int n = sizeof(arr)/sizeof(int);

    printSubarray(arr, n);
    return 0;
}