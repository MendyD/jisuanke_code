/*************************************************************************
	> File Name: 6_11.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 日  2/17 15:22:35 2019
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define ERROR 0
#define OK 1

typedef struct Stack {
    int *element;
    int max_size, top_index;
} Stack;

void init(Stack *s, int length) {
    s->element = (int *)malloc(sizeof(int) * length);
    s->max_size = length;
    s->top_index = -1;
}

int push(Stack *s, int element) {
    if(s->top_index >= s->max_size){
        return ERROR;
    }
    s->top_index++;
    s->element[s->top_index] = element;
    return OK;
}

int pop(Stack *s) {
    if(s->top_index < 0){
        return ERROR;
    }
    s->top_index--;
    return OK;
}

int top(Stack *s) {
    return s->element[s->top_index];
}

int empty(Stack *s) {
    if(s->top_index < 0){
        return 1;
    } else {
        return 0;
    }
}

int precede(char a, char b) {
    if((a == '*' || a == '/') && (b == '+' || b == '-')){
        return 1;
    } else {
        return 0;
    }
}
int operate(char theta, int a, int b) {
    if(theta == '*'){
        return a * b;
    } else if(theta == '/'){
        return b / a;
    } else if(theta == '+'){
        return a + b;
    } else {
        return b - a;
    }
}
void calc(Stack *numbers, Stack *operators) {
    int a = top(numbers);
    pop(numbers);
    int b = top(numbers);
    pop(numbers);
    push(numbers, operate(top(operators), a, b));
    pop(operators);
}

void clear(Stack *s) {
    free(s->element);
    free(s);
}

int main() {
    int n;
    scanf("%d", &n);
    Stack *numbers = (Stack *)malloc(sizeof(Stack));
    init(numbers, n);
    Stack *operators = (Stack *)malloc(sizeof(Stack));
    init(operators, n);
    char *buffer = (char *)malloc(sizeof(char) * (n + 1));
    scanf("%s", buffer);
    int i = 0;
    while(i < n){
        if(isdigit(buffer[i])){
            push(numbers, buffer[i] - '0');
            i++;
        } else {
            if(empty(operators) || precede(buffer[i], top(operators))){
                push(operators, buffer[i]);
                i++;
            } else {
                calc(numbers, operators);
            }
        }
    }
    while(!empty(operators)){
        calc(numbers, operators);
    }
    printf("%d\n", top(numbers));
    clear(numbers);
    clear(operators);
    free(buffer);
    return 0;
}
