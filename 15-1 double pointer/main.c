//
//  main.c
//  15-1 double pointer
//
//  Created by 하동훈 on 2021/01/07.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 10;
    int *pi;
    int **ppi;
    
    pi = &a;
    ppi = &pi;
    
    printf("---------------------------------------------------------------\n");
    printf("변수          변숫값          &연산          *연산          **연산\n");
    printf("---------------------------------------------------------------\n");
    printf("  a%14d%14u\n", a, &a);
    printf(" pi%14u%14u%14d\n", pi, &pi, *pi);
    printf("ppi%14u%14u%14u%14d\n", ppi, &ppi, *ppi, **ppi);
    printf("---------------------------------------------------------------\n");
    
    return 0;
}
