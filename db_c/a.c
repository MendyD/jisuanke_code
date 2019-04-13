/*************************************************************************
	> File Name: a.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 四  2/14 12:50:09 2019
 ************************************************************************/

#include<stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>

int count = 0;

int main(){

    int pid = fork();
    if (pid==0){
        count++;
        int pid2 = fork();
        if (pid2 == 0){
            char** argv = (char**) malloc(3*sizeof(char*));
            argv[0] = "echo";
            argv[1] = "Hello!";
            argv[2] = NULL;
            int pid3 = fork();
            count++;
            if (pid3 == 0){
                count++;
                execvp("echo", argv);
                printf("Count %d,",count);
                exit(0);
            } else {
                free(argv);
                wait(NULL);
                printf("%d,",count);
                exit(0);
            }
        } else {
            wait(NULL);
            printf("%d,",count);
            exit(0);
        }
    } else {
        wait(NULL);
        printf("%d.",count);
        return 0;
    }    
}
