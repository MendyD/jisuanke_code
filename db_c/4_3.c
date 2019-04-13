/*************************************************************************
	> File Name: 4_3.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course:
	> Created Time: 五  4/12 21:33:23 2019
************************************************************************/

#include<stdio.h>
#include <stdlib.h>
typedef struct Vector{
    int length, size;
    int *data;
} Vector;

void init(Vector *vector, int size){
    vector->length = 0;
    vector->size = size;
    vector->data = (int *)malloc(sizeof(int) * vector->size);
}

int insert(Vector *vector, int val, int ind){

    vector->data[ind] = val;
    vector->length++;
    return 1;
}

void output(Vector *vector){
    for(int i = 0; i < vector->length - 1; i++){
        printf("%d ", vector->data[i]);
    }
    printf("%d\n", vector->data[vector->size - 1]);
}

int test(Vector *a, Vector *b){


    return 1;
}


int main(){
    Vector *a = (Vector *)malloc(sizeof(Vector));
    Vector *b = (Vector *)malloc(sizeof(Vector));
    int n, m, val_a, val_b;
    scanf("%d", &n);
    init(a, n);
    for(int i = 0; i < n; i++){
        scanf("%d", &val_a);
        insert(a, val_a, i);
    }
    scanf("%d", &m);
    init(b, m);
    for(int j = 0; j < m; j++){
        scanf("%d", &val_b);
        insert(b, val_b, j);
          
    }
    output(a);
    output(b);
    return 0;
}
