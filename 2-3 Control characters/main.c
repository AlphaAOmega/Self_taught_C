//
//  main.c
//  2-3 Control characters
//
//  Created by 하동훈 on 2020/12/29.
//

#include <stdio.h>

int main(void)
{
    printf("Be happy\n");
    //Be happy 출력 후 줄 바꿈(\n)
    printf("12345678901234567890\n");
    //화면에 열번호 출력 후 줄 바꿈(\n)
    printf("My\tFriend\n");
    //My 출력 후 탭(\t) 위치로 이동 후에 friend 출력 후 줄 바꿈(\n)
    printf("Goot\bd\tchance\n");
    //t를 d로 바꾸고 탭 위치로 이동(\t) 후에 chance를 출력하고 줄 바꿈(\n)
    printf("Cow\rW\a\n");
    //맨 앞으로 이동(\r)해 C를 W로 바꾸고 벨소리(\a)를 내고 줄을 바꿈(\n)
    return 0;
}

//xcode는 터미널이 아니라서, \b \a 등은 작동하지 않음
