#include <iostream>
#include <stack>
using namespace std;

// class Queue{
//     stack<int> s1;
//     stack<int> s2;
    
//     public:
//         void push(int val){ //o(n)
//             while(!s1.empty()){
//                 s2.push(s1.top());
//                 s1.pop();
//             }
            
//             s1.push(val);
            
//             while(!s2.empty()){
//                 s1.push(s2.top());
//                 s2.pop();
//             }
//         }
        
//         void pop(){
//             if(empty()){
//                 cout<<"Queue is empty\n";
//                 return;
//             }
//             s1.pop();
//         }
        
//         int top(){
//             if(empty()){
//                 cout<<"Queue is empty\n";
//                 return -1;
//             }
//             return s1.top();
//         }
        
//         bool empty(){
//             return s1.empty();
//         }   
// };


class Queue{
    stack<int> s1;
    stack<int> s2;
    
    public:
        void push(int val){ //o(1)
            s1.push(val);
        }
        
        void pop(){
            if(empty()){
                cout<<"Queue is empty\n";
                return;
            }
            if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            }
            
            s2.pop();
        }
        
        int top(){
            if(empty()){
                cout<<"Queue is empty\n";
                return -1;
            }
            if(s2.empty()){
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            return s2.top();
        }
        
        bool empty(){
            return s1.empty() && s2.empty();
        }   
};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    
    while(!q.empty()){
        cout<<q.top()<<endl;
        q.pop();
    }  
}