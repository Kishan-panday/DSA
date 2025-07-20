#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack * ptr){
    if (ptr->top==-1)
    {
        return 1;
    }
    return 0;
}
int isFull(struct stack * ptr){
    if (ptr->top==ptr->size-1)
    {
        return 1;
    }
    return 0;
}
int main(){
     struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    printf("Enter the size:");
    scanf("%d",&s->size);
    printf("size is %d\n",s->size);
        
        s->top=-1;
        s->arr= (int *)malloc(s->size* sizeof(int));
        // pushed
    for (int i = 0; i < s->size; i++)
    {
        
       if (isFull(s)) {
           printf("Stack overflow:");
        }else{
             s->top++;
            s->arr[s->top] = i + 1; 
        }
        printf("Pushed element is:  %d\n",s->arr[s->top]);
    }
      int value;
      //   poped
        for (int i = 0; i < s->size; i++)
    {
    
       if (isEmpty(s)) {
           printf("Stack underflow:");
        }else{
             value = s->arr[s->top]; 
            s->top--;
        }
        printf("Poped element is:  %d\n",value);
    }
    if (isEmpty(s))
    {
       printf("Stack is Underflow\n");
    }else{
        printf("Stack is not Empty\n");
    }
     if (isFull(s))
    {
       printf("Stack is Overflow\n");
    }else{
        printf("Stack is not Full\n");
    }
    
    return 0;
}