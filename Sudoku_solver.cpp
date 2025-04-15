#include <iostream>
#include <string>
using namespace std;

void printArray(int arr[9][9])
{
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;
    }
}

bool isSafe(int arr[9][9], int row, int col, int digit)
{
    //vertical
    for(int idx=0; idx<9; idx++)
    {
        if(arr[idx][col] == digit)
        {
            return false;
        }
    }
    
    //Horizontal
    for(int idx=0; idx<9; idx++)
    {
        if(arr[row][idx] == digit)
        {
            return false;
        }
    }
    
    
    //For Grid 3x3
    int startRow = (row/3)*3;
    int startCol = (col/3)*3;
    
    for(int i=startRow; i<=startRow+2; i++)
    {
        for(int j=startCol; j<=startCol+2; j++)
        {
            if(arr[i][j] == digit)
            {
                return false;
            }
        }
    }
    return true;
}

bool sudokuSolver(int arr[9][9], int row, int col)
{
    if(row == 9)
    {
        //sudoku solved
        printArray(arr);
        return true;
    }
    
    int nextRow = row;
    int nextCol = col+1;
    if(nextCol==9){
        nextRow = row+1;
        nextCol = 0;
    }
    
    if(arr[row][col]!=0){
        return sudokuSolver(arr, nextRow, nextCol);
    }
    
    for(int digit=1; digit<=9; digit++)
    {
        if(isSafe(arr, row, col, digit))
        {
            arr[row][col] = digit;
            if(sudokuSolver(arr,nextRow,nextCol))
            {
                return true;
            }
            arr[row][col] = 0;
        }
    }
    return false;
}

int main()
{
    int sudoku[9][9]={{0,0,8,0,0,0,0,0,0},
                   {4,9,0,1,5,7,0,0,2},
                   {0,0,3,0,0,4,1,9,0},
                   {1,8,5,0,6,0,0,2,0},
                   {0,0,0,0,2,0,0,6,0},
                   {9,6,0,4,0,5,3,0,0},
                   {0,3,0,0,7,2,0,0,4},
                   {0,4,9,0,3,0,0,5,7},
                   {8,2,7,0,0,9,0,1,3}};
    
    sudokuSolver(sudoku, 0, 0);
    
    return 0;
}