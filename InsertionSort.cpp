

// Time complexity for this program O(n^2)


#include<iostream>
using namespace std;

void print(int *arr, int n){

    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

void InsertionSort(int *arr_ptr, int n)
{
    for( int i=1; i < n; i++)
    {
        int curr = arr_ptr[i];
        int prev = i-1;
        while(prev >= 0 && arr_ptr[prev]> curr)
        {
            swap(arr_ptr[prev], arr_ptr[prev+1]);
            prev --;

        }
        arr_ptr[prev+1] = curr;
    }
    print(arr_ptr, n);
}

int main()
{
    int arr[] = {4,7,1,9,5};
    int n = sizeof(arr)/sizeof(int);

    InsertionSort(arr, n);
    return 0;
}
