#include<iostream>
using namespace std;

vector<int> setMismatch(vector<int> nums)
{   
    int n = nums.size();
    vector<bool> isPresent(n+1,false);
    vector<int> ans;

    for(int i =0; i<n; i++)
    {
        if(isPresent[nums[i]])
        {
            ans.push_back(nums[i]);
        }
        isPresent[nums[i]] = true;
    
    }

    for(int i=1; i<isPresent.size(); i++)
    {
        if(!isPresent[i])
        {
            ans.push_back(i);
            break;
        }
    
    }

    return ans;


}



int main()
{

    vector<int> nums={1,2,2,4};

    setMismatch(nums);
    
}