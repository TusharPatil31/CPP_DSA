#include <deque>
#include <iostream>
using namespace std;

class Queue{
    deque<int> deq;
    public:
        void push(int val){
            deq.push_back(val);
        }
        
        void pop(){
            deq.pop_front();
        }
        
        int front(){
            return deq.front();
        }
        
        bool empty(){
            return deq.empty();
        }
};

int main(){
    
    Queue q;
    
    for(int i=1; i<6; i++){
        q.push(i);
    }
    
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    
}