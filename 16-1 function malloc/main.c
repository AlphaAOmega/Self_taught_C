//
//  main.c
//  16-1 function malloc
//
//  Created by 하동훈 on 2021/01/08.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int *pi;
    double *pd;
    
    pi = (int *)malloc(sizeof(int)); // 메모리 동적 할당 후 포인터 연결
    if (pi == NULL) {
        printf("# 메모리가 부족합니다.\n");
        exit(1);
    }
    pd = (double *)malloc(sizeof(double));
    
    *pi = 10;
    *pd = 3.4;
    
    printf("정수형으로 사용 : %d\n", *pi);
    printf("실수형으로 사용 : %.1lf\n", *pd);
    
    free(pi);
    free(pd);
    
    return 0;
}
