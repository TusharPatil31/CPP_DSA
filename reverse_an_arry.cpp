
/* Reverse an arry with extra space
    Time complexity O(n)
    Space complexity O(n)

*/

// #include<iostream>
// using namespace std;

// void printArr(int *arr_ptr, int n)
// {
//     for(int i = 0; i<n; i++)
//     {
//         cout<<*(arr_ptr+i)<<",";
//     }
//     cout<<endl;
// }

// int main()
// {
//     int arr[] = {5,2,6,7,3,10,27,49,40,55};
//     int n = sizeof(arr)/sizeof(int);

//     int copyArr[n];

//     for(int i = 0; i<n; i++)
//     {
//         copyArr[i] = arr[n-i-1];
//     }
//     for(int i = 0; i<n; i++)
//     {
//         arr[i]=copyArr[i];
//     }

//     printArr(arr, n);
//     return 0;
// }


/* Reverse an arry without extra space(2 pointers)
    Time complexity O(n)
    Space complexity O(n)

*/

#include<iostream>
using namespace std;

void printArr(int *arr_ptr, int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<*(arr_ptr+i)<<",";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {5,2,6,7,3,10,27,49,40,55};
    int n = sizeof(arr)/sizeof(int);

    int start = 0;
    int end = n-1;

    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    printArr(arr, n);
    return 0;
}


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
