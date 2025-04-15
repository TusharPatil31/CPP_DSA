#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool valid_parentheses(string str)
{
    stack<char> s;
    
    for(int i=0; i<str.length() ;i++){
        char ch = str[i];
        if(ch == '(' || ch == '[' || ch == '{'){
            s.push(ch);    
        }else{
            if(s.empty()){
                return false;
            }else{
                if((s.top() == '(' && ch == ')') ||
                (s.top() == '[' && ch == ']') ||
                (s.top() == '{' && ch == '}')){
                    s.pop();
                }else{
                    return false;
                }
            }
        }
    }
    
    return s.empty();
}

bool isDuplicate(string str){
    stack<char> s;
    
    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        if(ch != ')'){
            s.push(ch);
        }else{
            if(s.top() == '('){
                return true;
            }
            
            while(s.top() != '('){
                s.pop();
            }
            s.pop();
        }
    }
    return false;
}

int main()
{
    // string str = "[]{}([{}])()";
    // string str1 = "[({(){}]])";
    
    // cout<<valid_parentheses(str)<<"\n";
    // cout<<valid_parentheses(str1)<<"\n";
    // 
    string str = "((a+b))";
    string str1 = "((a+b)+(c+d))";
    
    cout<<isDuplicate(str)<<"\n";
    cout<<isDuplicate(str1)<<"\n";
    
}