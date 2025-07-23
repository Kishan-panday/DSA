#include<Stdio.h>
int top=-1;
int main(){
    int n;
    printf("Enter the size of arr:");
    scanf("%d",&n);
    int arr[n];
    // pushed
    for (int  i = 0; i <n; i++)
    {
       int val;
       printf("Enter the value:");
       scanf("%d",&val);
       if(top ==n-1){
        printf("Stack  overflow:");
       }else{
        top++;
        arr[top]=val;
        printf("Elements  is %d pushed\n ",val);
       }
       
    }
    // peek
   
        if(top==-1){
            printf("Stack is empty\n");
        }else{
            printf("The top element is %d\n",arr[top]);
        }
    // poped
    for (int  i = 0; i < n; i++)
    {
        int val;
   
       if(top==-1){
        printf("Stack is underflow:");
       }
       else{
         val=arr[top];
         top--;
         printf("Elements %d is poped\n ",val);
       }
    }
    // peek
   
        if(top==-1){
            printf("Stack is empty\n");
        }else{
            printf("The top element is %d\n",arr[top]);
        }
    
    

    return 0;
}