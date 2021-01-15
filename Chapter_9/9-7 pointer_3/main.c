//
//  main.c
//  9-7 pointer_3
//
//  Created by 하동훈 on 2021/01/05.
//

#include <stdio.h>

void swap(int *pa, int *pb);

int main(int argc, const char * argv[]) {
    int a = 10, b = 20;
    
    swap(&a, &b);
    printf("a : %d, b : %d\n", a, b);
    
    return 0;
}

void swap(int *pa, int *pb) {
    int temp;
    
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}
