#include <iostream>
#include <string>
using namespace std;


int rotatedArray(int arr[], int si, int ei, int target)
{
    if(si>ei)
    {
        return -1;
    }
    
    int mid = si+(ei-si)/2;
    if(arr[mid] == target)
    {
        return mid;
    }
    if(arr[si] < arr[mid])
    {
        if(arr[si] <=target && target < arr[mid])
        {
            return rotatedArray(arr,si,mid-1,target);
        }else{
            return rotatedArray(arr,mid+1,ei,target);
        }
    }else
    {
        if(arr[mid] < target && target <=arr[ei]){
            return rotatedArray(arr,mid+1,ei,target); 
        }else
        {
            return rotatedArray(arr,si,mid-1,target);
        }
    }
    return -1;
}

int main()
{
    int arr[] = {4,5,6,7,0,1,2,3};
    cout<<rotatedArray(arr,0,7,7)<<endl;
}