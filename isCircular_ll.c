#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* newNode(int data){
    struct Node* first;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data = data;
    first->next = NULL;
    return first;
};

int iscircular(struct Node* head){
    if(head == NULL){
        return 1;
    }
    
    struct Node* ptr= head;
    
    while( ptr != NULL && ptr != head){
        ptr = ptr->next;
    }
    
    return ptr == head;
}

int main(){
    
    struct Node* head = newNode(10);
    head->next = newNode(20);
    head->next->next = newNode(30);
    head->next->next->next = head;
    
    if(iscircular(head)){
        printf("Yes\n");
    }else {
        printf("NO\n");
    }
    
}