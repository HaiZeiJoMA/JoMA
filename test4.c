/*************************************************************************
	> File Name: test4.c
	> Author: 
	> Mail: 
	> Created Time: 一  7/23 21:11:23 2018
 ************************************************************************/

#include<stdio.h>

int is_palindromic(int x) {
    int temp = x, num = 0;
    while (x) {
        num = num * 10 + x % 10;
        x /= 10;
    } 
    return temp == num;
}

int main() {
    int ans = 0;
    for (int i = 100; i < 1000; i++) {
        for (int j = i; j < 1000; j++) {
            if (i * j < ans) continue;
            if (!is_palindromic(i * j)) continue;
            ans = i * j;
        }
    }
    printf("%d\n", ans);
    return 0;
}

