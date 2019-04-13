
/*************************************************************************
	> File Name: 12_9.cpp
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 四 12/20 15:58:11 2018
 ************************************************************************/
#include <stdio.h>
#include <string.h>
int main() {
	char name[10][20];
    char temp[21];
    for(int i = 0; i < 10; i++){
        scanf("%s", name[i]);
    }
    for(int i = 0; i < 10; i++){
        for(int j = i + 1; j < 10; j++){
            if(strcmp(name[i], name[j]) > 0){
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    for(int i = 0; i < 10; i++){
        printf("%s\n", name[i]);
    }
       
    return 0;
}
