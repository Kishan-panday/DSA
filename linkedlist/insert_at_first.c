#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};
void printlinkedlist(struct node * head){
    struct node *temp = head;
    while (temp!=NULL)
    {
        printf("%d ->",temp->data);
        temp = temp -> next;
    }
    printf("NULL\n");
}
struct node *insertatfirst(struct node*head ,int data){
    struct node*newnode = (struct node*)malloc(sizeof(struct node));
    newnode ->data =data;
    newnode ->next = head;
    head = newnode;
    return head;
}
int main(){
    struct node * head = (struct node * )malloc(sizeof(struct node));
    struct node * first = (struct node * )malloc(sizeof(struct node));
    struct node * second = (struct node * )malloc(sizeof(struct node));
    struct node * third = (struct node * )malloc(sizeof(struct node));
    head -> data = 20;
    head -> next = first;
    first -> data =30;
    first ->next = second;
    second ->data = 40;
    second -> next = third;
    third -> data = 50;
    third ->next = NULL;
    head = insertatfirst(head ,10);
    printlinkedlist(head);
    
    return 0 ;
}