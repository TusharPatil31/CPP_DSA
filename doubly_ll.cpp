#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;
        Node(int val){
            data = val;
            next = prev = NULL;
        }
};

class List{
    public:
        Node* head;
        Node* tail;
        
        List()
        {
            head =tail=NULL;
        }
        
        void push_front(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode;
            }else{
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }    
        }
        
        void pop_front(){
            Node* temp = head;
            head = head->next;
            if(head != NULL)
            {
                head->prev = NULL;
            }
            temp->next = NULL;
            delete temp;
        }
        
        void push_back(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head= tail = NULL;
            }else{
                tail->next = newNode;
                newNode->prev = tail;
                tail = newNode;
            }
        }
        
        void pop_back(){
            Node* temp = head;
            
            while(temp->next->next != NULL)
            {
                temp = temp->next;
            }
            tail->prev = NULL;
            temp->next = NULL;
            delete tail;
            tail= temp;
        }
        
        void printLL(){
            Node* temp= head;
            while(temp != NULL){
                cout<<temp->data<<"<->";
                temp = temp->next;
            }
            cout<<"\n";
        }
};

int main(){
    
    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.pop_front();
    ll.printLL();
    ll.push_back(6);
    ll.push_back(7);
    ll.printLL();
    ll.pop_back();
    ll.printLL();

}