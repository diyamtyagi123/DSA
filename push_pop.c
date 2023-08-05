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
int main(){
    struct stack *sp=(struct stack *) malloc(sizeof(struct stack));
    sp->size=10;
    sp->top=-1;
    sp->arr=(int *) malloc(sp->size * sizeof(int));
    push(sp,5);
    printf("%d\n",isempty(sp));
    pop(sp);
    printf("%d",isempty(sp));

    return 0;
}