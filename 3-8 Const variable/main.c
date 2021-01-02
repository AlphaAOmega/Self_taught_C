//
//  main.c
//  3-8 Const variable
//
//  Created by 하동훈 on 2020/12/29.
//

#include <stdio.h>

int main(void)
{
    int income = 0;
    double tax;
    const double tax_rate = 0.12;
    
    income = 456;
    tax = income * tax_rate;
    printf("세금은 %.1lf원입니다.\n", tax);
        
    return 0;
}
