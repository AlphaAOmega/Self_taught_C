//
//  main.c
//  6-2 for
//
//  Created by 하동훈 on 2021/01/04.
//

#include <stdio.h>

int main(void) {
    int a = 1;
    int i;
    
    for (i = 0; i < 3; i++) {
        a *= 2;
    }
    
    printf("a : %d\n", a);

    return 0;
}
