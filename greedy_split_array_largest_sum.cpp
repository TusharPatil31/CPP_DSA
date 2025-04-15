#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

bool canSplit(vector<int> nums, int k, int maxSum){
    int subarray =1;
    int currSum = 0;
    
    for(int i=0; i<nums.size();i++){
        int num = nums[i];
        if(currSum + num > maxSum){
            subarray++;
            currSum = num;
            if(subarray>k){
                return false;
            }
        }else {
            currSum += num;
        }
    }
    
    return true;
}

int splitArray(vector<int> nums, int k){
    int left =  *max_element(nums.begin(), nums.end());
    int right = accumulate(nums.begin(), nums.end(), 0);
    
    while(left < right){
        int mid = left +(right-left)/2;
        
        if(canSplit(nums, k, mid)){
            right = mid;
        }else{
            left = mid +1;
        }
    }   
    return left;
}


int main(){
    vector<int> nums = {7,2,5,10,8};
    int k=2;
    
    cout<<splitArray(nums,k)<<endl;
    
}