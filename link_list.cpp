#include <cstddef>
#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int val)
        {
            data = val;
            next = NULL;
        }
        
        ~Node()
        {
            // cout<<"~Node\n";
            if(next != NULL)
            {
                delete next;
                next = NULL;
            }
        }
};

class List{  
    Node* head;
    Node* tail;
    
    public:
        List()
        {
            head = NULL;
            tail = NULL;
        }
        
        ~List()
        {
            // cout<<"~List\n";
            if(head != NULL)
            {
                delete head;
                head = NULL;
            }
        }
        
        void push_front(int val){
            Node* newNode = new Node(val);
            
            if(head == NULL)
            {
                head = tail = newNode;
            }else{
                newNode->next = head;
                head = newNode;
            }
        }
        
        void push_back(int val)
        {
            Node* newNode = new Node(val);
            
            if(head == NULL)
            {
                head = tail = newNode;
            }else{
                tail->next = newNode;
                tail = newNode;
            }
        }
        
        void printLL()
        {
            Node* temp = head;
            
            while(temp != NULL)
            {
                cout << temp->data <<" -> ";
                temp = temp->next;
            }
            cout << "NULL\n";
        }
        
        void insert(int val, int pos)
        {
            Node* newNode = new Node(val);
            
            Node* temp = head;
            for(int i=0; i<pos-1; i++)
            {
                if(temp == NULL)
                {
                    cout<<"Invalid postion\n";
                    return;
                }
                temp = temp->next;
            }
            
            newNode->next = temp->next;
            temp->next = newNode;
        }
        
        void pop_front()
        {
            if(head == NULL)
            {
                cout<<"LinkList is empty\n";
            }
            Node* temp = head;
            head = head->next;
                   
            temp->next = NULL;
            delete temp;
        }
        
        void pop_back()
        {
            Node* temp = head;
            
            while(temp->next->next != NULL)
            {
                temp = temp->next;
            }
            
            temp->next = NULL;
            delete tail;
            tail = temp;
        }
        
        int searchIter(int key)
        {
            Node* temp = head;
            
            int i = 0;
            while(temp != NULL)
            {
                if(temp->data == key)
                {
                    return i;
                }
                temp = temp->next;
                i++;
            }
            
            return -1;
        }
        
        int helper(Node* h, int key)
        {
            if(h == NULL)
            {
                return -1;
            }
            if(h->data == key)
            {
                return 0;
            }
            
            int i = helper(h->next, key);
            if(i == -1)
            {
                return -1;
            }
            
            return i+1;
        }
        
        int searchRec(int key)
        {
            return helper(head, key);
        }
        
        
        void reverse()
        {
            Node* curr = head;
            Node* prev = NULL;
            
            tail = head;
            while(curr != NULL)
            {
                Node* next = curr->next;
                curr->next = prev;
                
                prev = curr;
                curr = next;
            }
            
            head = prev;
        }
        
        int getSize()
        {
            Node* temp = head;
            
            int sz = 0;
            while(temp != NULL)
            {
                temp = temp->next;
                sz++;
            }
            
            return sz;
        }
        
        void removeNth(int n)
        {
            int size = getSize();
            Node* prev = head;
            
            for(int i=1; i<(size-n); i++)
            {
                prev = prev->next;
            }
            
            Node* toDel = prev->next;
            cout<<"going to delete : "<< toDel->data<<"\n";
            delete toDel;
            toDel = NULL;
            prev->next = prev->next->next;   
        }
        
        
        bool isPalindrome()
        {
            Node* h = head;
            
            if(!h || !h->next) return true;
            
            Node* slow = h;
            Node* fast = h;
            
            while(fast && fast->next){
                slow = slow->next;
                fast = fast->next->next;
            }
            
            Node* prev = NULL;
            while(slow){
                Node* temp = slow->next;
                slow->next = prev;
                prev = slow;
                slow = temp;
            }  
            
            Node* left = h;
            Node* right = prev;
            while(right){
                if(left->data != right->data)
                {
                    return false;
                }
                left = left->next;
                right = right->next;
            }
            return true;
        }
};

int main()
{
    
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(2);
    ll.push_back(1);
    
    ll.printLL();
    
    // cout<<ll.searchIter(3)<<"\n";
    // cout<<ll.searchRec(4);
    // ll.reverse();
    // ll.removeNth(2);
    // 
    cout<<ll.isPalindrome()<<"\n";
    ll.printLL();
    // return;
    
}