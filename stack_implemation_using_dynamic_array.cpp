#include <iostream>
#include <type_traits>
using namespace std;

template <class T>
class Stack{
    T* arr;
    int capacity;
    int topIdx;
    
    void resize(){
        capacity *= 2;
        
        T* newArr = new T[capacity];
        for(int i =0; i<= topIdx; i++)
        {
            newArr[i] = arr[i];
        }
        delete[] arr;
        
        arr=newArr;  
    }
    public:
        Stack(){
            capacity = 1;
            arr = new T[capacity];
            topIdx = -1;
        }
        
        ~Stack(){
            delete[] arr;
        }
        
        void push(T val){
            if(topIdx +1 == capacity)
            {
                resize();
            }
            arr[++topIdx]=val;
        }
        
        void pop(){
            if(isEmpty()){
                cout<<"Stack is empty\n";
                return;
            }
            topIdx--;
        }
        
        T top(){
            if(isEmpty()){
                cout<<"Stack is empty\n";
                return -1;
            }
            return arr[topIdx];
        }
        
        T isEmpty(){
            return topIdx == -1;
        }
    
};


int main(){
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    
    while(!s.isEmpty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}