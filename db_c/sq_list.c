/*************************************************************************
	> File Name: sq_list.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 四  2/14 01:04:27 2019
 ************************************************************************/

#include<stdio.h>
#include <stdlib.h>

typedef struct Vector{
    int size;
    int length;
    int *data;
} Vector;

void init(Vector *vector, int size){
    vector->size = size;
    vector->length = 0;
    vector->data = (int *)malloc(sizeof(int) * size);
}

void expand(Vector *vector){
    int *old_data = vector->data;
    vector->size = vector->size * 2;
    vector->data = (int *)malloc(sizeof(int) * vector->size);
    for(int i = 0; i < vector->length; i++){
        vector->data[i] = old_data[i];
    }
    free(old_data);
}

int insert(Vector *vector, int loc, int value){
    if(loc < 0 || loc > vector->length){
        return 0;//ERROR;
    }
    if(vector->length >= vector->size){
        return 0;//ERROR;
    }
    for(int i = vector->length; i > loc; i--){
        vector->data[i] = vector->data[i - 1];
    }
    vector->data[loc] = value;
    vector->length++;
    return 1;//OK;
}

void clear(Vector *vector){
    free(vector->data);
    free(vector);
}

int main(){
    Vector *a = (Vector *)malloc(sizeof(Vector));
    init(a, 100);
    printf("%d\n", insert(a, 1, 0));
    printf("%d\n", insert(a, 0, 1));
    printf("%d\n", insert(a, 2, 1));
    printf("%d\n", insert(a, 1, 2));
    printf("%d\n", insert(a, 0, 3));
    clear(a);
    return 0;
}
