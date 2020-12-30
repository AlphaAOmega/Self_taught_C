//
//  main.c
//  4-2 Devide operator
//
//  Created by 하동훈 on 2020/12/30.
//

#include <stdio.h>

int main(void)
{
    double apple;
    int banana;
    int orange;
    
    apple = 5.0 / 2.0;
    banana = 5 / 2;
    orange = 5 % 2;
    
    printf("apple : %lf\n", apple);
    printf("banana : %d\n", banana);
    printf("orange : %d\n", orange);
    
    return 0;
}
