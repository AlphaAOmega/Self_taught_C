//
//  main.c
//  4-5 Relational operator
//
//  Created by 하동훈 on 2020/12/30.
//

#include <stdio.h>

int main(void)
{
    int a = 10, b = 20, c = 10;
    int res;
    
    res = (a > b);
    printf("a > b : %d\n", res);
    res = (a >= b);
    printf("a >= b : %d\n", res);
    res = (a < b);
    printf("a < b : %d\n", res);
    res = (a <= b);
    printf("a <= b : %d\n", res);
    res = (a <= c);
    printf("a <= c : %d\n", res);
    res = (a == b);
    printf("a == b : %d\n", res);
    res = (a != c);
    printf("a != c : %d\n", res);
    
    return 0;
}
