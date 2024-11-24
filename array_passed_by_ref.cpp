#include<iostream>
using namespace std;

void printArr(int arr_ptr[], int n){

    for( int i =0; i<n; i++)
    {
        cout<<arr_ptr[i]<<",";  // or cout<<*(arr_ptr+i)<<endl;
    }
    cout<<endl;
}

int main()
{
    int arr[] = {5,2,6,7,3};
    int n = sizeof(arr)/sizeof(int);

    printArr(arr,n);
    return 0;
}