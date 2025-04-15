#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void merge(int arr[], int si, int mid, int ei)
{
    vector<int> temp;
    int i = si;
    int j = mid+1;
    
    while(i <= mid && j <= ei)
    {
        if(arr[i] >= arr[j]) // increaing and decreaing order
        {
            temp.push_back(arr[i++]);
        }else {
            temp.push_back(arr[j++]);
        }
    }
    
    while(i <= mid){
        temp.push_back(arr[i++]);
    }
    
    while(j <= ei){
        temp.push_back(arr[j++]);
    }
    
    for(int idx= si, x=0; idx<=ei; idx++)
    {
        arr[idx]= temp[x++];
    }
}

void mergeSort(int arr[], int si, int ei)
{
    if(si>=ei)
    {
        return;
    }
    
    int mid = si+(ei-si)/2;
    mergeSort(arr, si, mid);
    mergeSort(arr, mid+1, ei);
    
    merge(arr, si, mid, ei);
}

void printArray(int arr[], int n)
{
    for(int i=0; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[6] = {2,4,3,8,5,1};
    int n = sizeof(arr)/sizeof(int);
    
    mergeSort(arr, 0 , n-1);
    printArray(arr, n);
    
    return  0;
}