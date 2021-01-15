//
//  average.c
//  19-9 exturn and static
//
//  Created by 하동훈 on 2021/01/13.
//

#include <stdio.h>

extern int count;
extern int total;

double average(void) {
    return total / (double)count;
}
