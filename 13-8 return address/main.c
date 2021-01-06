//
//  main.c
//  13-8 return address
//
//  Created by 하동훈 on 2021/01/07.
//

#include <stdio.h>

int *sum(int a, int b);

int main(int argc, const char * argv[]) {
    int *resp;
    
    resp = sum(10, 20);
    printf("두 정수의 합 : %d\n", *resp);
    
    return 0;
}

int *sum(int a, int b) {
    static int res;
    res = a + b;
    return &res;
}
