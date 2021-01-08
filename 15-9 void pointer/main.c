//
//  main.c
//  15-9 void pointer
//
//  Created by 하동훈 on 2021/01/07.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 10;
    double b = 3.5;
    void *vp;
    
    vp = &a;
    printf("a : %d\n", *(int *)vp);
    
    printf("a의 주소 + 1의 값 : %p\n", (int *)vp + 1);
    
    vp = &b;
    printf("b : %.1lf\n", *(double *)vp);
    
    return 0;
}
