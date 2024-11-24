

#include<iostream>
using namespace std;

int BinSearch(int *arr_ptr, int n, int key)
{
    int st = 0, end = n-1;

    while(st <= end){
        int mid = (st+end)/2;

        if(arr_ptr[mid]==key)
        {
            return mid;
        }else if(arr_ptr[mid]< key)
        {
            st = mid+1;
        }else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(int);

    cout<<BinSearch(arr, n, 11)<<endl;
    return 0;
}




