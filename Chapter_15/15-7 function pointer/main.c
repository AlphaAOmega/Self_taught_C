//
//  main.c
//  15-7 function pointer
//
//  Created by 하동훈 on 2021/01/07.
//

#include <stdio.h>

int sum(int, int);

int main(int argc, const char * argv[]) {
    int (*fp)(int, int);
    int res;
    
    fp = sum;
    res = fp(10, 20);
    printf("result : %d\n", res);
    
    return 0;
}

int sum(int a, int b) {
    return (a + b);
}
