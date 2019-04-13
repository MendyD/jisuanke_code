
/*************************************************************************
	> File Name: 11_1.cpp
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 三 12/19 18:46:43 2018
 ************************************************************************/

#include <stdio.h>
int num;
void upper_case_count(char arr[31]) {
    // 请在下面实现统计并输出大写字母个数的功能
    num = 0;
    for(int i = 0; i < 31; i++){
        if(arr[i] <= 'Z' && arr[i] >= 'A'){
            num++;
        }
    }
    printf("%d\n", num);
}
void lower_case_count(char arr[31]) {
    // 请在下面实现统计并输出小写字母个数的功能
    num = 0;
    for(int i = 0; i < 31; i++){
        if(arr[i] <= 'z' && arr[i] >= 'a'){
            num++;
        }
    }
    printf("%d\n", num);
}
void digit_count(char arr[31]) {
    // 请在下面实现统计并输出数字个数的功能
    num = 0;
    for(int i = 0; i < 31; i++){
        if(arr[i] <= '9' && arr[i] >= '0'){
            num++;
        }
    }
    printf("%d\n", num);
}
void space_count(char arr[31]) {
    // 请在下面实现统计并输出空格个数的功能
    num = 0;
    for(int i = 0; i < 31; i++){
        if(arr[i] == ' '){
            num++;
        }
    }
    printf("%d\n", num);
}

int main() {
    char string[31];
    int i;
    for(i = 0; i < 31; i++){
        scanf("%c", &string[i]);
    }
    upper_case_count(string);
    lower_case_count(string);
    digit_count(string);
    space_count(string);
    return 0;
    
}

