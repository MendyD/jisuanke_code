/*************************************************************************
	> File Name: 14_1.cpp
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 日 12/23 16:47:58 2018
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main() {
    int num = 0;
    char a[100];
    char ans[100];

    int n;
    scanf("%d\n", &n);

    int i, j;
    for(i = 0; i < n; ++i){
        j = 0;
        while(scanf("%c", &a[j])){
            j++;
            if(a[j - 1] == '\n'){
                a[j] = '\0';
                break;
            }
        }
        if(num < strlen(a)){
            num = strlen(a);
            strcpy(ans, a);
        }
    }
    printf("%s", ans);    
    return 0;
}
