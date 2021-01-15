//
//  main.c
//  19-8 compile multiple source file
//
//  Created by 하동훈 on 2021/01/13.
//

#include <stdio.h>

void input_data(int *, int *);
double average(int, int);

int main(int argc, const char * argv[]) {
    int a, b;
    double avg;
    
    input_data(&a, &b);
    avg = average(a, b);
    printf("%d와 %d의 평균 : %.1lf\n", a, b, avg);
    
    return 0;
}
