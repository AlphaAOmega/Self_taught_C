//
//  main.c
//  Question 16-7
//
//  Created by 하동훈 on 2021/01/09.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int num, i, j, n = 0, x = 0, cnt = 0;
    int *pn = (int *)malloc(n * sizeof(int));
    char *px = (char *)malloc(x * sizeof(char));
    
    printf("양수 입력 : ");
    scanf("%d", &num);
    
    for (i = 2; i <= num; i++) {
        int res = 1;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                res = 0;
                x++;
                px = (char *)realloc(px, x * sizeof(char));
                px[x - 1] = 'X';
                printf("%5c", px[x - 1]);
                cnt++;
                break;
            }
        }
        if (res == 1) {
            n++;
            pn = (int *)realloc(pn, n * sizeof(int));
            pn[n - 1] = i;
            printf("%5d", pn[n - 1]);
            cnt++;
        }
        if (cnt % 5 == 0) printf("\n");
    }
    
    printf("\n");
    
    return 0;
}
