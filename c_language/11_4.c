/*************************************************************************
	> File Name: 11_4.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 五 12/21 14:35:09 2018
 ************************************************************************/

#include <stdio.h>

int main() {
    int matrix_a[10][10];
    int matrix_b[10][10];
    int m;
    int n;
    int matrix_c[10][10];
    int i;
    int j;
    int k;
    scanf("%d %d", &m, &n);
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &matrix_a[i][j]);
        }
    }
    for(j = 0; j < n; j++){
        for(i = 0; i < m; i++){
            scanf("%d", &matrix_b[i][j]);
        }
    }
    for(i = 0; i < m; i++){
        for(j = 0; j < m; j++){
            for(k = 0; k < n; k++){
                matrix_c[i][j] += matrix_a[i][k] * matrix_b[k][j];
            }
        }
    }
    for(i = 0; i < m; i++){
        for(j = 0; j < m - 1; j++){
            printf("%d ", matrix_c[i][j]);
        }
        printf("%d\n", matrix_c[i][j]);
    }
    

    return 0;
}
