#include <iostream>
#include <string>
#include <vector>
using namespace std;

void bfs(int pos, int n, string dig, string ans, vector<vector<char>> L)
{
    if(pos == n)
    {
        cout<<ans<<" ";
    }else{
        
        vector<char> letters = L[dig[pos]-'0'];
        for(int idx =0; idx<letters.size(); idx++)
        {
            bfs(pos+1, n, dig, ans + letters[idx], L);
        }
    }
}


void letterCombination(string dig, vector<vector<char>> L)
{
    int len_dig = dig.length();
    if(len_dig == 0)
    {
        cout<<""<<endl;
    }
    
    string ans = "";
    bfs(0, len_dig, dig, ans, L);
    cout<<endl;
}


int main()
{
    vector<vector<char>> L = {{},{},{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};
    
    string str = "2345";
    
    letterCombination(str, L);
    return 0;
}