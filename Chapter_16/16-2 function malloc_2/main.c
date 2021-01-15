//
//  main.c
//  16-2 function malloc_2
//
//  Created by 하동훈 on 2021/01/08.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int *pi;
    int i, sum = 0;
    
    pi = (int *)malloc(5 * sizeof(int));
    if (pi == NULL) {
        printf("# 메모리가 할당되지 않았습니다.\n");
        exit(1);
    }
    
    printf("다섯 명의 나이를 입력하세요 : ");
    
    for (i = 0; i < 5; i++) {
        scanf("%d", &pi[i]);
        sum += pi[i];
    }
    
    printf("다섯 명의 평균 나이 : %.1lf\n", sum / 5.0);
    free(pi);
    
    return 0;
}
