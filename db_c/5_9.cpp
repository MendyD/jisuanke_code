/*************************************************************************
	> File Name: 5_9.cpp
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 六  2/16 20:13:34 2019
 ************************************************************************/

#include<stdio.h>
#include <stdlib.h>

#define ERROR 0
#define OK 1

typedef struct Queue{
    int *data;
    int head, tail, length;
}Queue;

void init(Queue *q, int length) {
    q->data = (int *)malloc(sizeof(int) * length);
    q->head = 0;
    q->tail = -1;
    q->length = length;
}

int push(Queue *q, int element) {
	if(q->tail + 1 >= q->length){
        return ERROR;
    }
    q->tail++;
    q->data[q->tail] = element;
    return OK;
}
void output(Queue *q) {
    int i;
    for(i = q->head; i < q->tail; i++){
        printf("%d ", q->data[i]);
    }
    printf("%d\n", q->data[i]);
}
int front(Queue *q) {
    return q->data[q->head];
}
void pop(Queue *q) {
    q->head++;
}

int empty(Queue *q) {
    return q->head > q->tail;
}

void clear(Queue *q) {
    free(q->data);
    free(q);
}

int main() {
    Queue *queue = (Queue *)malloc(sizeof(Queue));
    init(queue, 100);
    int m;
    scanf("%d", &m);
    for(int i = 0; i < m; i++){
        scanf("%d", &queue->data[i]);
        push(queue, queue->data[i]);
    }
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        pop(queue);
    }
    printf("%d\n", queue->data[queue->head]);
    output(queue);
    clear(queue);
    
    return 0;
};

