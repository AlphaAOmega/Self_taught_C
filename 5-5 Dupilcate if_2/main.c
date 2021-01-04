//
//  main.c
//  5-5 Dupilcate if_2
//
//  Created by 하동훈 on 2021/01/04.
//

#include <stdio.h>

int main(void)
{
    int a = 10, b = 20;
    
    if (a < 0)
    {
        if (b > 0)  // 중첩 if에서 17, 19행 중괄호가 사라질 경우 else가 가장 가까운 16행의 if문과 연결됨(Dangling else problem)
        {
            printf("ok");
        }
    }
    else
    {
        printf("ok");
    }
    
    return 0;
}
