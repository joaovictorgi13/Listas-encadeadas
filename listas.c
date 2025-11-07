
typedef struct LinkedListNode {
    int data;
    LinkedListNode* next;
}LinkedListNode;

int main(){

    LinkedListNode *head = malloc(sizeof(LinkedListNode));
    head->data = 1;


    return 0;
}