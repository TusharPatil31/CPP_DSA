#include<iostream>
#include<string>
#include <vector>
using namespace std;

int recursion(int n)
{
    if(n == 0)
    {
        return  1;
    }
    
    return n * recursion(n-1);
}

void print(int n)
{
    if(n == 0)
    {
        return;
    }
    // cout<<n<<"\n";
    print(n-1);
    cout<<n<<"\n";
}

int sum(int n)
{
    if(n == 1)
    {
        return 1;
    }
    
    return n+sum(n-1);
}

int fibo(int n)
{
    if(n == 0 || n == 1)
    {
        return  n;
    }
    
    return fibo(n-1)+fibo(n-2);
}

bool checkArrayIsSorted(int arr[], int n, int i)
{
    if(i == n-1)
    {
        return true;
    }
    
    if(arr[i]> arr[i+1])
    {
        return false;
    }
    
    return checkArrayIsSorted(arr, n, i+1);
}

int firstOcc(vector<int> arr, int i , int target)
{
    if(i == arr.size())
    {
        return  -1;
    }
    
    if(arr[i] == target)
    {
        return i;
    }
    return firstOcc(arr, i+1, target);   
}

int LastOcc(vector<int> arr, int i , int target)
{
    if(i == arr.size())
    {
        return  -1;
    }
    
    int idx = LastOcc(arr, i+1, target); 
    
    if(arr[i] == target && idx == -1)
    {
        return i;
    }  
    
    return idx;
}

int pow(int x, int n)
{
    if(n == 0)
    {
        return 1;
    }
    
    int halfPow = pow(x, n/2);
    int halfPowSqr = halfPow * halfPow;
    
    if( n % 2 != 0)
    {
        return 2*halfPowSqr;
    }
    
    return halfPowSqr;
    
}

// int tilingProblem(int n)
// {
//     if(n ==0 || n ==1)
//     {
//         return 1;
//     }
    
//     return  tilingProblem(n-1)+ tilingProblem(n-2);
// }

//// using DP
int tilingProblem(int n) {
    int prev4 = 1, prev3 = 1, prev2 = 1, prev1 = 1;

    for (int i = 4; i <= n; i++) {
        int curr = prev1 + prev4;
        prev4 = prev3;
        prev3 = prev2;
        prev2 = prev1;
        prev1 = curr;
    }

    return prev1;
}


void removeDup(string str, string ans, int i , int map[26])
{
    if(i == str.size())
    {
        cout<<"Ans: "<<ans<<"\n";
        return;
    }
    
    int mapIdx = (int)(str[i] - 'a');
    
    if(map[mapIdx])
    {
        removeDup(str, ans, i+1, map);
    }else {
        map[mapIdx] = true;
        removeDup(str, ans+str[i], i+1, map);
    }
}

int friendPairing(int n)
{
    if(n == 1 || n == 2){
        return n;
    }
    return friendPairing(n-1)+ (n-1)*friendPairing(n-2);
}

void binaryString(int n, string ans)
{
    if(n == 0)
    {
        cout<<ans<<endl;
        return;
    }
    if(ans[ans.size()-1] != '1')
    {
        binaryString(n-1, ans+'0');
        binaryString(n-1, ans+'1');
    }else {
         binaryString(n-1, ans+'0');
    }
}

int binarySearch(int arr[], int target, int st, int end)
{
    if(st > end)
    {
        return -1;
    }
    
    int mid = (st+end)/2;
    
    if(arr[mid]==target)
    {
        return mid;
    }else if(arr[mid]< target)
    {
        return binarySearch(arr,target,mid+1,end);
    }else {
        return binarySearch(arr,target,st,mid-1);
    }
}

void allOcc(int arr[], int key, int i, int n)
{
    if(i>n)
    {
        cout<<endl;
        return;
    }
    if(arr[i] == key)
    {
        cout<<i<<" ";
        allOcc(arr, key, i+1, n);
    }else {
        allOcc(arr, key, i+1, n);
    }
}

int countAllcontigousSubstring(string str, int i, int j, int n)
{
    if(n == 1)
    {
        return 1;
    }
    if(n <= 0)
    {
        return 0;
    }
    int res = countAllcontigousSubstring(str, i+1, j, n-1) +
            countAllcontigousSubstring(str, i, j-1, n-1)-
             countAllcontigousSubstring(str, i+1, j-1, n-2);
    
    if(str[i] == str[j])
    {
        cout<<str.substr(i,j+1)<<" ";
        cout<<res<<" ";
        res++;
    }
    
    return res;
}

void towerOfHonai(int n, string src, string helper, string dest)
{
    if(n==1)
    {
        cout<<"Transfer disk "<<n<<" from "<<src<<" to "<<dest<<endl;
        return;
    }
    
    towerOfHonai(n-1, src, dest, helper);
    cout<<"Transfer disk "<<n<<" from "<<src<<" to "<<dest<<endl;
    towerOfHonai(n-1, helper, src, dest);
}

int main()
{
    int n=6;
    // int x ;
    // int arr[] = {1,2,3,4,5,6,7,8};
    // print(n);
    // vector<int> arr = {1,2,3,3,3,6};
    // cout<<tilingProblem(4)<<endl;
    // string str = "appanncollege";
    // string ans = "";
    // int map[26] = {false};
    // removeDup(str, ans, 0, map);
    // binaryString(3, "");
    // cout<<binarySearch(arr,5,0,7)<<endl;
    
    
    // int arr[] = {3,2,4,5,6,2,7,2,2};
    // allOcc(arr,2,0,8);
    // // 
    cout<<countAllcontigousSubstring("abcab",0,4,5)<<endl;
    // 
    // towerOfHonai(3, "A", "B", "C");
    
    return 0;
}