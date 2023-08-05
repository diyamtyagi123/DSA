#include <stdio.h> 
#include <stdlib.h> 
struct node {
    int data;
    struct node * next;
};
struct node * top=NULL; //universal phechan -_-
// linked list traversal
void llt( struct node * ptr){
    while(ptr!=NULL){
        printf("Element : %d \n",ptr->data);
        ptr=ptr->next;
    }
}
int isfull(struct node * top){
    struct node *p=(struct node *)malloc(sizeof(struct node));
    if(p==NULL)
        return 1;
    else 
        return 0;
}
int isempty(struct node * top){
    if (top==NULL)
        return 1;
    else 
        return 0; 
}
//push using linked list 
struct node *push(struct node * top, int x){
    if(isfull(top))
        printf("stack overflow\n");
    else{
        struct node * n=(struct node*)malloc(sizeof(struct node));
        n->data=x;
        n->next=top;
        top=n;
        return top;
    }
}
//pop using linked list 
struct node *pop(struct node * up){
    if(isempty(up))
        printf("under overflow\n");
    else{
        struct node * n=up;
        top=up->next;
        int x=n->data;
        free(n);
        return x;
    }
}
int main(){
    top=push(top,18);
    top=push(top,31);
    top=push(top,47);
    top=push(top,86);
    int element = pop(top);
    llt(top);
    return 0;
}