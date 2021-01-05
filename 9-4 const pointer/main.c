//
//  main.c
//  9-4 const pointer
//
//  Created by 하동훈 on 2021/01/05.
//

#include <stdio.h>

int main(void) {
    int a = 10, b = 20;
    const int *pa = &a;
    
    printf("변수 a의 값 : %d\n", *pa);
    pa = &b;
    printf("변수 b의 값 : %d\n", *pa);
    pa = &a;
    a = 20;
    printf("변수 a의 값 : %d\n", *pa);
    
    return 0;
}
