//
//  main.c
//  Question 6-5
//
//  Created by 하동훈 on 2021/01/04.
//

#include <stdio.h>

int main(void) {
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == j) printf("*");
            else if (i + j == 4) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
