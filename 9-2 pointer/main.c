//
//  main.c
//  9-2 pointer
//
//  Created by 하동훈 on 2021/01/05.
//

#include <stdio.h>

int main(void) {
    int a;
    int *pa;
    
    pa = &a;
    *pa = 10;
    
    printf("포인터로 a값 출력 : %d\n", *pa);
    printf("변수명으로 a값 출력 : %d\n", a);
    
    return 0;
}
