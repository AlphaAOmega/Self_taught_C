//
//  main.c
//  4-10 Complex entry operator
//
//  Created by 하동훈 on 2021/01/02.
//

#include <stdio.h>

int main(void)
{
    int a = 10, b = 20;
    int res = 2;
    
    a += 20;
    res *= b + 10;
    
    printf("a = %d, b = %d\n", a, b);
    printf("res = %d\n", res);

    return 0;
}
