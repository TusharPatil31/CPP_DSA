#include <iostream>
#include <string>
using namespace std;

class List{
private:
    int* arr;
    int capacity;
    int size;
    
    void resize(){
        capacity = capacity*2;
        int* newArr = new int[capacity];
        for(int i =0; i<size; i++){
            newArr[i] =  arr[i];
        }
        delete[] arr;
        arr = newArr;
    }

public:
    List(int capacity = 2){
        this->capacity = capacity;
        size = 0;
        arr = new int[capacity];  
    }
    
    void push_back(int val){
        if(size == capacity){
            resize();
        }
        arr[size++]= val;
    }
    
    void push_front(int val){
        if(size == capacity){
            resize();
        }
        for(int i= size; i>0; i--){
            arr[i] = arr[i-1];  //shift right
        }
        arr[0] = val;
        size++;
    }
    
    void pop_back(){
        if(size ==0){
            cout<<"List is empty\n";
            return;
        }
        size--;
    }
    
    void pop_front(){
        if(size ==0){
            cout<<"List is empty\n";
            return;
        }
        for(int i= 0; i<size-1; i++){
            arr[i] = arr[i+1];  //shift left
        }
        size--;
    }
    
    void insert_at(int idex, int val){
        if(idex<0 || idex > size){
            cout << "Invalid index\n";
            return;
        }
        if (size == capacity) resize();
        for(int i= size; i>idex; i--){
            arr[i] = arr[i-1];  //shift right
        }
        arr[idex]= val;
        size++;
    }
    
    void delete_at(int idex){
        if(size ==0){
            cout<<"List is empty\n";
            return;
        }
        for(int i = idex; i<size-1; i++){
            arr[i]= arr[i+1];
        }
        size--;
    }
    
    int getSize(){
        return size;
    }
    bool empty(){
        return size == 0;
    }
    void print() {
        cout << "List: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }    
    
    void reverse(){
        int start = 0, end = size-1;
        while(start<end){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end]= temp;
            start++;
            end--;
        }
    }
};


int main(){
    List ll;
    ll.push_back(10);
    ll.push_back(20);
    ll.push_back(30);
    ll.push_back(40);
    ll.push_back(50);
    
    ll.reverse();
    ll.print();
    
      
}