//
//  main.c
//  9-8 swap without pointer
//
//  Created by 하동훈 on 2021/01/05.
//

#include <stdio.h>

/* void swap(void);

int main(int argc, const char * argv[]) {
    int a = 10, b = 20;
    
    swap();
    printf("a : %d, b : %d\n", a, b);
    
    return 0;
}

void swap(void) {
    int temp;
    
    temp = a;
    a = b;
    b = temp;
}
 위 코드는 메인 함수 내의 변수 a,b는 swap 함수 내에서 정의되지 않았기 떄문에 실행 불가 */

void swap(int x, int y);

int main(int argc, const char * argv[]) {
    int a = 10, b = 20;
    
    swap(a, b);
    printf("a : %d, b : %d\n", a, b);
    
    return 0;
}

void swap(int x, int y) {
    int temp;
    
    temp = x;
    x = y;
    y = temp;
}
// 함수는 오직 한가지 값만 반환(return)할 수 있으며, 변수는 함수 내에서만 사용되기 떄문에 스왑 내에서 변수 x, y에 저장됨
// 그래서 출력되는 a, b값은 초기와 동일
