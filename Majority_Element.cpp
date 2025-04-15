#include <iostream>
#include <string>
using namespace std;

int CountInRange(int arr[], int num, int lo, int hi)
{
    int cnt = 0;
    for(int i= lo; i <= hi; i++)
    {
        if(arr[i]==num)
        {
            cnt++;
        }
    }
    return cnt;
}

int majorityEle(int arr[], int lo, int hi)
{
    if(lo==hi)
    {
        return arr[lo];
    }
    
    int mid = lo + (hi-lo)/2;
    int left = majorityEle(arr, lo, mid);
    int right = majorityEle(arr, mid+1, hi);
    
    if(left == right)
    {
        return  left;
    }
    
    int leftCnt = CountInRange(arr, left, lo, hi);
    int rightCnt = CountInRange(arr, right, lo, hi);
    
    return leftCnt>rightCnt ? left: right;
}

int main()
{
    int arr[] = {2,2,1,1,1,2,2,2};
    int n =7;
    
    cout<<majorityEle(arr, 0, 7)<<endl;
    
}