

#include<iostream>
using namespace std;

    int maxArea(vector<int>& height) {
        int st=0, end= height.size()-1;

        int area = 0;
        while(st < end )
        {
            int currArea = 0;
            if(height[st] <= height[end])
            {
                currArea = height[st] * (end-st);
                st++;

            }else if (height[st] > height[end])
            {
                currArea = height[end] * (end-st);
                end--;
            }

            if(area < currArea)
            {
                area = currArea;
            }
        }


        return area;
    }



int main()
{

    vector<int> height={1,8,6,2,5,4,8,3,7};

    cout<<maxArea(height)<<endl;
    
}
