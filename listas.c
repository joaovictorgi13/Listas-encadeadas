#include <stdlib.h>
#include <stdio.h>

typedef struct LinkedListNode {
    int data;
    struct LinkedListNode *next;
} LinkedListNode;

int main() {
    LinkedListNode *head = malloc(sizeof(LinkedListNode));
    head->data = 1;

    LinkedListNode *node1 = malloc(sizeof(LinkedListNode));
    node1->data = 2;
    head->next = node1;

    LinkedListNode *node2 = malloc(sizeof(LinkedListNode));
    node2->data = 3;
    node1->next = node2;

    LinkedListNode *node3 = malloc(sizeof(LinkedListNode));
    node3->data = 4;
    node2->next = node3;

    node3->next = NULL;  

    LinkedListNode *cursor = head;

    while (cursor != NULL) {  
        printf("-> %d ", cursor->data);
        cursor = cursor->next;
    }

    printf("\n");

    free(head);
    free(node1);
    free(node2);
    free(node3);

    return 0;
}
