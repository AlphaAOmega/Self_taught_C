//
//  main.c
//  13-2 auto variable_2
//
//  Created by 하동훈 on 2021/01/06.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 10, b = 20;
    printf("교환 전 a와 b의 값 : %d, %d\n", a, b);
    
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
    
    printf("교환 후 a와 b의 값 : %d, %d\n", a, b);
    
    return 0;
}
