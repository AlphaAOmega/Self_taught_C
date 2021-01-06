//
//  main.c
//  13-6 share data with other func
//
//  Created by 하동훈 on 2021/01/07.
//

#include <stdio.h>

void add_ten(int a);

int main(int argc, const char * argv[]) {
    int a = 10;
    
    add_ten(a);
    printf("a : %d\n", a);
    
    return 0;
}

void add_ten(int a) {
    a += 10;            // 매개변수로 받아서 사용은 가능하지만, 반환하지 않기 때문에 메인 함수에서 값 증가 없이 출력
}
