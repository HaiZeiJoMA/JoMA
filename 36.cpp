/*************************************************************************
	> File Name: 36.cpp
	> Author: hug
	> Mail:   hug@haizeix.com
	> Created Time: 二  7/31 14:25:21 2018
 ************************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int is_valid(int x, int base) {
    int temp = x, sum = 0;
    while (x) {
        sum = sum * base + x % base;
        x /= base;
    }
    return sum == temp;
}

int main() {
    int sum = 0;
    for (int i = 1; i <= 1000000; i++) {
        is_valid(i, 2) && is_valid(i, 10) && (sum += i, printf("%d\n", i));
    }
    printf("%d\n", sum); 
    return 0;
}
