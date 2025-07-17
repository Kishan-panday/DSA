#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
};
void print(struct node * head){
    struct node *p= head;
    while (p!=NULL)
    {
        printf("%d->",p->data);
        p=p->next;
    }
    printf("NULL");
}
struct node *insert(struct node* head ,int data){
    struct node * new =(struct node *)malloc(sizeof(struct node));
   
    new->data= data;
    new->next = head;
    head->prev= new;
    new->prev= NULL;
    head=new;
    return head;

    
}
int main(){
    struct node * head =(struct node *)malloc(sizeof(struct node));
    struct node * first =(struct node *)malloc(sizeof(struct node));
    struct node * second =(struct node *)malloc(sizeof(struct node));
    head->prev = NULL;
    head->data = 10;
    head->next = first;
    first->prev=head;
    first->data= 20;
    first->next= second;
    second->prev=first;
    second->data= 30;
    second->next= NULL;
    head=insert(head,5);
    print(head);
    return 0;
}

