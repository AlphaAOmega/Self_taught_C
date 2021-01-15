//
//  input.c
//  19-9 exturn and static
//
//  Created by 하동훈 on 2021/01/13.
//

#include <stdio.h>

extern int count;
int total = 0;

int input_data(void) {
    int pos;
    while (1) {
        printf("양수 입력 : ");
        scanf("%d", &pos);
        if (pos < 0) break;
        count++;
        total += pos;
    }
    return total;
}

