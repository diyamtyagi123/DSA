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

struct node * deletionatfirst(struct node * head){
    struct node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// case 2
struct node * deletionatindex(struct node * head ,int index){
    struct node * p=head;
    struct node * q=head->next;
    for (int i=0;i<index-1;i++){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
    
}

// case 3
struct node * deletionatend(struct node * head ){
    struct node * p=head;
    struct node * q=head->next;
    while (q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    
    p->next=NULL;
    free(q);
    return head;
    
}
// case 4
struct node * deleatvalue(struct node * head, int value){
    struct node * p=head;
    struct node * q=head->next;
    while (q->data!=value && q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
        p->next=q->next;
        free(q);
    }
    
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
    fifth->next=NULL;

    llt(head);

    // at first

    head=deletionatfirst(head);
    printf("After deletion at first index :-\n");
    llt(head);

    // in between

    head=deletionatindex(head,3);
    printf("After deletion in between index :-\n");
    llt(head);

    // at the end

    head=deletionatend(head);
    printf("After deletion at the end :-\n");
    llt(head);

    // deletion of a given value
    head=deleatvalue(head,32);
    printf("deletion of a given value:-\n");
    llt(head);

    return 0;
}