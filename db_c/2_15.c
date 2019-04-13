/*************************************************************************
	> File Name: 2_15.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 四  2/14 03:03:13 2019
 ************************************************************************/

#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>

#define ERROR 0
#define OK 1

typedef struct Vector {
	int size, length;
    int *data;
} Vector;

void init(Vector *vector, int size) {
	vector->length = 0;
    vector->size = size;
    vector->data = (int *)malloc(sizeof(int) * size);
}

void expand(Vector *vector) {
	int *old_data = vector->data;
    vector->size *= 2;
    vector->data = (int *)malloc(sizeof(int) * vector->size);
    for(int i = 0; i < vector->length; i++){
        vector->data[i] = old_data[i];
    }
    free(old_data);
}

int insert(Vector *vector, int loc, int value) {
	if(loc < 0 || loc > vector->length){
        return ERROR;
    }
    if(vector->length >= vector->size){
        expand(vector);
    }
    for(int i = vector->length; i > loc; i--){
        vector->data[i] = vector->data[i - 1];
    }
    vector->data[loc] = value;
    vector->length++;
    return OK;
}

int search(Vector *vector, int value) {
	for(int i = 0; i < vector->length; i++){
        if(vector->data[i] == value){
            return OK;
        }
    }
    return ERROR;
}

int delete_node(Vector *vector, int loc) {
	if(loc < 0 || loc > vector->length){
        return ERROR;
    }
    for(int i = loc + 1; i < vector->length; i++){
        vector->data[i - 1] = vector->data[i];
    }
    vector->length--;
    return OK;
}

void print(Vector *vector) {
	for(int i = 0; i < vector->length; i++){
        if(i > 0){
            printf(" ");
        }
        printf("%d", vector->data[i]);
    }
    printf("\n");
}

void clear(Vector *vector) {
	free(vector->data);
    free(vector);
}

int main() {
    Vector *a = (Vector *)malloc(sizeof(Vector));
    init(a, 20);
	int m, t, p, q;
    scanf("%d", &m);
    for(int i = 0; i < m; i++){
        scanf("%d", &t);
        switch(t){
            case 1:
                scanf("%d %d", &p, &q);
                printf("%s\n", insert(a, p, q) == OK ? "success" : "failed");
                break;
            case 2:
                scanf("%d", &p);
                printf("%s\n", delete_node(a, p) == OK ? "success" : "failed");
                break;
            case 3:
                scanf("%d", &q);
                printf("%s\n", search(a, q) == OK ? "success" : "failed");
                break;
            case 4:
                print(a);
                break;
            default:break;
        }
    }
    return 0;
}

