/*************************************************************************
	> File Name: test36.c
	> Author: 
	> Mail: 
	> Created Time: 日  7/22 15:34:30 2018
 ************************************************************************/

#include<stdio.h>

int is_palindromic(int x, int n) {
    int temp = x, num = 0;
    while(x) {
        num = num * n + x % n;
        x = x / n;
    }
    return temp == num;
}

int main() {
    int ans = 0;
    for(int i = 1; i <= 1000000; i++) {
        if(!is_palindromic(i, 2)) continue;
        if(!is_palindromic(i, 10)) continue;
        ans += i;
    }
    printf("%d\n", ans);
    return 0;
}
