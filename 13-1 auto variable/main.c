//
//  main.c
//  13-1 auto variable
//
//  Created by 하동훈 on 2021/01/06.
//

#include <stdio.h>

void assign(void);

int main(int argc, const char * argv[]) {
    auto int a = 0;
    
    assign();
    printf("main 함수 a : %d\n", a);
    return 0;
}

void assign(void) {
    int a;
    
    a = 10;
    
    printf("assign 함수 a : %d\n", a);
}
