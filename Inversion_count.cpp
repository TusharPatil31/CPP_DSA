#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int merge(int arr[], int left, int mid, int right)
{
    vector<int> temp;
    int InvCount = 0;
    int i = left;
    int j = mid+1;
    
    while(i <= mid && j <= right)
    {
        if(arr[i] <= arr[j])
        {
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
            InvCount +=(mid-i+1);   
        }
    }
    
    while(i <= mid )
    {
        temp.push_back(arr[i++]);
    }
    
    while( j <= right)
    {
        temp.push_back(arr[j++]);
    }
    
    for(int idx =left, x =0; idx<=right ; idx++)
    {
        arr[idx] = temp[x++];
    }
    
    return InvCount;
}

int mergeSort(int arr[], int left, int right)
{
    int InvCnt = 0;
    
    if(right>left){
        int mid = (left +right)/2;
        InvCnt +=mergeSort(arr, left, mid);
        InvCnt +=mergeSort(arr, mid+1, right);
        
        InvCnt +=merge(arr, left, mid, right);
    }
    return InvCnt;
}

int getInversionCount(int arr[], int n)
{
    return mergeSort(arr, 0, n-1);
}

int main()
{
    int arr [] = {2,4,1,3,5};
    int n = sizeof(arr)/sizeof(int);
    
    cout<<"Inversion Count : "<<getInversionCount(arr,n)<<endl;
    return 0;
}