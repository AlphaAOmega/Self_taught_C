//
//  main.c
//  Question 5-1
//
//  Created by 하동훈 on 2021/01/04.
//

#include <stdio.h>

int main(void)
{
    int a = 1;

    if (a < 0) // 1번
    {
        a = -a;
    }

    if (a % 2) // 2번
    {
        a = 2;
    }
    else
    {
        a = 1;
    }
    
    return 0;
}
