#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node, *LinkedList;

Node insert(LinkedList head, Node *node, int index) {
    if(head == NULL){
        if(index != 0){
            return head;
        }
        head = node;
        return head;
    }
    if(index == 0){
        node->next = head;
        head = node;
        return head;
    }
    Node *current_node = head;
    int count = 0;
    while(current_node->next != NULL && count < index - 1){
        current_node = current_node->next;
        count++;
    }
    if(count == index - 1){
        node->next = current_node->next;
        current_node->next = node;
        
    }
    return head;
}

void output(LinkedList head) {
    Node *p = head;
    while (p) {
        printf("%d", p->data);
        if (p->next) {
            printf(" ");
        }
        p = p->next;
    }
    printf("\n");
}

void clear(LinkedList head) {
    Node *current_node = head;
    while (current_node != NULL) {
        Node *delete_node = current_node;
        current_node = current_node->next;
        free(delete_node);
    }
}

int main() {
    LinkedList linkedlist = NULL;
    Node *p, ret;
    int n, num, loc;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d%d", &loc, &num);
        p = (Node *)malloc(sizeof(Node));
        p->data = num;
        p->next = NULL;
        ret = insert(linkedlist, p, loc);
        linkedlist = ret.next;
        printf("%s\n", ret.data ? "success" : "failed");
    }
    output(linkedlist);
    clear(linkedlist);
    return 0;
}
