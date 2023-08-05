#include <stdio.h> 
#include <stdlib.h> 
struct node{
    int data;
    struct node * next;
};
//llt -> linked list traversal
void llt( struct node * head){
    struct node *ptr=head;
    do
    {
        printf("Element : %d \n",ptr->data);
        ptr=ptr->next;
    } while (ptr!=head);
    
}
// insertion at first in circular linked list
struct node * insertatfirst(struct node * head , int data){
    struct node * ptr = (struct node *)malloc (sizeof(struct node));
    ptr->data=data;
    struct node * p= head;
    while (p->next!=head){
        p=p->next;
    }
    // at this point p points to the last node of the circular linked list
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
}

int main(){
    struct node * head;
    struct node * second;
    struct node * third;
    struct node * fourth;
    struct node * fifth;
    //allocate memory for node in linked list in heap
    head=(struct node *)malloc (sizeof(struct node));
    second=(struct node *)malloc (sizeof(struct node));
    third=(struct node *)malloc (sizeof(struct node));
    fourth=(struct node *)malloc (sizeof(struct node));
    fifth=(struct node *)malloc (sizeof(struct node));

    head->data=7;
    head->next=second;
    
    second->data=11;
    second->next=third;

    //terminate the list
    third->data=32;
    third->next=fourth;

    fourth->data=54;
    fourth->next=fifth;

    fifth->data=73;
    fifth->next=head;


     printf("Befor insertion :-\n");
    llt(head);


    head=insertatfirst(head,88);
    printf("After insertion at first index :-\n");
    llt(head);
    return 0;
}