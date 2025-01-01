/*
for a given number array size of N. find all occurrance(indices) of a given elemet(key) and print all of them


*/


#include<iostream>
using namespace std;

void allOccurrance(int arr[], int n, int i, int key)
{
    if(i == n)
    {
        return;
    }
    if(arr[i]==key)
    {
        cout<<i<<" ";
    }
    return allOccurrance(arr, n, i+1, key);
}

int main()
{
    int arr[] = {3,2,4,5,6,2,7,2,2};

    allOccurrance(arr, 9, 0, 2);

    return 0;
}