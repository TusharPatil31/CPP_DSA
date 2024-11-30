

#include<iostream>
using namespace std;


/* 
print the number of all 7's that are int the 2d array
*/
void matrix(int ptr[][3], int n, int m)
{
    int cnt = 0;
    for(int i =0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(ptr[i][j]==7)
            {
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}


// print out the sum of the numbers is the second row of the "nums" array
void sum_of_sec_row(int ptr[][3], int n, int m)
{   
    int sum =0;
    for(int i=0; i<m; i++)
    {
        sum += ptr[1][i];
    }
    cout<<sum<<endl;
}


//find transpose of a matrix
//Transpose of a matrix is the process of swappong the rows to columns
void transpose_matrix(char ch[][3], int n, int m)
{
    char transpose[m][n];
    for(int i=0; i<m; i++)
    {
        for( int j=0; j<n; j++)
        {
            transpose[i][j]=ch[j][i];
            // cout<<ch[j][i]<<" ";
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int arr[2][3] = {{4,7,8},{8,8,7}};
    int arr1[3][3] = {{1,4,9},{11,4,3},{2,2,3}};
    char ch[2][3]= {{'A','B','C'},{'X','Y','Z'}};
    
    // matrix(arr, 2,3);
    // sum_of_sec_row(arr1, 3, 3);
    transpose_matrix(ch, 2, 3);
}