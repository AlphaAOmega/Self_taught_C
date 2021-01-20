//
//  main.c
//  5_casting
//
//  Created by 하동훈 on 2021/01/19.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    double f;
    printf("실수를 입력하여 주세요 : ");
    scanf("%lf", &f);
    
    if (f > 0) {
        f = (f * 100) - ((int)f * 100);
    }
    else if (f < 0) {
        f = ((-1 * f) * 100) + ((int)f * 100);
    }
    else f = 0;
    
    printf("f = %d\n", (int)f);
    
    return 0;
}
