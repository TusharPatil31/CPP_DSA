#include<iostream>
using namespace std;

void print(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int *arr, int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]<arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    print(arr, n);
}

void selectionSort(int *arr, int n)
{
    for(int i =0; i<n-1; i++)
    {
        int minIdx = i;

        for(int j=i+1; j<n-1; j++)
        {
            if(arr[minIdx]<arr[j])
            {
                minIdx = j;
            }
        }
        swap(arr[minIdx], arr[i]);
    }
        print(arr, n);
}

void insertionSort(int *arr, int n)
{
    for(int i =1; i<n; i++)
    {
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]< curr)
        {
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
        arr[prev+1] = curr;
    }
    print(arr, n);
}

void countSort(int *arr, int n)
{
    int freq[10000] = {0};
    int minVal = INT_MAX, maxVal = INT_MIN;

    for(int i =0; i<n; i++)
    {
        freq[arr[i]]++;
        minVal = min(arr[i], minVal);
        maxVal = max(arr[i], maxVal);
    }

    for(int i= maxVal, j =0; i>=minVal; i--)
    {
        while(freq[i]>0)
        {
            arr[j++]=i;
            freq[i]--;
        }
    }
    print(arr, n);
}

int main()
{
    int arr[] = {3,6,2,1,8,7,4,5,3,1};
    int arr_size = sizeof(arr)/sizeof(int);

    countSort(arr,arr_size);

}