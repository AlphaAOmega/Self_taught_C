//
//  main.c
//  19-7 pragma directive
//
//  Created by 하동훈 on 2021/01/12.
//

#include <stdio.h>
#pragma pack(push, 1)

typedef struct {
    char ch;
    int in;
} Sample1;

#pragma pack(pop)
typedef struct {
    char ch;
    int in;
} Sample2;

int main(int argc, const char * argv[]) {
    printf("Sample1 구조체의 크기 : %u\n", sizeof(Sample1));
    printf("Sample2 구조체의 크기 : %u\n", sizeof(Sample2));
    
    return 0;
}
