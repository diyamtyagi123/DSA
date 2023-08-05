#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isempty(struct stack *ptr)
{
    if (ptr->top == -1)
        return 1;
    return 0;
}
int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
        return 1;
    return 0;
}
void push(struct stack * ptr , int val){
    if(isfull(ptr))
        printf("stack overflow\n");
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
void pop(struct stack * ptr ){
    if(isempty(ptr))
        printf("stack underflow\n");
    else{
        int n = ptr->arr[ptr->top];
        ptr->top=ptr->top - 1;
        return n;
    }
}
int peek(struct stack * sp, int i){
    int a=sp->top -i +1;
    if(a < 0){
        printf("invalid position\n");
        return -1;
    }
    else{
        return sp->arr[a];
    }
}
int main(){
    struct stack *sp=(struct stack *) malloc(sizeof(struct stack));
    sp->size=50;
    sp->top=-1;
    sp->arr=(int *) malloc(sp->size * sizeof(int));
    push(sp,0); 
    push(sp,1);
    push(sp,2);
    push(sp,4);
    push(sp,7);
    push(sp,9);
    push(sp,13);
    push(sp,17);
    push(sp,25);
    push(sp,31); 
    push(sp,44);
    push(sp,53);
    for(int j=1;j<=sp->top+1;j++){
        printf("the value at position %d is %d\n",j,peek(sp,j));
    }
    return 0;
}