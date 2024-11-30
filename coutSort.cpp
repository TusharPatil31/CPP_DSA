

// Time complexity for this program O(n*range)


#include<iostream>
using namespace std;

void print(int *arr, int n){

    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

void countSort(int *arr_ptr, int n)
{
    int freq[10000]= {0};
    int minVal = INT_MAX, maxVal = INT_MIN;

    for (int i = 0; i<n ; i++)
    {
        freq[arr_ptr[i]]++;
        minVal = min(minVal, arr_ptr[i]);
        maxVal = max(maxVal, arr_ptr[i]);
    }

    for (int i=minVal, j=0; i<=maxVal; i++)
    {
        while(freq[i]>0)
        {
            arr_ptr[j++]= i;
            freq[i]--;
        }
    }
    print(arr_ptr,n);
}

int main()
{
    int arr[] = {1,4,1,3,2,4,3,7};
    int n = sizeof(arr)/sizeof(int);

    countSort(arr, n);
    return 0;
}
