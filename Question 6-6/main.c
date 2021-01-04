//
//  main.c
//  Question 6-6
//
//  Created by 하동훈 on 2021/01/04.
//

#include <stdio.h>

int main(void) {
    int pn = 0, i = 2, j, a = 0, res;
    
    printf("2 이상의 정수를 입력하세요 : ");
    scanf("%d", &pn);
    
    for (i = 2; i <= pn; i++) {
        res = 1;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                res = 0;
                break;
            }
        }
        
        if (res == 1) {
            printf("%d\t", i);
            a++;
            if (a == 5) {
                printf("\n");
                a = 0;
            }
        }
    }

    
    return 0;
}
