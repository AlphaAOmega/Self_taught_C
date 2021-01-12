//
//  main.c
//  19-1 custom header
//
//  Created by 하동훈 on 2021/01/12.
//

#include <stdio.h>
#include "student.h"

int main(int argc, const char * argv[]) {
    Student a = {315, "홍길동"};
    
    printf("학번 %d, 이름 : %s\n", a.num, a.name);
    
    return 0;
}
