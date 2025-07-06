#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void printlinkedlist(struct node* head){
    struct node * temp = head;
    while(temp!=NULL){
      printf("%d->",temp -> data);
      temp =temp->next;
    }
    printf("NULL\n");
}
void insertatmiddle(struct node* head,int data,int index){
    struct node*newnode = (struct node*)malloc(sizeof(struct node));
    struct node* p= head;
    newnode->data =data;
    int i=0;
    while (i!= index-1)
    {
        p=p->next;
        i++;
    }
    newnode ->next= p->next ;
    p->next = newnode;
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
    insertatmiddle( head,35,2);
    printlinkedlist(head);
    return 0 ;
}