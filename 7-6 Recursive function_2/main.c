//
//  main.c
//  7-6 Recursive function_2
//
//  Created by 하동훈 on 2021/01/05.
//

#include <stdio.h>

void fruit(int count);

int main(void) {
    fruit(1);
    return 0;
}

void fruit(int count) {
    printf("apple\n");
    if (count == 3) return;
    fruit(count + 1);
}
