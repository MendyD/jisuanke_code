/*************************************************************************
	> File Name: pointer_swap.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 日 12/23 11:27:27 2018
 ************************************************************************/

#include<stdio.h>
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int n, m;
    int* a = &n;
    scanf("%d %d", &n, &m);
    swap(&n, &m);
    printf("%d %d\n", n, m);
    printf("%p %d\n", a, *a);
    return 0;
}
