#include <stdio.h> 
#include <stdlib.h> 
struct node{
    int data;
    struct node * next;
    struct node * prev;
};
//llt -> linked list traversal
void llt( struct node * ptr){
    while(ptr!=NULL){
        printf("Element : %d \n",ptr->data);
        ptr=ptr->next;
    }
}

//llrt -> linked list reverse traversal
//void llrt( struct node * ptr){
//    struct node *p=ptr;
//    while(p!=NULL){
//        printf("Element : %d \n",ptr->data);
//        p=p->prev;
//    }
//}

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
    head->prev=NULL;
    
    second->data=11;
    second->next=third;
    second->prev=head;


    //terminate the list
    third->data=66;
    third->next=fourth;
    third->prev=second;



    fourth->data=54;
    fourth->next=fifth;
    fourth->prev=third;

    fifth->data=73;
    fifth->prev=fourth;
    fifth->next=NULL;

    llt(head);
    //printf("Reverse linked list:-\n");
    //llrt(head);
    return 0;
}