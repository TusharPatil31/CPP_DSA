#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int activity_selection(vector<int> start, vector<int> end){
    // sort on end time
    // A0
    int count =1;
    int currEnd = end[0];
    
    for(int i =1; i<start.size(); i++){
        if(start[i]>=currEnd){
            count++;
            currEnd =start[i];
        }
    }
    return count;
}

bool compare(pair<int, int> p1, pair<int, int> p2){
    return p1.second < p2.second;
}

int main(){
    vector<int> start = {1,3,0,5,8,5};
    vector<int> end = {2,4,6,7,9,9};
    
    cout<<activity_selection(start, end)<<endl;
    
    // vector<int> start = {0,1,2};
    // vector<int> end = {9,2,4};
    
    // vector<pair<int, int>> act(3,make_pair(0,0));
    // act[0]= make_pair(0,9);
    // act[1]= make_pair(1,2);
    // act[2]= make_pair(2,4);
    // for(int i=0; i<act.size(); i++){
    //     cout<<"A"<<i<<": "<<act[i].first<<","<<act[i].second<<endl;
    // }
    
    // sort(act.begin(), act.end(), compare);
    // cout<<"--------------sorted-----------------------------\n";
    // for(int i=0; i<act.size(); i++){
    //     cout<<"A"<<i<<": "<<act[i].first<<","<<act[i].second<<endl;
    // }
}