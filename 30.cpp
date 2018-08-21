/*************************************************************************
	> File Name: 30.cpp
	> Author: hug
	> Mail:   hug@haizeix.com
	> Created Time: 二  7/31 14:15:51 2018
 ************************************************************************/

#include <stdio.h>
#include <math.h>

#define nine_multi ((int)pow(9, 5))
#define MAX_N (nine_multi * 6)

int is_valid(int x) {
    int temp = x, sum = 0;
    while (x) {
        sum += (int)pow(x % 10, 5);
        x /= 10;
    }
    return temp == sum;
}

int main() {
    int sum = 0;
    for (int i = 2; i <= MAX_N; i++) {
        if (is_valid(i)) sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
