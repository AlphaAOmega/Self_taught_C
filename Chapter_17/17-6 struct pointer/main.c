//
//  main.c
//  17-6 struct pointer
//
//  Created by 하동훈 on 2021/01/09.
//

#include <stdio.h>

struct score {
    int kor, eng, mat;
};

int main(int argc, const char * argv[]) {
    struct score yuni = {90, 80, 70};  // 구조체 변수(yuni) 선언과 초기화
    struct score *ps = &yuni;          // 구조체 포인터에 주소(&yuni) 저장
    
    printf("국어 : %d\n", (*ps).kor);
    printf("영어 : %d\n", ps -> eng);
    printf("수학 : %d\n", ps -> mat);
    
    return 0;
}
