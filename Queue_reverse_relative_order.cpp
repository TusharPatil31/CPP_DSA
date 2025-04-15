#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverse_rel(queue<int> &q, int k){
    stack<int> s;
    int n = q.size();
    
    for(int i=0; i<k; i++){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    
    for(int i=0; i<(n-k); i++){
        int ele = q.front();
        q.pop();
        q.push(ele);
    }
    
    return;
}

int main()
{
    queue<int> q;
    for(int i=1; i<6; i++){
        q.push(i);
    }
    
    reverse_rel(q,3);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}