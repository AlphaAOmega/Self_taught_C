//
//  main.c
//  6-4 Nested iteration
//
//  Created by 하동훈 on 2021/01/04.
//

#include <stdio.h>

int main(void) {
    int i, j;
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
