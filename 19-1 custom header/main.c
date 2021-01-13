//
//  main.c
//  19-1 custom header
//
//  Created by 하동훈 on 2021/01/12.
//

#include <stdio.h>      // <>는 include 디렉토리에서 헤더파일을 찾고(컴파일러의 include directory)
#include "student.h"    // ""는 소스 파일이 저장된 디렉토리에서 찾음(사용자가 만든 헤더 파일)

int main(int argc, const char * argv[]) {
    Student a = {315, "홍길동"};
    
    printf("학번 %d, 이름 : %s\n", a.num, a.name);
    
    return 0;
}
