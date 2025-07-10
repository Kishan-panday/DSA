#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
void printlinkedlist(struct node*head){

    if (head==NULL)
    {
        printf("Circular linked list is empty");
    }
    
    struct node *p = head;
    
    do
    {
        printf("%d->",p->data);
        p= p->next;
    } while (p!=head);
    printf("%d",head->data);

}
struct node * insert(struct node *head,int data){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
     if (head == NULL) {
        newnode->next = newnode; // Points to itself
        return newnode;
    }
    newnode ->data =data;
    struct node *p=head;
     
     while (p->next!=head)
     {
       p = p->next;
       
     }
     p->next = newnode;
     newnode->next = head;
     head = newnode;
     
  return head;
    


}
int main(){
    struct node * head = (struct node*)malloc(sizeof(struct node));
    struct node * first = (struct node*)malloc(sizeof(struct node));
    struct node * second = (struct node*)malloc(sizeof(struct node));
    struct node * third = (struct node*)malloc(sizeof(struct node));
        head -> data = 20;
        head->next = first;
        first -> data = 30;
        first->next =second;
        second -> data = 40;
        second ->next = third;
        third ->data = 50;
        third ->next = head;
       head= insert(head,10);
        printlinkedlist(head);

    return 0;
}