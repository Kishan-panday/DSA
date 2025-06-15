#include <stdio.h>
#include <stdlib.h>

// Define node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory error\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert node at any position
void insertAtPosition(struct Node** head, int data, int position) {
    struct Node* newNode = createNode(data);
    
    if (position == 1) {  // insert at beginning
        newNode->next = *head;
        *head = newNode;
        return;
    }
    
    struct Node* temp = *head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    
    if (temp == NULL) {
        printf("Position out of range\n");
        free(newNode);
        return;
    }
    
    newNode->next = temp->next;
    temp->next = newNode;
}

// Function to display the list
void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    struct Node* head = NULL;

    // Adding nodes manually for testing
    insertAtPosition(&head, 10, 1);  // 10
    insertAtPosition(&head, 20, 2);  // 10 -> 20
    insertAtPosition(&head, 30, 3);  // 10 -> 20 -> 30

    printf("Linked list before insertion:\n");
    display(head);

    int data, pos;
    printf("Enter data to insert: ");
    scanf("%d", &data);
    printf("Enter position to insert: ");
    scanf("%d", &pos);

    insertAtPosition(&head, data, pos);

    printf("Linked list after insertion:\n");
    display(head);

    return 0;
}
