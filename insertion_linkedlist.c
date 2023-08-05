#include <stdio.h> 
#include <stdlib.h> 
struct node{
    int data;
    struct node * next;
};
//llt -> linked list traversal
void llt( struct node * ptr){
    while(ptr!=NULL){
        printf("Element : %d \n",ptr->data);
        ptr=ptr->next;
    }
}
// case 1

struct node * insertatfirst(struct node * head , int data){
    struct node * ptr = (struct node *)malloc (sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
// case 3
struct node * insertatend(struct node * head , int data){
    struct node * ptr = (struct node *)malloc (sizeof(struct node));
    ptr->data=data;
    struct node * p=head;
    while (p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
    
}
// case 4
struct node * insertafternode(struct node * head , struct node * prevnode , int data){
    struct node * ptr = (struct node *)malloc (sizeof(struct node));
    ptr->data=data;
    ptr->next=prevnode->next;
    prevnode->next=ptr;
    return head;
    
}
// case 2
struct node * insertatindex(struct node * head , int data,int index){
    struct node * ptr = (struct node *)malloc (sizeof(struct node));
    struct node * p=head;
    int i=0;
    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
    
}
int main(){
    struct node * head;
    struct node * second;
    struct node * third;
    //allocate memory for node in linked list in heap
    head=(struct node *)malloc (sizeof(struct node));
    second=(struct node *)malloc (sizeof(struct node));
    third=(struct node *)malloc (sizeof(struct node));

    head->data=7;
    head->next=second;
    
    second->data=11;
    second->next=third;

    //terminate the list
    third->data=66;
    third->next=NULL;

    llt(head);

    // at first

    head=insertatfirst(head,6);
    printf("After insertion at first index :-\n");
    llt(head);

    // in between

    head=insertatindex(head,31,3);
    printf("After insertion in between index :-\n");
    llt(head);

    // at the end

    head=insertatend(head,72);
    printf("After insertion at the end :-\n");
    llt(head);

    // after a node 

    head=insertafternode(head,third,68);
    printf("Insertion after a node:-\n");
    llt(head);

    return 0;
}