//
//  main.c
//  5-6 switch case
//
//  Created by 하동훈 on 2021/01/04.
//

#include <stdio.h>

int main(void)
{
    int rank = 2, m = 0;
    
    switch (rank)
    {
        case 1:
            m = 300;
            break;
        case 2:
            m = 200;
            break;
        case 3:
            m = 100;
            break;
        default:
            m = 10;
            break;
    }
    
    printf("m : %d\n", m);
    return 0;
}
