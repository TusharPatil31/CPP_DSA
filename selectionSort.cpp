

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

int selectionSort(int *arr_ptr, int n)
{
    for( int i=0; i < n-1; i++)
    {
        int midIdx= i;
        for(int j=i+1; j < n; j++)
        {
            if(arr_ptr[j] < arr_ptr[midIdx])
            {
                midIdx= j;
            }
        }
        swap(arr_ptr[midIdx], arr_ptr[i]);
    }
    print(arr_ptr, n);
    return 1;
}

int main()
{
    int arr[] = {4,7,1,9,5,2,6,8,9};
    int n = sizeof(arr)/sizeof(int);

    selectionSort(arr, n);
    return 0;
}