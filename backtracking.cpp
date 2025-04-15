#include <iostream>
#include <string>
using namespace std;

void printArr(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void changeArr(int arr[], int n, int i)
{
    if(i == n)
    {
        printArr(arr, n);
        return;
    }
    
    arr[i] = i+1;
    changeArr(arr, n, i+1);
    arr[i] -= 2;
    
    return;
}


void findAllSubsets(string str, string subset)
{
    if(str.length() == 0)
    {
        cout<<subset<<endl;
        return;
    }
    
    char ch = str[0];
    
    //Yes choice
    findAllSubsets(str.substr(1, str.length()-1), subset + ch);
    
    //No choice
    findAllSubsets(str.substr(1, str.length()-1), subset);
}

void findPermutations(string str, string ans)
{
    int n = str.length();
    
    if(n == 0)
    {
        cout<<ans<<endl;
        return;
    }
    
    for(int idx =0 ; idx < str.length(); idx++)
    {
        char ch = str[idx];
        string nextStr = str.substr(0, idx)+ str.substr(idx+1, n-idx-1);
        findPermutations(nextStr, ans+ch);
    }
    
}

int main()
{
    int arr[5] = {0};
    int n = 5;
    // changeArr(arr, n, 0);
    // printArr(arr, n);
    
    // findAllSubsets("abc", "");
    findPermutations("abcd", "");
    
    return 0;
}