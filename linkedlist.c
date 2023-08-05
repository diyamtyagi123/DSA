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
    return 0;
}