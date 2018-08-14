/*************************************************************************
	> File Name: test34.c
	> Author: 
	> Mail: 
	> Created Time: 二  7/24 09:22:31 2018
 ************************************************************************/

#include<stdio.h>
#define MAX_N 2540160

void init(int *num) {
    num[0] = 1;
    for (int i = 1; i < 10; i++) {
        num[i] = num[i - 1] * i;
    }
}

bool IsCurious(int n, int *a) {
    if (n <= 2) return false;
    int sum = 0, x = n;
    while (n) {
        sum += a[n % 10];
        n /= 10;
    }
    return sum == x;
}

int solve(int *num) {
    int sum = 0;
    for (int i = 10; i <= MAX_N; i++) {
        if (IsCurious(i, num)) sum += i;
    }
    return sum;
}

int main() {
    int num[10] = {0};
    init(num);
    int sum = solve(num);
    printf("%d\n", sum);
    return 0;
}

