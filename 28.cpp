/*************************************************************************
	> File Name: 28.cpp
	> Author: hug
	> Mail:   hug@haizeix.com
	> Created Time: 二  7/31 14:13:32 2018
 ************************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    int sum = 1;
    for (int i = 3; i <= 1001; i += 2) {
        for (int j = 0; j < 4; j++) {
            sum += i * i - j * (i - 1);
        }
    }
    printf("%d\n", sum);
    return 0;
}
