//
//  sub.c
//  19-8 compile multiple source file
//
//  Created by 하동훈 on 2021/01/13.
//

#include <stdio.h>

void input_data(int *pa, int *pb) {
    printf("두 정수 입력 : ");
    scanf("%d%d", pa, pb);
}

double average(int a, int b) {
    double avg = (a + b) / 2.0;
    return avg;
}
