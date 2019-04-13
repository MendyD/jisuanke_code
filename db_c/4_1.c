/*************************************************************************
	> File Name: 4_1.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 顺序表循环左移
	> Created Time: 四  4/11 22:39:44 2019
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

void test(Vector *vector, int m){
    int i = 0;
    while(m - i){
        vector->data[vector->length] = vector->data[0];
        for(int j = 0; j < vector->length; j++){
            vector->data[j] = vector->data[j + 1];
        }
        i++;
    }

}

int main(){
    Vector *v = (Vector *)malloc(sizeof(Vector));
    int n, m, val;
    scanf("%d %d", &n, &m);
    init(v, n);
    for(int i = 0; i < n; i++){
        scanf("%d", &val);
        insert(v, val, i);
    }
    test(v, m);
    output(v);


    return 0;
}
