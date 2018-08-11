/*************************************************************************
	> File Name: test2.c
	> Author: 
	> Mail: 
	> Created Time: 一  7/23 18:48:54 2018
 ************************************************************************/

#include<stdio.h>
int main() {
    int a = 0, b = 1, sum = 0;
    int temp;
while (a + b <= 4000000) {
        temp = a + b;
        a = b;
        b = temp;
        if (b & 1) continue;
        sum += b;
    }
    printf("%d\n", sum);
    return 0;
}
