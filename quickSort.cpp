#include <algorithm>
#include <iostream>
using namespace std;

static int num = 1;


void printArray(int arr[], int n)
{
    for(int i=0; i<n ; i++)
    {
        cout<<arr[i]<<"";
    }
    cout<<endl;
}

int partition(int arr[], int si, int ei)
{
    int i = si-1;
    int pivot = arr[ei];
    
    for(int j= si; j < ei; j++)
    {
        if(arr[j] <= pivot){
            i++;
            swap(arr[i], arr[j]);
            // cout<<num++<<": "<<arr[i]<<" "<<arr[j]<<endl;
            // printArray(arr, 5);   
        }
    }
    i++;
    swap(arr[i],arr[ei]);
    // cout<<num++<<": "<<arr[i]<<" "<<arr[ei]<<endl;
    // printArray(arr, 5);
    // cout<<num++<<": "<<i<<"----------------"<<endl;    
    return i;
}

void quickSort(int arr[], int si , int ei)
{
    
    if(si>= ei)
    {
        return;
    }
    int pivotIdx = partition(arr, si, ei);
    quickSort(arr, si, pivotIdx-1);
    quickSort(arr, pivotIdx+1, ei);
}

int main()
{
    int arr[] = {2,4,1,3,5};
    int n = sizeof(arr)/sizeof(int);
    
    quickSort(arr, 0 , n-1);
    printArray(arr, n);
    
}