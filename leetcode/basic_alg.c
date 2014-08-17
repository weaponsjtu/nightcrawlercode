#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node {
    int data;
    Node* next;
    Node* pre;
};

// double link list, copy
void dblist_copy(Node* src, Node* dst) {
    Node* src_ptr = src;
    Node* dst_ptr = dst;
    dst_ptr->data = head->data;
    dst_ptr->pre = NULL;
    while (src_ptr->next != NULL) {
        Node* ptr = (Node*)malloc(sizeof(Node));
        src_ptr = src_ptr->next;
        ptr->data = src_ptr->data;
        ptr->next = NULL;
        ptr->pre = NULL;
        dst_ptr->next = ptr;
        dst_ptr = ptr;
    }

    while (src_ptr->pre != NULL) {
        Node* ptr = (Node*)malloc(sizeof(Node));
        src_ptr = src_ptr->pre;
        dst_ptr->pre = ptr;
        dst_ptr = ptr;
    }
}

char* palindrome_str(char* data, int len) {
    if (len % 2 == 1) {
        


int main(int argc, char* argv[]) {
    //TODO
    return 0;
}
