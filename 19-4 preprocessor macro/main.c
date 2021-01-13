//
//  main.c
//  19-4 preprocessor macro
//
//  Created by 하동훈 on 2021/01/12.
//

#include <stdio.h>

void func(void);

int main(int argc, const char * argv[]) {
    printf("컴파일 날짜와 시간 : %s, %s\n", __DATE__, __TIME__);
    printf("파일명 : %s\n", __FILE__);
    printf("함수명 : %s\n", __FUNCTION__);
    printf("행번호 : %d\n", __LINE__);
    
#line 100 "macro.c"
    func();
    
    return 0;
}

void func(void) {
    printf("\n");
    printf("파일명 : %s\n", __FILE__);
    printf("함수명 : %s\n", __FUNCTION__);
    printf("행번호 : %d\n", __LINE__);
}
