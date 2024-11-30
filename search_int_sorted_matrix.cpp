
#include<iostream>
using namespace std;

bool bruteforce(int arr_ptr[][4], int n, int m, int key)
{
    // TC = O(n*m)
    for(int i = 0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if (arr_ptr[i][j]==key)
            {
                cout<<"Found Key in idex of ("<<i<<","<<j<<")\n";
                return true;
            }
        }
    }
    cout<<"Key is not found"<<endl;
    return false;
}

bool binarySearch(int arr_ptr[][4], int n, int m, int key)
{
    //array needs to be sorted either row wise or col wise
    //TC = O(n*logn)
    for(int i = 0; i<n; i++)
    {
        int start = 0, end = m-1;
        while(start<=end){
            int mid = (start+end)/2;

            if(arr_ptr[i][mid]==key)
            {
                cout<<"Found Key in idex of ("<<i<<","<<mid<<")\n";
                return true;
            }else if(arr_ptr[i][mid]>key)
            {
                end = mid-1;
            }else{
                start = mid+1;
            }
        }

    }

    cout<<"Key is not found"<<endl;
    return false;
}

bool staircaseSearch(int arr_ptr[][4], int n, int m, int key)
{
    //to use this approch matrix should be sorted both the way like row and col
    // TC = O(n+m)

    /* 
    int i = 0, j = m-1;
    while(i<n && j>=0)
    {
        if(arr_ptr[i][j]==key)
        {
            cout<<"Found Key in idex of ("<<i<<","<<j<<")\n";
            return true;
        }else if(arr_ptr[i][j]>key)
        {
            j--;
        }else
        {
            i++;
        }
    }
    cout<<"Key is not found"<<endl;
    return false; 
    */

    int i = n-1, j = 0;
    while(i>=0 && j<m)
    {
        if(arr_ptr[i][j]==key)
        {
            cout<<"Found Key in idex of ("<<i<<","<<j<<")\n";
            return true;
        }else if(arr_ptr[i][j]>key)
        {
            i--;
        }else
        {
            j++;
        }
    }
    cout<<"Key is not found"<<endl;
    return false; 
}

int main()
{
    int arr[4][4] = {{10,20,30,40},
                    {15,25,35,45},
                    {27,29,37,48},
                    {32,33,39,50}};

    staircaseSearch(arr, 4, 4, 33);
}