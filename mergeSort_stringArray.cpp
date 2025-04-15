#include <iostream>
#include <string>
#include <vector>
using namespace std;


void merge(string arr[], int si, int mid, int ei)
{
    vector<string> temp_str;
    int i = si;
    int j = mid+1;
    
    while(i <= mid && j <= ei)
    {
        if(arr[i] <= arr[j]){
            temp_str.push_back(arr[i++]);
        }else{
            temp_str.push_back(arr[j++]);
        }
    }
    
    while(i <= mid)
    {
        temp_str.push_back(arr[i++]);
    }
    while(j <= ei)
    {
        temp_str.push_back(arr[j++]);
    }
    
    for(int idx= si, x=0; idx<=ei; idx++)
    {
        arr[idx]= temp_str[x++];
    }
    
}

void mergeSort(string arr[], int si, int ei)
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

void printArray(string arr[], int n)
{
    for(int i=0; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    string str_arr[] = {"sun", "earth","mars","mercury"};
    mergeSort(str_arr, 0, 3);
    printArray(str_arr,4);
    return 0;
    
}