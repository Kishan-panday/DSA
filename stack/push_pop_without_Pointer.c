#include<stdio.h>
int top=-1;
int isEmpty(){
    if (top==-1)
    {
        return 1;
    }
    return 0;
}
int isFull(int n){
    if (top==n-1)
    {
        return 1;
    }
    return 0;
}
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int arr[n];
for (int i = 0; i < n; i++) {
        int val;
        printf("Enter value to push: ");
        scanf("%d", &val);
        if (isFull(n)) {
            printf("Stack overflow!\n");
        } else {
            top++;
            arr[top] = val;
            printf("Pushed %d\n", val);
        }
        
    }

    // Print current stack
    printf("\nStack contents (top to bottom):\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }

    // Check if stack is empty
    if (isEmpty()) {
        printf("Stack is empty\n");
    } else {
        printf("Stack is not empty\n");
    }

    // Check if stack is full
    if (isFull(n)) {
        printf("Stack is full\n");
    } else {
        printf("Stack is not full\n");
    }

    return 0;
}