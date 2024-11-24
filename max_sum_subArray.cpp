// Time complexity for this program O(n^3)


// #include<iostream>
// using namespace std;

// void printSubarray(int *arr_ptr, int n)
// {
//      int maxSum = INT_MIN;

//     for(int start= 0; start<n; start ++)   // tc = n
//     {
//         for(int end = start ; end<n; end++)   // tc = n
//         {
//             int currMax = 0;
//             for (int i=start; i<=end; i++)   // tc = n
//             {
//                 currMax += arr_ptr[i];
//             }
//             maxSum = max(maxSum, currMax);

//         }
//     }
//     cout<<"Max sum of subArray: "<< maxSum<<endl;

// }

// int main()
// {
//     int arr[] = {2,-3,6,-5,4,2};
//     int n = sizeof(arr)/sizeof(int);

//     printSubarray(arr, n);
//     return 0;
// }




/*  Slightly optimized O(n^2)*/

#include<iostream>
using namespace std;

void printSubarray(int *arr_ptr, int n)
{
     int maxSum = INT_MIN;

    for(int start= 0; start<n; start ++)   // tc = n
    {
        int currMax = 0;
        for(int end = start ; end<n; end++)   // tc = n
        {
            currMax += arr_ptr[end];
            maxSum = max(maxSum, currMax);

        }
    }
    cout<<"Max sum of subArray: "<< maxSum<<endl;

}

int main()
{
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);

    printSubarray(arr, n);
    return 0;
}