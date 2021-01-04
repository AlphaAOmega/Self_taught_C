//
//  main.c
//  Question 7-5
//
//  Created by 하동훈 on 2021/01/05.
//

#include <stdio.h>

int sum(int a);

int main(void) {
    sum(10);
    sum(100);

    return 0;
}

int sum(int a) {
    int cnt, res = 0;
    for (cnt = 1; cnt <= a; cnt++) {
        res += cnt;
    }
    printf("1부터 %d까지의 합은 %d입니다.\n", a, res);
    return res;
}
