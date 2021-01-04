//
//  main.c
//  Question 4-4
//
//  Created by 하동훈 on 2021/01/04.
//

#include <stdio.h>

int main(void)
{
    double weight, height, BMI;
    int res;
    
    printf("몸무게(kg)와 키(cm) 입력 : ");

    scanf("%lf%lf", &weight, &height);
    
    height /= 100;
    
    BMI = weight / (height * height);
    
    res = (BMI >= 20) && (BMI < 25) ? 1 : 0;
    
    printf("BMI : %lf\n", BMI);
    printf("%s\n", res == 1 ? "표준입니다." : "체중관리가 필요합니다.");
    
    return 0;
}
