//
//  main.c
//  Question 15-7
//
//  Created by 하동훈 on 2021/01/07.
//

#include <stdio.h>
#include <string.h>

void swap(char *pa, void *pb, void *pc);

int main(int argc, const char * argv[]) {
    int i, age[2];
    double tall[2];
    
    for (i = 0; i < 2; i++) {
        printf("%d번째 사람의 나이와 키 입력 : ", i + 1);
        scanf("%d %lf", &age[i], &tall[i]);
    }
    
    swap("int", &age[0], &age[1]);
    swap("double", &tall[0], &tall[1]);
    
    for (i = 0; i < 2; i++) printf("%d번째 사람의 나이와 키 : %d, %.1lf\n", i + 1, age[i], tall[i]);
    
    return 0;
}

void swap(char *pa, void *pb, void *pc) {
    if (strcmp(pa, "int") == 0) {
        int temp;
        temp = *(int *)pb;
        *(int *)pb = *(int *)pc;
        *(int *)pc = temp;
    }
    else {
        double temp;
        temp = *(double *)pb;
        *(double *)pb = *(double *)pc;
        *(double *)pc = temp;
    }
}
    
