//
//  main.c
//  11_Euclidean Algorithm
//
//  Created by 하동훈 on 2021/01/20.
//

#include <stdio.h>

int euclidean(int a, int b);

int main(int argc, const char * argv[]) {
    int a, b, res;
    printf("두 정수를 입력하세요 : ");
    scanf("%d%d", &a, &b);
    
    res = euclidean(a, b);
    
    printf("%d와 %d의 최대공약수는 %d입니다.\n", a, b, res);
    
    return 0;
}

int euclidean(int a, int b) {
    int temp;
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    
    while (a % b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    
    return b;
}
