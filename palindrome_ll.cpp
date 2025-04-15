#include <iostream>
#include <list>
#include <stack>
using namespace std;

bool palindrome(list<int> head){
    stack<int> s;
    
    int se = head.size();
    auto it = head.begin();
    for(int i=0; i<(se/2); i++){
        s.push(*it);
        it++;
    }
    if(se%2 != 0){
        it++;
    }
    
    while(it != head.end()){
        if(*it != s.top()){
            return false;
        }
        s.pop();
        it++;
    }
    
    return s.empty();
}

int main(){
    list<int> ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(2);
    // ll.push_front(1);
    
    cout<<palindrome(ll)<<endl;
    
}