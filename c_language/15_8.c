/*************************************************************************
	> File Name: 15.8.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 日  1/ 6 20:54:36 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>

typedef struct point {
    int x;
    int y;
} Vector;

int vector_dotprod(Vector v1, Vector v2) {
	return v1.x * v2.x + v1.y * v2.y;
}

int main() {
    Vector v1;
    Vector v2;
    int dotprod_result;

    scanf("%d%d", &(v1.x), &(v1.y));
    scanf("%d%d", &(v2.x), &(v2.y));

    dotprod_result = vector_dotprod(v1, v2);

    printf("%d", dotprod_result);

    return 0;
}
