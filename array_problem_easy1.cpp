// Time complexity for this program O(n^2)

//Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct

#include<iostream>
using namespace std;

int easy(int *arr_ptr, int n)
{

    for( int i = 0 ; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(j == i)
            {
                continue;
            }
            else if(arr_ptr[j]== arr_ptr[i])
            {
                return true;
            }
        }
    }
    return false;

}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(int);

    cout<<easy(arr, n)<<endl;
    return 0;
}
