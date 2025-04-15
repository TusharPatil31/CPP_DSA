#include <iostream>
#include <vector>
#include <string>
using namespace std;


void possiblePaths(int maze[4][4], int row, int col, int n, string ans, vector<vector<bool>> visited)
{
    
    if(row == n-1 && col == n-1)
    {
        cout<<ans<<endl;
        return;
    }
    
    if(row < 0 || col < 0 || row >= n || col >= n || maze[row][col] == 0 || visited[row][col])
    {
        return;
    }

    visited[row][col] = true;

    //right
    possiblePaths(maze, row, col+1, n, ans+"R", visited);
    //Down
    possiblePaths(maze, row+1, col, n, ans+"D", visited);
    //Left
    possiblePaths(maze, row, col-1, n, ans+"L", visited);
    //Up
    possiblePaths(maze, row-1, col, n, ans+"U", visited);
    
    visited[row][col] = false;
}

int main()
{
    int maze[4][4]= {{1,0,0,0},
                    {1,1,0,1},
                    {1,1,0,0},
                    {0,1,1,1}};
    
    string ans = "";
    
    vector<vector<bool>> visited(4,vector<bool>(4,false));
    
    possiblePaths(maze, 0, 0, 4, ans, visited);
    
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<visited[i][j]<<" ";
        }
        cout<<endl;
    }
}