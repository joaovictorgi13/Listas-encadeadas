#include <stdlib.h>
#include <stdio.h>
// Estrutura que representa um nó de uma lista encadeada
typedef struct LinkedListNode {
    int data; // Valor armazenado no nó
    struct LinkedListNode *next; // Ponteiro para o próximo nó
} LinkedListNode;

int main() {
    // Criação do primeiro nó (head)
    LinkedListNode *head = malloc(sizeof(LinkedListNode));
    head->data = 1;

    // Criação do segundo nó (head)
    LinkedListNode *node1 = malloc(sizeof(LinkedListNode));
    node1->data = 2;
    head->next = node1; // head aponta para o node1

    // Criação do terceiro nó
    LinkedListNode *node2 = malloc(sizeof(LinkedListNode));
    node2->data = 3;
    node1->next = node2; // node1 aponta para node2

    // Criação do quarto nó
    LinkedListNode *node3 = malloc(sizeof(LinkedListNode));
    node3->data = 4;
    node2->next = node3; // node2 aponta para node3


    node3->next = NULL;   // Último nó aponta para NULL (fim da lista)

    // Cursor para percorrer a lista
    LinkedListNode *cursor = head;

    while (cursor != NULL) {  
        printf("-> %d ", cursor->data); // Imprime o valor do nó atual
        cursor = cursor->next; // Move para o próximo nó
    }

    printf("\n");

    // Liberação da memória alocada (evita vazamento de memória)
    free(head);
    free(node1);
    free(node2);
    free(node3);

    return 0;
}
