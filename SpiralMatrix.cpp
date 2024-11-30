




#include<iostream>
using namespace std;


void SpiralMatrix(int arr_ptr[][5], int n, int m)
{
    int srow = 0, erow = n-1;
    int scol= 0, ecol = m-1;

    while(srow <= erow && scol<= ecol)
    {

        //Top
        for(int i = scol; i<=ecol; i++)
        {
            cout<<arr_ptr[srow][i]<<" ";
        }

        //Right
        for(int j = srow+1; j<=erow; j++ )
        {
            cout<<arr_ptr[j][ecol]<<" ";
        }

        //Bottom
        for(int i = ecol-1; i>=scol; i-- )
        {
            if(srow==erow)
            {
                break;
            }
            cout<<arr_ptr[erow][i]<<" ";
        }

        //Left
        for(int j = erow-1; j>=srow+1; j-- )
        {
            if(scol==ecol)
            {
                break;
            }
            cout<<arr_ptr[j][scol]<<" ";
        }

        srow++; scol++;
        erow--; ecol--;

    }
    cout<<endl;
}

int main()
{
    int arr[3][5] = {{1,2,3,4,5},
                    {6,7,8,9,10},
                    {11,12,13,14,15}};

    SpiralMatrix(arr,3,5);
}
