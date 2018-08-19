/*************************************************************************
	> File Name: 48.cpp
	> Author: HaiZeiJoMA
	> Mail: 860007544@qq.com
	> Created Time: Sun 19 Aug 14:32:51 2018
 ************************************************************************/

#include <iostream>
#include <string.h>
#include <inttypes.h>
 
#define MOD_NUM 10000000000
#define DIGS 10000
 
int64_t multiMod(int64_t n, int64_t m) {
    int64_t a, b, c, d, ans = 0;
    a = n / DIGS; b = n % DIGS;
    c = m / DIGS; d = m % DIGS;
    ans = ((a * c)) % MOD_NUM;
    ans = (((ans * DIGS) % MOD_NUM) * DIGS) % MOD_NUM;
    ans = (ans + (((a * DIGS) % MOD_NUM) * d)) % MOD_NUM;
    ans = (ans + (((b * DIGS) % MOD_NUM) * c)) % MOD_NUM;
    ans = (ans + b * d) % MOD_NUM;
    return ans;
}
 
int64_t quickMod(int64_t n, int64_t m) {
    int64_t ans = 1, temp = n;
    while (m) {
        if (m % 2) ans = multiMod(ans, temp);
        temp = multiMod(temp, temp);
        m >>= 1;
    }
    return ans;
}
 
int32_t main() {
    int64_t sum = 0, temp;
    for (int32_t i = 1; i <= 1000; i++) {
        temp = quickMod(i, i);
        printf("%"PRId64"\n", temp);
        sum += temp;
    }
    printf("%"PRId64"\n", sum % MOD_NUM);
    return 0;
}
