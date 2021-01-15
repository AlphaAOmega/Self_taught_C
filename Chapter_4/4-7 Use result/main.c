//
//  main.c
//  4-7 Use result
//
//  Created by 하동훈 on 2020/12/30.
//

#include <stdio.h>

int main(void)
{
    int a = 10, b = 20, res;
    
    a + b;   //사용되지 않음(연산 결과는 버려짐)
    printf("%d + %d = %d\n", a, b, a + b);
    
    res = a + b;
    printf("%d + %d = %d\n", a, b, res);
    
    return 0;
}
