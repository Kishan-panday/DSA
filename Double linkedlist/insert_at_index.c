#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node*next;
};
void print(struct node *head){
    struct node*p=head;
    while(p!=NULL){
        printf("%d->",p->data);
        p=p->next;
    }
    printf("NULL");
}
struct node *insert(struct node*head,int data,int index){
   struct node *new= (struct node*)malloc(sizeof(struct node));
   new->data=data;
   struct node *p = head;
   struct node *q= head->next;
int i=0;
   while(i<index-1 && p ->next!=NULL){
    p=p->next;
    q=q->next;
    i++;
   }
   p->next=new;
   new->prev= p;
   q->prev=new;
   new->next=q;
   
   return head;
}
int main(){
    struct node * head = (struct node*)malloc(sizeof(struct node));
    struct node * first = (struct node*)malloc(sizeof(struct node));
    struct node * second= (struct node*)malloc(sizeof(struct node));
    head ->prev= NULL;
    head->data= 10;
    head->next= first;
    first ->prev= head;
    first->data= 20;
    first->next= second;
    second->prev= first;
    second->data= 30;
    second->next=NULL;
    head=insert(head,50,1);
    print(head);
    return 0;
}