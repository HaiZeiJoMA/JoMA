/*************************************************************************
	> File Name: test28.c
	> Author: 
	> Mail: 
	> Created Time: 一  7/23 22:09:34 2018
 ************************************************************************/

#include<stdio.h>

int main() {
    int sum = 1;
    for (int i = 3; i <= 1001; i += 2) {
        sum += 4 * i * i - 6 * i + 6;
    }
    printf("%d\n", sum);
    return 0;
}