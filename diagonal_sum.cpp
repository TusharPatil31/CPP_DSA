#include <iostream>
using namespace std;

void diagonalSum(int arr_ptr[][4], int n){
    int sum =0;

    for(int i=0; i<n; i++)
    {
        sum += arr_ptr[i][i];
        if(i != n-i-1)
        {
            sum += arr_ptr[i][n-i-1];
        }
    }
    cout<<"Sum="<<sum<<endl;
}

int main(){
        int arr[4][4] = {{1,2,3,4},
                        {6,7,8,9},
                        {11,12,13,14},
                        {6,7,8,9}};

        

        diagonalSum(arr, 4);
}