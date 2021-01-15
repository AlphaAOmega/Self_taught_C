//
//  main.c
//  13-4 static variable
//
//  Created by 하동훈 on 2021/01/06.
//

#include <stdio.h>

void auto_func(void);
void static_func(void);

int main(int argc, const char * argv[]) {
    int i;
    
    printf("지역변수를 이용한 함수...\n");
    for (i = 0; i < 3; i++) auto_func();
    
    printf("정적변수를 이용한 함수...\n");
    for (i = 0; i < 3; i++) static_func();
    
    return 0;
}

void auto_func(void) {
    auto int a = 0;
    a++;
    printf("%d\n", a);
}


void static_func(void) {
    static int a = 0;
    a++;
    printf("%d\n", a);
}
