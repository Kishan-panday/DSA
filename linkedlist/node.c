#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main(){
    struct node *head = (struct node*) malloc (sizeof(struct node));
    head -> data = 40;
    head -> next = NULL;
    return 0;

}