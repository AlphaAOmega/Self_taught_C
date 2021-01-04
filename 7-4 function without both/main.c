//
//  main.c
//  7-4 function without both
//
//  Created by 하동훈 on 2021/01/05.
//

#include <stdio.h>

void print_line(void);

int main(void) {
    print_line();
    printf("학번      이름      전공      학점\n");
    print_line();
    
    return 0;
}

void print_line(void) {
    int i;
    for (i=0; i < 50; i++) {
        printf("-");
    }
    printf("\n");
}
