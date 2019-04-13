/*************************************************************************
	> File Name: 7_2.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 日  2/17 21:11:50 2019
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define ERROR 0
#define OK 1

typedef struct Stack{
    int *element;
    int head, length;
}Stack;

void init(Stack *s, int length){
    s->element = (int *)malloc(sizeof(int) * length);
    s->length = length;
    s->head = -1;
}

int push(Stack *s, int element){
    if(s->head >= s->length){
        return ERROR;
    }
    s->head++;
    s->element[s->head] = element;
    return OK;
}

int main(){
    return 0;
}
