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
struct node *delete(struct node*head,int index){
   struct node*p=head;
   struct node*q=head->next;
   int i=0;
   while (i!=index-1)
   {
   p = p->next;
   q = q->next;
   i++;
   }
    p->next =q->next;
   free(q);
   return head;
}
int main(){
    struct node * head = (struct node*)malloc(sizeof(struct node));
    struct node * first = (struct node*)malloc(sizeof(struct node));
    struct node * second= (struct node*)malloc(sizeof(struct node));
    struct node * third= (struct node*)malloc(sizeof(struct node));
    head ->prev= NULL;
    head->data= 10;
    head->next= first;
    first ->prev= head;
    first->data= 20;
    first->next= second;
    second->prev= first;
    second->data= 30;
    second->next=third;
    third->prev =second;
    third->data=40;
    third->next = NULL;
    head=delete(head,2);
    print(head);
    return 0;
}