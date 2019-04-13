/*************************************************************************
	> File Name: 15_5.c
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 三  1/ 2 16:55:12 2019
 ************************************************************************/

#include <stdio.h>
#include <math.h>

struct point {
    int x;
    int y;
};
struct rectangle {
    struct point p1;
    struct point p2;
};

int main() {
    int x, y;
    struct rectangle rect;
	scanf("%d %d", &x, &y);
    scanf("%d %d %d %d", &rect.p1.x, &rect.p1.y, &rect.p2.x, &rect.p2.y);
    if(((x >= rect.p1.x && x <= rect.p2.x) || (x <= rect.p1.x && x >= rect.p2.x)) && ((y >= rect.p1.y && y <= rect.p2.y) || (y <= rect.p1.y && y >= rect.p2.y))){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
