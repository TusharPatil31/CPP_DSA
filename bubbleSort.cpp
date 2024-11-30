

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

int bubbleSort(int *arr_ptr, int n)
{
    for( int i=0; i < n-1; i++)
    {
        bool isSwap = false;
        for(int j=0; j < n-i-1; j++)
        {
            if(arr_ptr[j] > arr_ptr[j+1])
            {
                swap(arr_ptr[j], arr_ptr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap)
        {
            cout<<"Array is already sorted."<<endl;
            print(arr_ptr, n); 
            return 1;
        }
    }
    print(arr_ptr, n);
    return 1;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);

    bubbleSort(arr, n);
    return 0;
}
