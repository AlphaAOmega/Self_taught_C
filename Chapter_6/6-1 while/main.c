//
//  main.c
//  6-1 while
//
//  Created by 하동훈 on 2021/01/04.
//

#include <stdio.h>

int main(void) {
    int a = 1;
    
    while (a < 10) {
        a = a * 2;
    }
    
    printf("a : %d\n", a);

    return 0;
}
