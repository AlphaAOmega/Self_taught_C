//
//  main.c
//  4_Fibonacci numbers
//
//  Created by 하동훈 on 2021/01/19.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 1, b = 1, temp = 0, sum = 0;
    int f = 1, s = 1, tem = 0, cnt = 0, sumr = 1;
    
    while (temp <= 1000000) {
        temp = a + b;
        if (temp % 2 == 0) sum += temp;
        a = temp;
        temp = a + b;
        if (temp % 2 == 0) sum += temp;
        b = temp;
    } // 짝수인 수열의 값을 모두 더할 때
    
    printf("1백만 이하의 피보나치 수열 중 짝수의 합은 : %d\n", sum);
    
    while (sumr <= 1000000) {
        tem = f + s;
        f = s;
        s = tem;
        cnt++;
        if (cnt % 2 == 0) sumr += tem;
    } // 짝수번째 수열을 모두 더할 때
    
    printf("1백만 이하의 피보나치 수열 중 짝수 항의 합은 : %d\n", sumr);

    return 0;
}
