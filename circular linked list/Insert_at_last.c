#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
void print(struct node * head){
    struct node *p=head;
    do
    {
        printf("%d->",p->data);
        p=p->next;
    } while (p!=head);
    printf("%d",head->data);
}
struct node * insert(struct node *head,int data){
    struct node * p = head;
    struct node * new =(struct node *)malloc( sizeof(struct node));
    new ->data = data;
    while(p->next!=head){
        p= p->next;
    }
    p->next= new;
    new->next = head;

    return head;

}

int main(){
    struct node * head = (struct node*)malloc(sizeof(struct node));
    struct node * first = (struct node*)malloc(sizeof(struct node));
    struct node * second = (struct node*)malloc(sizeof(struct node));
    struct node * third = (struct node*)malloc(sizeof(struct node));
    head ->data = 10;
    head ->next = first;
    first-> data = 20;
    first->next = second;
    second -> data = 30;
    second ->next= third;
    third -> data=40;
    third->next = head;
    head = insert(head,100);
    print(head);
    return 0;
}