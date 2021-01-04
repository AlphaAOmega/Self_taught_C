//
//  main.c
//  Question 5-3
//
//  Created by 하동훈 on 2021/01/04.
//

#include <stdio.h>

int main(void) {
    double height = 179.5, weight = 75.0;
    
    if ((height >= 187.5) && (weight < 80))
    {
        printf("ok\n");
    }
    else
    {
        printf("cancel\n");
    }
    
    return 0;
}
