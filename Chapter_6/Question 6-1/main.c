//
//  main.c
//  Question 6-1
//
//  Created by 하동훈 on 2021/01/04.
//

#include <stdio.h>

int main(void) {
    int a = -1;
    while (a < 0) {
        scanf("%d", &a);
    }

    int i;
    
    for (i = 0; i < 5; i++) {
        printf("Be happy!\n");
    }
    
    return 0;
}
