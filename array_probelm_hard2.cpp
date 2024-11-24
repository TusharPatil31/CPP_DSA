

// Time complexity for this program O(n)

/*

There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.

*/


#include<iostream>
using namespace std;

int hard(int *arr_ptr, int n, int pivot_idx, int target)
{
    int rotated_arr[5000];
    int idx = 0;
    for(int i = pivot_idx; i<n; i++)
    {
        rotated_arr[idx] = arr_ptr[i];
        idx++;
    }
    for(int i = 0 ; i<pivot_idx; i++){
        rotated_arr[idx] = arr_ptr[i];
        idx++;
    }

    for(int i = 0 ; i<n; i++)
    {
        if(rotated_arr[i]==target)
        {
            return i;
        }    
    }
    //TC = O(n+n+n) = O(3n) = O(n)
    return -1;

}

int main()
{
    int arr[] = {0,1,2,4,5,6,7};
    int n = sizeof(arr)/sizeof(int);
    int pivot_idx = 3;

    cout<<hard(arr, n, pivot_idx, 0)<<endl;
    return 0;
}




/// leet code
// TC = O(nlogn)

/*

class Solution {
public:
    int search(vector<int>& nums, int target) {

        int high = nums.size()-1, low = 0;

        while(low<=high)
        {
            int mid = (low+high)/2;

            if(nums[mid]==target)
            {
                return mid;
            }

            if (nums[low]<= nums[mid]){
                if(nums[low] <= target && target < nums[mid])
                {
                    high = mid-1;
                }
                else
                {
                    low = mid+1;
                }
            }else
            {
                if(nums[mid]< target && target <= nums[high])
                {
                    low = mid + 1;
                }else
                {
                    high = mid - 1;
                }
            }
        }

    return -1;
    }
};

*/