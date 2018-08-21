/*************************************************************************
	> File Name: 34.cpp
	> Author: hug
	> Mail:   hug@haizeix.com
	> Created Time: 二  7/31 14:21:08 2018
 ************************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;


#define nine_multi (362880)
#define MAX_N (nine_multi * 7)

int get_num(int n) {
    int ret = 1;
    for (int i = 1; i <= n; i++) {
        ret *= i;
    }
    return ret;
}

int is_valid(int x) {
    int sum = 0, temp = x;    
    while (x) {
        sum += get_num(x % 10);
        x /= 10;
    }
    return sum == temp;
}

int main() {
    int sum = 0;
    for (int i = 3; i <= MAX_N; i++) {
        if (is_valid(i)) sum += i;
    }    
    printf("%d\n", sum);
    return 0;
}
