#include <iostream>
#include <vector>
using namespace std;
template<class T>
class Stack{
    vector<T> vec;
    public:
        void push(T val){
            vec.push_back(val);
        }
        
        void pop(){
            if(isEmpty()){
                cout<<"stack is empty\n";
                return;
            }
            vec.pop_back();
        }
        
        T top(){
            // if(isEmpty()){
            //     cout<<"stack is empty\n";
            //     return -1;
            // }
            int idx = vec.size()-1;
            return vec[idx];
        }
        
        bool isEmpty(){
            return vec.size() == 0;
        }  
};

int main(){
    Stack<int> s;
    
    s.push(1);
    s.push(2);
    s.push(3);
    
    while(!s.isEmpty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}