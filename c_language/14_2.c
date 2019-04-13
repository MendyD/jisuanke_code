/*************************************************************************
	> File Name: 14_2.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 日 12/23 18:06:29 2018
 ************************************************************************/
#include <stdio.h>
#include <string.h>
int mod_value(char x){
    int sum = 0;
    switch (x) {
        case 'r': return 4;;
        case 'w': return 2;
        case 'x': return 1;
        default: printf("ERROR\n");
    }
    return 0;
}
int main() {
    char input[3];
    char symbol[2];
    int sum = 0;
    scanf("%s", input);
    for(int i = 0; i < strlen(input); i++){
        sum += mod_value(input[i]);
    }
    sum = mod_value(input[0]);
    while(scanf("%s", symbol)){
        switch(symbol[0]){
            case '+': 
                sum += mod_value(symbol[1]);
                break;
            case '-':
                sum -= mod_value(symbol[1]);
                break;
            default: printf("ERROR\n");
        }
    }
    printf("%d\n", sum);
    return 0;
}
