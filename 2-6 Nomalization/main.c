//
//  main.c
//  2-6 Nomalization
//
//  Created by 하동훈 on 2020/12/29.
//

#include <stdio.h>

int main(void)
{
    printf("%.1lf\n", 1e6);        //지수 형태의 실수를 소수점 형태로 출력
    printf("%.7lf\n", 3.14e-5);    //소수점 이하 7자리 까지 출력
    printf("%le\n", 0.0000314);    //소수점 형태의 실수를 지수형태로 출력
    printf("%.2le\n", 0.0000314);  //소수점 형태의 실수를 지수형태로 소수점 둘째 자리 까지 출력
    
    return 0;
}
