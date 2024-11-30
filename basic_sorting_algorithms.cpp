

#include<iostream>
using namespace std;

void print(int *arr, int n)
{
    for( int i =0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

void bubbleSort(int *arr_ptr, int n)
{
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++)
        {
            if(arr_ptr[i]<arr_ptr[j]){
                swap(arr_ptr[i],arr_ptr[j]);
            }
        }
    }
    print(arr_ptr,n);
}

void selectionSort(int arr_ptr[], int n)
{
    for(int i = 0; i<n-1; i++){
        int minIdx = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr_ptr[j]>arr_ptr[minIdx])
            {
                minIdx = j;
            }

        }
        swap(arr_ptr[i],arr_ptr[minIdx]);
    }   
    print(arr_ptr,n);
}

void insertionSort(int *arr_ptr, int n)
{
    for(int i = 1; i<n; i++)
    {
        int currVal = arr_ptr[i];
        int prev = i-1;
        while(prev>=0 && arr_ptr[prev]< currVal)
        {
            swap(arr_ptr[prev], arr_ptr[prev+1]);
            prev--;

        }
        arr_ptr[prev+1]=currVal;
    }
    print(arr_ptr,n);
}

void countSort(int *arr_ptr, int n)
{
    int freq[10000]= {0};
    int minVal = INT_MAX, maxVal= INT_MIN;

    for( int i =0; i<n; i++)
    {
        freq[arr_ptr[i]]++;
        minVal = min(arr_ptr[i], minVal);
        maxVal = max(arr_ptr[i], maxVal);
    }
    
    for( int i = maxVal, j=0; i>=minVal; i--)
    {
        while(freq[i]>0)
        {
            arr_ptr[j++]=i;
            freq[i]--;
        }
    }
    print(arr_ptr,n);

}

int main()
{
    int arr[]= {3,6,2,1,8,7,4,5,3,1};
    int n = sizeof(arr)/sizeof(int);

    countSort(arr,n);
}