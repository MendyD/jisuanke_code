
/*************************************************************************
	> File Name: 14_2_1.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 六  1/12 01:19:07 2019
 ************************************************************************/

#include<stdio.h>
int main() {
    char input[3];
    char symbol[2];
    int sum = 0;
    scanf("%s", input);
    if(input[0] == 'r'){
        sum += 7;
    } else if(input[0] == 'w'){
        sum += 3;
    } else {
        sum += 1;
    }

    while(scanf("%s", symbol)){
        if(symbol[0] == '-'){
            if(symbol[1] == 'r'){
                sum -= 4;
            } else if(symbol[1] == 'w'){
                sum -= 2;
            } else {
                sum -= 1;
            }
        } else if(symbol[0] == '+'){
            if(symbol[1] == 'r'){
                sum -= 4;
            } else if(symbol[1] == 'w'){
                sum -= 2;
            } else {
                sum -= 1;
            }
        } else {
            return -1;
        }
    }
    printf("%d\n", sum);
    return 0;
}
