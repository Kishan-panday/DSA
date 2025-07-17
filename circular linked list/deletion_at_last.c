#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
void print(struct node*head){
    if(head==NULL){
        printf("circular linked list is empty");
    }
    struct node*p=head;
    do
    {
        printf("%d->",p->data);
        p=p->next;
    } while (p!=head);
    printf("%d",head->data);
}
struct node*delete(struct node*head){
    struct node *p=head;
    struct node *q= p->next;
    while(q->next!=head){
        p=p->next;
        q=q->next;
    }
    p->next=head;
    free(q);
    return head;
}
int main(){
    struct node * head =(struct node*)malloc(sizeof(struct node));
    struct node * first =(struct node*)malloc(sizeof(struct node));
    struct node * second =(struct node*)malloc(sizeof(struct node));
    struct node * third =(struct node*)malloc(sizeof(struct node));
    head->data = 10;
    head->next = first;
    first->data= 20;
    first->next= second;
    second->data= 30;
    second->next= third;
    third->data=40;
    third->next=head;
    delete(head);
    print(head);
    return 0;
}