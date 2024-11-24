#include<iostream>
using namespace std;

int LinerSearch(int *arr_ptr, int n, int key){

    for( int i = 0; i<n; i++)
    {
        if (arr_ptr[i]== key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {5,2,6,7,3,10,27,49,40,55};
    int n = sizeof(arr)/sizeof(int);

    cout<<LinerSearch(arr, n, 90)<<endl;

    return 0;
}