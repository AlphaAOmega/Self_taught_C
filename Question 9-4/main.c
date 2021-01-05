//
//  main.c
//  Question 9-4
//
//  Created by 하동훈 on 2021/01/05.
//

#include <stdio.h>

void swap(double *pa, double *pb);
void line_up(double *maxp, double *midp, double *minp);

int main(int argc, const char * argv[]) {
    double max, mid, min;
    
    printf("실수값 3개 입력 : ");
    scanf("%lf%lf%lf", &max, &mid, &min);
    line_up(&max, &mid, &min);
    printf("정렬된 값 : %.1lf, %.1lf, %.1lf\n", max, mid, min);
    
    return 0;
}

void swap(double *pa, double *pb) {
    double temp;
    
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void line_up(double *maxp, double *midp, double *minp) {
    if (*maxp < *midp) swap(maxp, midp);
    if (*midp < *minp) swap(midp, minp);
    if (*maxp < *midp) swap(maxp, midp);
}
