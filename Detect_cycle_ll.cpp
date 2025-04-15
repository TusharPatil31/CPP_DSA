#include <cstddef>
#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int val){
            data = val;
            next = NULL;
        }
        // ~Node(){
        //     // cout<<"~Node\n";
        //     if(next != NULL){
        //         delete next;
        //         next = NULL;
        //     }
        // } 
};

class List{    
    public:
    Node* head;
    Node* tail;
        List(){
            head = NULL;
            tail = NULL;
        }
        
        // ~List(){
        //     if(head != NULL){
        //         delete head;
        //         head = NULL;
        //     }
        // }
    
        void push_front(int val){
            Node* newNode = new Node(val);
            
            if(head == NULL){
                head=tail=newNode;
            }else{
                newNode->next = head;
                head = newNode;
            }
        }
        
        void push_back(int val){
            Node* newNode = new Node(val);
            
            if(head == NULL){
                head = tail = newNode;
            }else{
                tail->next = newNode;
                tail = newNode;
            }
        }
        
        void pop_front(){
            if(head == NULL)
            {
                return;
            }
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
};

bool isCycleLoop(Node* head){
    
    Node* slow = head;
    Node* fast = head;
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            cout<<"Loop is exit in linklist\n";
            return true;
        }
    }
    cout<<"Loop does not exit in linklist\n";
    return false;
}

void printLL(Node* head)
{
    Node* temp = head;
    
    while(temp != NULL)
    {
        cout << temp->data <<" -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

void removeCycle(Node* head)
{
    Node* slow = head;
    Node* fast = head;
    bool isCycle = false;
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            isCycle = true;
            cout<<"Loop is exit\n";
            break;
        }
    }
    
    if(!isCycle){
        cout<<"Loop doesn't exit\n";
    }
    
    slow=head;
    int idx = 0;
    if(slow == fast){
        while(fast->next != slow){
            fast = fast->next;
        }
        cout<<idx<<endl;
        fast->next = NULL;
    }else{
        Node* prev = fast;
        while(slow != fast){
            slow = slow->next;
            prev = fast;
            fast = fast->next;
        }
        cout<<"Loop is removed\n";
        prev->next = NULL;
    }
}

Node* splitLL(Node* head){
    // if(head != NULL || head->next != NULL){
    //     return NULL;
    // }
    
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;
    while(fast != NULL && fast->next != NULL){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    
    if(prev == NULL)
    {
        return NULL;
    }
    prev->next = NULL;
    
    return slow;
}

Node* merge(Node* left, Node* right){
    List temp;
    Node* i = left;
    Node* j = right;
    
    while(i != NULL && j != NULL)
    {
        if(i->data <= j->data)
        {
            temp.push_back(i->data);
            i = i->next;
        }else{
            temp.push_back(j->data);
            j = j->next;
        }
    }
    
    while(i != NULL){
        temp.push_back(i->data);
        i = i->next;
    }
    
    while(j != NULL){
        temp.push_back(j->data);
        j = j->next; 
    }
    
    return temp.head;
}

Node* mergeSort(Node* head){
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    
    Node* righthead = splitLL(head);
    Node* left = mergeSort(head);
    Node* right = mergeSort(righthead);
    
    return merge(left, right);
}

Node* reverseLL(Node* head){
    
    Node* curr = head;
    Node* prev = NULL;
    while(curr != NULL){
        Node* next = curr->next;
        curr->next = prev;
        
        prev = curr;
        curr = next;
    }
    
    return prev;
}

Node* zigzagLL(Node* head){
    
    Node* righthead = splitLL(head);
    Node* rightheadRev = reverseLL(righthead);
    
    Node* left = head;
    Node* right = rightheadRev;
    Node* tail = right;
    
    while(left != NULL && right != NULL){
        Node* nextLeft = left->next;
        Node* nextRight = right->next;
        
        left->next = right;
        right->next = nextLeft;
        tail = right;
        
        left = nextLeft;
        right = nextRight;  
    }
    if(right != NULL)
    {
        tail->next = right;
    }
    
    return head;
}

int main()
{
    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    // ll.tail->next = ll.head;
    // removeCycle(ll.head); 
    printLL(ll.head); 
    // ll.head = mergeSort(ll.head);
    ll.head = zigzagLL(ll.head);
    printLL(ll.head); 
}