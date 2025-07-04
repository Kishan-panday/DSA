#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
    
};
int main(){
struct node * head = (struct node * )malloc (sizeof(struct node));
struct node * second = (struct node * )malloc (sizeof(struct node));
struct node * third = (struct node * )malloc (sizeof(struct node));
head -> data = 2;
head -> next = second;
second -> data = 4;
second -> next = third;
third -> data = 6;
third -> next = NULL;
return 0 ;
}