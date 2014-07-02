#include <stdio.h>
#include <stdlib.h>

typedef struct _Node {
    int data;
    struct _Node* next;
} Node;

int main(int argc, char* argv[]) {
    Node* head = (Node*)malloc(sizeof(Node));
    head->data = 0;
    Node* tmp = head;

    for (int i = 1; i < 10; i++) {
        Node* ptr = (Node*)malloc(sizeof(Node));
        ptr->data = i;
        ptr->next = NULL;
        tmp->next = ptr;
        tmp = ptr;
    }

    tmp = head;
    while (tmp != NULL) {
        printf("ptr's data = %d\n", tmp->data);
        tmp = tmp->next;
    }
    return 0;
}
