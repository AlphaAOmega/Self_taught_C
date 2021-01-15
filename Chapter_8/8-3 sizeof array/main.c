//
//  main.c
//  8-3 sizeof array
//
//  Created by 하동훈 on 2021/01/05.
//

#include <stdio.h>

int main(void) {
    int score[5];
    int i, cnt, total = 0;
    double avg;

    cnt = sizeof(score) / sizeof(score[0]);
    
    for (i = 0; i < cnt; i++) {
        scanf("%d", &score[i]);
        total += score[i];
        printf("%5d", score[i]);
    }
    
    avg = total / (double)cnt;
    
    printf("\n");
    
    printf("평균 : %.1lf\n", avg);
    
    return 0;
}
