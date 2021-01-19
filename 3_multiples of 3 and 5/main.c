//
//  main.c
//  3_multiples of 3 and 5
//
//  Created by 하동훈 on 2021/01/19.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i, sum = 0;
    for (i = 1; i <= 1000; i++) {
        if (i % 3 == 0) sum += i;
        else if (i % 5 == 0) sum += i;
    }
    printf("1천이하의 3 또는 5의 배수인 자연수들의 합은 : %d\n", sum);
    
    return 0;
}
