#include <algorithm>
#include <iostream>
#include <stack>
using namespace std;

void pushAtBottom(stack<int> &s, int val)
{
    if(s.empty())
    {
        s.push(val);
        return;
    }
    
    int temp = s.top();
    s.pop();
    pushAtBottom(s,val);
    s.push(temp);
}

string reverse_string_stack(string str)
{
    string ans;
    stack<char> s;
    
    for(int i =0; i<str.size(); i++)
    {
        s.push(str[i]);
    }
    
    while(!s.empty()){
        char top = s.top();
        ans += top;
        s.pop();
    }
    
    return ans;
}

void reverse_stack(stack<int> &s){
    while(s.empty()){
        return;
    }
    int temp = s.top();
    s.pop();
    reverse_stack(s);
    pushAtBottom(s, temp);
      
}

void printStack(stack<int> s)
{
    while (!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"\n";
}

int main()
{
    stack<int> s;
    
    s.push(3);
    s.push(2);
    s.push(1);
    
    // pushAtBottom(s,4);

    printStack(s);
    
    // string str = "abcd";
    // cout<<reverse_string_stack(str)<<endl;
    reverse_stack(s);
    printStack(s);
}