

#include<iostream>
using namespace std;


void rotate_array_90_degree(int arr[][4], int m, int n)
{
    
    for (int j=0; j<(n/2); j++){
        int x=n-1-j;
        int y=m-1-j;
        for(int i=0+j; i<n-1-j; i++)
        {
            int temp = arr[j][i];
            arr[j][i] = arr[y][j];
            arr[y][j] = arr[x][y];
            arr[x][y] = arr[i][x];
            arr[i][x] = temp;
            cout<<"y : "<<y<<" x : "<<x<<" j :"<<j<<" i :"<<i<<endl;
            y--;
        }
        cout<<endl;
    }

    // cout<<y<<endl;
    for( int i =0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main()
{
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    rotate_array_90_degree(arr,4,4);
}
