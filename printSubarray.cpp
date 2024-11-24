// Time complexity for this program O(n^3)


#include<iostream>
using namespace std;

void printSubarray(int *arr_ptr, int n)
{
    for(int start= 0; start<n; start ++)   // tc = n
    {
        for(int end = start ; end<n; end++)   // tc = n
        {
            // cout<<"("<<start<<","<<end<<")"<<" ";   // start and end index
            for (int i=start; i<=end; i++)   // tc = n
            {
                cout<<arr_ptr[i];
            }
            cout<<" ";

        }
        cout <<endl;
    }

}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    printSubarray(arr, n);
    return 0;
}
