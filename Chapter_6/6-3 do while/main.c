//
//  main.c
//  6-3 do while
//
//  Created by 하동훈 on 2021/01/04.
//

#include <stdio.h>

int main(void) {
    int a = 1;
    
    do {
        a *= 2;
    } while (a < 10);
    
    printf("a : %d\n", a);
    
    return 0;
}
