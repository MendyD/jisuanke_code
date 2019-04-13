/*************************************************************************
 	> File Name: 4_2.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 稀疏多项式，求和P(x)=c0*X^e0+c1*X^e1+...分别用两个顺序表存储系数和次数。分别取用计算,位置同时后移
	> Created Time: 五  4/12 21:01:55 2019
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

int test(Vector *c, Vector *e, int m){
    int sum = 0;
    for(int i = 0; i < c->length; i++){
        int temp = 1;
        for(int j = 0; j < e->data[i]; j++){
            temp *= m;
        }
        sum += c->data[i] * temp;
    }
    return sum;
} 


int main(){
    Vector *c = (Vector *)malloc(sizeof(Vector));
    Vector *e = (Vector *)malloc(sizeof(Vector));
    int n, m, val_c, val_e, sum;
    scanf("%d", &n);
    init(c, n);
    init(e, n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &val_c, &val_e);
        insert(c, val_c, i);
        insert(e, val_e, i);
    }
    scanf("%d", &m);
    sum = test(c, e, m);
    printf("%d\n", sum);


    return 0;
}
