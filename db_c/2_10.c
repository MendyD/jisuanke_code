/*************************************************************************
	> File Name: 2_10.c
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
    printf("expand\n");
}

int insert(Vector *vector, int loc, int value){
    if(loc < 0 || loc > vector->length){
        return 0;
    }
    if(vector->length >= vector->size){
        expand(vector);
    }
    for(int i = vector->length; i > loc; i--){
        vector->data[i] = vector->data[i - 1];
    }
    vector->data[loc] = value;
    vector->length++;
    return 1;
}

void clear(Vector *vector){
    free(vector->data);
    free(vector);
}

int main(){
    Vector *a = (Vector *)malloc(sizeof(Vector));
    init(a, 5);
	int n;
    int p, q;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &p, &q);
        if(insert(a, p, q)){
            printf("success\n");
        } else {
            printf("failed\n");
        }
    }
    clear(a);
    return 0;
}
