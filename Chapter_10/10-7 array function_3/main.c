//
//  main.c
//  10-7 array function_3
//
//  Created by 하동훈 on 2021/01/05.
//

#include <stdio.h>

void input_ary(double *pa, int size);
double find_max(double *pa, int size);

int main(int argc, const char * argv[]) {
    double ary[5];
    double max;
    int size = sizeof(ary) / sizeof(ary[0]);
    
    input_ary(ary, size);
    max = find_max(ary, size);
    printf("배열의 최대값 : %.1lf\n", max);
    
    return 0;
}

void input_ary(double *pa, int size) {
    int i;
    
    printf("%d개의 실수 입력 : ", size);
    for (i = 0; i < size; i++)
        scanf("%lf", pa + i);
    
}

double find_max(double *pa, int size) {
    int i;
    double max = 0;
    for (i = 0; i < size; i++)
        if (max < *(pa + i)) max = *(pa +i);
    
    return max;
}

