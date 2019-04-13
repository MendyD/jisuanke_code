
/*************************************************************************
	> File Name: 15_15.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 五  1/11 21:21:27 2019
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node *next;
} Node;

Node *circle_create(int n);
void count_off(Node *head, int n, int k, int m);

int main() {
    int n, k, m;
    scanf("%d%d%d", &n, &k, &m);
    Node *head = circle_create(n);
    count_off(head, n, k, m);
    return 0;
}

Node *circle_create(int n) {
    Node *temp, *new_node, *head;
    int i;

    // 创建第一个链表节点并加数据
    temp = (Node *) malloc(sizeof(Node));
    head = temp;
    head->data = 1;

    // 创建第 2 到第 n 个链表节点并加数据
    for(i = 2; i <= n; i++) {
        new_node = (Node *) malloc(sizeof(Node));
        new_node->data = i;
        temp->next = new_node;
        temp = new_node;
    }

    // 最后一个节点指向头部构成循环链表
    temp->next = head;

    return head;
}

void count_off(Node *head, int n, int k, int m) {
    Node *temp = head;
    int i, j;
    for(i = 1; i < k; i++){
        temp = temp->next;
    }
    //printf("%d\n", head->data);
    while(temp->next != temp){
        if(m != 1){
            j = 1;
            while(j < m - 1){
                temp = temp->next;
                j++;
            }
            printf("%d\n", temp->next->data);
            temp->next = temp->next->next;
            temp = temp->next;
        } else {
            do{
                printf("%d\n", temp->data);
                temp = temp->next;
            } while(temp->next != head);
            break;
        }
    }
    printf("%d\n",temp->data);
    return ;
}
