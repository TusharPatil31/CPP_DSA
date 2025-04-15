#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void histogram(vector<int> height){
    
    int n = height.size();
    vector<int> nsl(n);
    vector<int> nsr(n);
    stack<int> s;
    
    //nsl
    nsl[0] = -1;
    s.push(0);
    for(int i =1; i<n; i++){
        int curr = height[i];
        while(!s.empty() && curr <= height[s.top()]){
            s.pop();
        }
        
        if(s.empty())
        {
            nsl[i]=-1;
        }else{
            nsl[i] = s.top();
        }
        s.push(i);
    }
    
    while(!s.empty())
    {
        s.pop();
    }
    
    //nsr
    nsr[n-1] = n;
    s.push(n-1);
    for(int i= n-2; i>=0; i--){
        int curr = height[i];
        while(!s.empty() && curr <= height[s.top()]){
            s.pop();
        }  
        if(s.empty())
        {
            nsr[i]=n;
        }else{
            nsr[i] = s.top();
        }
        s.push(i);
    }
    
    int maxArea = 0;
    for(int i =0; i<n; i++){
        int h = height[i];
        int w = nsr[i]-nsl[i]-1;
        int area = h*w;
        maxArea= max(maxArea,area);
    }
    
    cout<<maxArea<<endl;
    return;
}

int main(){
    vector<int> height = {2,1,5,6,2,3};
    histogram(height);
}