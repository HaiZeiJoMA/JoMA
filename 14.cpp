/*************************************************************************
	> File Name: 14.cpp
	> Author: hug
	> Mail:   hug@haizeix.com
	> Created Time: 二  7/31 14:43:15 2018
 ************************************************************************/

#include <iostream>
#include <cinttypes>
using std::cin;
using std::cout;
using std::endl;

int64_t get_length(int64_t x) {
    if (x == 1) return 1;
    return (x & 1 ? get_length(3 * x + 1) : get_length(x >> 1)) + 1;
}

int main() {
    int64_t ans = 0, max_length = 0;
    for (int i = 10; i < 1000000; i++) {
        int64_t temp = get_length(i);
        if (temp < max_length) continue;
        max_length = temp;
        ans = i;
    }
    printf("%" PRId64 "\n", ans); 
    return 0;
}

