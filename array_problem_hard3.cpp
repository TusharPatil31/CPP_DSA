

// Time complexity for this program O(n)

/*

Given an integer array nums, find a
subarray
that has the largest product, and return the product.

The test cases are generated so that the answer will fit in a 32-bit integer.


This code solves the problem of finding the maximum product of a subarray within a given integer array. Let's break down the logic:
Problem Recap

You are tasked with finding the subarray (contiguous sequence of elements) within an array that produces the largest product when all its elements are multiplied.
Key Observations

    Negative Numbers Complication:
        A negative number multiplied by another negative number becomes positive, so the minimum product (negative) might become the maximum product if a new negative number is encountered.
        This necessitates keeping track of both the maximum and minimum products at each step.

    Zeroes Reset Product:
        If a zero is encountered, it resets the product because multiplying by zero always results in zero.

*/


#include<iostream>
using namespace std;

int hard2(int *arr_ptr, int n)
{
    int maxProd = arr_ptr[0];
    int minProd = arr_ptr[0];
    int ans = maxProd;

    for ( int i = 1; i< n; i++)
    {
        int curr = arr_ptr[i];

        int tempMax = max(curr, max(maxProd*curr, minProd*curr));

        minProd = min(curr, min(maxProd*curr, minProd*curr));

        maxProd = tempMax;
        ans = max(ans, maxProd);

    }

    return ans;
}

int main()
{
    int arr[] = {-2,0,-1};
    int n = sizeof(arr)/sizeof(int);

    cout<<hard2(arr, n)<<endl;
    return 0;
}
