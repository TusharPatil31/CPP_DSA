#include<iostream>
using namespace std;

int binSearch(int arr[], int key, int start, int end)
{   
    if(start>end)
    {
        return -1;
    }

    int midIdx = start +(end -start)/2;
    if(arr[midIdx] == key)
    {   
        return midIdx;
        
    }else if(arr[midIdx] > key)
    {
        return binSearch(arr, key, start, midIdx-1);
    }else{
        return binSearch(arr, key, midIdx+1, end);
    }
}


int main()
{
    int arr[] = {1,2,3,4,5,6,7};

    cout<<binSearch(arr,5,0,6)<<endl;
    return 0;
}