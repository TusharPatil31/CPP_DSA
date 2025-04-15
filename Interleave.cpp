#include <iostream>
#include <queue>
using namespace std;

void interleave(queue<int> &org){
    
    int n = org.size();
    queue<int> first;
    for(int i=0; i<n/2; i++){
        first.push(org.front());
        org.pop();
    }
    
    while(!first.empty()){
        org.push(first.front());
        first.pop();
        
        org.push(org.front());
        org.pop();
    }
    // org.push(org.front());  //for odd
    // org.pop();
    return;
    
}


int main(){
    
    queue<int> q;
    for(int i=1; i<11; i++)
    {
        q.push(i);
    }
    
    interleave(q);
    
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}