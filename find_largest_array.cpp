#include<iostream>
using namespace std;


int main()
{
    int arr[] = {5,2,6,7,3};
    int n = sizeof(arr)/sizeof(int);

    int max = arr[0];
    for(int i = 1; i<n; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    cout<<"Largest Number is "<<max<<endl;

    return 0;
}