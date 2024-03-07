#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

void push(Node** head_ref, int new_data) {
    Node* new_node = (Node*) malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Помилка виділення пам'яті для нового вузла.\n");
        return;
    }
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void print(Node *node) {
    while (node != NULL) {
        printf(" %d ", node->data);
        node = node->next;
    }
}

int main() {
    Node* head = NULL;
 
    push(&head, 10);
    push(&head, 26);
    push(&head, 90);
    push(&head, 59);
 
    printf("Сформований список: ");
    print(head);
 
    return 0;
}