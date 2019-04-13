/*************************************************************************
	> File Name: 11_3.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 四 12/20 21:25:08 2018
 ************************************************************************/

#include<stdio.h>

int main() {
    int arr_three[3][3];
    int arr_two[2][2];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &arr_three[i][j]);
        }
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d", &arr_two[i][j]);
        }
    }
    int sum;
    int sum_three = arr_three[0][0] * arr_three[1][1] * arr_three[2][2] + arr_three[1][0] * arr_three[2][1] * arr_three[0][2] + arr_three[0][1] * arr_three[1][2] * arr_three[2][0] - arr_three[0][2] * arr_three[1][1] * arr_three[2][0] - arr_three[0][1] * arr_three[1][0] * arr_three[2][2] - arr_three[1][2] * arr_three[2][1] * arr_three[0][0];
    int sum_two = arr_two[0][0] * arr_two[1][1] - arr_two[0][1] * arr_two[1][0];
    if(sum_three > sum_two){
        sum = sum_three;
    } else {
        sum = sum_two;
    }
    printf("%d", sum);
    return 0;
}
