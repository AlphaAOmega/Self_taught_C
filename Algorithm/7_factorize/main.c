//
//  main.c
//  7_factorize
//
//  Created by 하동훈 on 2021/01/20.
//

#include <stdio.h>

void factorize(int n);

int main(int argc, const char * argv[]) {
    int n;
    printf("소인수 분해할 값을 입력하세요 : ");
    scanf("%d", &n);
    
    factorize(n);
    
    return 0;
}

void factorize(int n) {
    int i;
    
    for (i = 2; i <= (n / 2); i++) {
        while ((n % i) == 0) {
            n /= i;
            printf("%d X ", i);
        }
    }
}
