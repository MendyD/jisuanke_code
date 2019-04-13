/*************************************************************************
	> File Name: 11_2.cpp
	> Author: Mendy
	> Mail: dolai_c@163.com
	> Course: 
	> Created Time: 四 12/20 20:36:14 2018
 ************************************************************************/
#include <stdio.h>
int gcd(int n, int m);
int lcm(int n, int m);
int main() {
    int n, m;
    scanf("%d%d", &n, &m);  
    printf("%d\n", gcd(n, m));
    printf("%d\n", lcm(n, m));
    return 0;
}
int gcd(int n, int m) {
    int t;
    if (m <= n) {
    // 请在这里继续完成 gcd 函数
        while(m != 0){
            t = n % m;
        	n = m;
        	m = t;
        }
        return n;
    } else {
        return gcd(m, n);
    }
}
int lcm(int n, int m) {
// 请在这里继续完成 lcm 函数
	int lcm = n * m / gcd(n, m);
    return lcm;
}
