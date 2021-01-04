//
//  main.c
//  Question 7-3
//
//  Created by 하동훈 on 2021/01/04.
//

#include <stdio.h>

double centi_to_meter(int cm);

int main(void) {
    double res;
    res = centi_to_meter(187);
    
    printf("%.2lfm\n", res);
    return 0;
}

double centi_to_meter(int cm) {
    double temp;
    temp = (double)cm / 100;
    return temp;
}
