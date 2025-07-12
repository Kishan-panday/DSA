#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
void print(struct node *head){
    struct node *p = head;
    if (head== NULL)
    {
       printf("empty");
    }
    
    do
    {
        printf("%d->",p->data);
        p = p->next;
       
    } while (p!=head);
    printf(" Return to head %d ",head->data);
    
}
struct node * insert(struct node* head,int data,int index){
    struct node * new = (struct node*)malloc(sizeof(struct node));
    new->data = data;
    struct node *p= head;
    int i =0; 
    while (i!= index-1)
    {
       p = p->next;
       i++
    }
    new->next = p->next;
    p->next = new;
    return head;

}

int main(){
    struct node * head = (struct node *)malloc(sizeof(struct node));
    struct node * first = (struct node *)malloc(sizeof(struct node));
    struct node * second = (struct node *)malloc(sizeof(struct node));
    struct node * third = (struct node *)malloc(sizeof(struct node));
        head -> data = 20;
        head->next = first;
        first -> data = 30;
        first->next =second;
        second -> data = 40;
        second ->next = third;
        third ->data = 50;
        third ->next = head;
        insert(head,5,2);
        print(head);
        return 0;
}