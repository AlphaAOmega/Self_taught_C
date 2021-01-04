//
//  main.c
//  7-5 Recursive function
//
//  Created by 하동훈 on 2021/01/05.
//

#include <stdio.h>

void fruit(void);

int main(void) {
    fruit();
    
    return 0;
}

void fruit(void) {
    printf("apple\n");
    fruit();
}
