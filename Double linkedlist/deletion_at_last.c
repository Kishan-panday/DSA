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
struct node *delete(struct node*head){
   struct node*p=head;
   struct node*q=head->next;
   while (q->next!=NULL)
   {
   p = p->next;
   q = q->next;
   }
    p->next =NULL;
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
    head=delete(head);
    print(head);
    return 0;
}