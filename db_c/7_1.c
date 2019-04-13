/*************************************************************************
	> File Name: 7_1.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 日  2/17 20:09:12 2019
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int *type;
    int *num;
    int head;
} Node;

void init(Node *n){
    n->type = (int *)malloc(sizeof(int) * 10);
    n->num = (int *)malloc(sizeof(int) * 10);
    n->head = 0;
}


int main(){

    Node *node = (Node *)malloc(sizeof(Node));
    for(int i = 1; i <= 10; i++){
        scanf("%d %d", node->type, node->num);
    }
    for(int i = 1; i <= 10; i++){
        if(node->type[i] == 0){
            printf("%d", node->num[i]);
        }
    }
    return 0;
}
