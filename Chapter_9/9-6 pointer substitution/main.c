//
//  main.c
//  9-6 pointer substitution
//
//  Created by 하동훈 on 2021/01/05.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
//    int a = 10;
//    int *p = &a;
//    double *pd;
//
//    pd = p;
//    printf("%lf\n", *pd);
    
    double a = 3.4;
    double *pd = &a;
    int *pi;
    pi = (int *)pd;
    
    printf("%d\n", *pi);
    
    return 0;
}
