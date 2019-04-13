/*************************************************************************
	> File Name: a.cpp
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 日 12/23 11:41:41 2018
 ************************************************************************/
#include <stdio.h>
#include <string.h>
void harsh(char str[]){
    int arr[32] = {0};
    int bits[32];

    int i, j;
    int len = strlen(str);
    for(i = 1; i <= len; i++){
        arr[i % 32] += str[i - 1];

    }
    for(j = 0; j< 32; j++){
        bits[j] = arr[31 - j] ^ (arr[j] << 1);
        printf("%c", bits[j] % 85 + 34);
    }
    printf("\n");
}
int main() {
	char str[505];
    scanf("%s", str);
    harsh(str);
    return 0;
}
