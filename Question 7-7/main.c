//
//  main.c
//  Question 7-7
//
//  Created by 하동훈 on 2021/01/05.
//

#include <stdio.h>

int rec_func(int n);

int main(void) {
    int res;
    res = rec_func(10);
    printf("%d\n", res);
    return 0;
}

int rec_func(int n) {
    if (n == 1) return 1;
    else return(n + rec_func(n - 1));
}
