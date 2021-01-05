//
//  main.c
//  8-2 iteration array
//
//  Created by 하동훈 on 2021/01/05.
//

#include <stdio.h>

int main(void) {
    int score[5];
    int i;
    int total = 0;
    double avg;

    for (i = 0; i < 5; i++) {
        scanf("%d", &score[i]);
        total += score[i];
        printf("%5d", score[i]);
    }
    
    avg = total / 5.0;
    
    printf("\n");

    printf("평균 : %.1lf\n", avg);
    
    return 0;
}
