#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
void printlinked(struct node *head){
    struct node *p =head;
    while(p!=NULL){
        printf("%d->",p->data);
        p = p ->next;
    }
    printf("NULL");
}
struct node *delete(struct node * head,int index){
    struct node *p = head;
    struct node *q=head ->next;
     for (int i = 0; i < index-1; i++)
     {
        p = p->next;
        q= q->next;
     }
     p->next = q->next;
    free(q);
    return head;
}
int main(){
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
       struct node *third = (struct node *)malloc(sizeof(struct node));
       head ->data = 10;
       head ->next = first;
       first ->data = 20;
       first -> next = second;
       second -> data =30;
       second ->next = third;
       third -> data =40;
       third -> next = NULL;
        delete(head,2);
        printlinked(head);
       return 0;
}