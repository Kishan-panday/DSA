#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void printlinkedlist(struct node*head){
    struct node*temp=head;
    while(temp!=NULL){
     printf("%d->",temp ->data);
      temp= temp ->next;
    }
    printf("NULL");
}
void insertatlast(struct node * head,int data){
    struct node *newnode = (struct node*) malloc (sizeof(struct node));
    newnode ->data=data;
    struct node * p =head;
    
    while(p->next!=NULL){
     p=p->next;
    
    }
    newnode ->next =NULL;
    p->next= newnode;
    
}

int main(){
    struct node * head =(struct node*)malloc(sizeof(struct node));
    struct node * first =(struct node*)malloc(sizeof(struct node));
    struct node * second =(struct node*)malloc(sizeof(struct node));
    head ->data=10;
    head ->next=first;
    first ->data =20;
    first->next = second;
    second->data =30;
    second->next=NULL;
    insertatlast(head,60);
    printlinkedlist(head);
    return 0;
}