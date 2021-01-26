//
//  main.c
//  1924_2007
//
//  Created by 하동훈 on 2021/01/26.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int mon, day, i, tot = 0, dotw;
    
    scanf("%d%d", &mon, &day);
    
    for (i = 0; i < mon - 1; i++) {
        tot += month[i];
    }
    
    tot += day;
    
    dotw = tot % 7;
    
    switch (dotw) {
        case 0:
            printf("SUN");
            break;
        case 1:
            printf("MON");
            break;
        case 2:
            printf("TUE");
            break;
        case 3:
            printf("WED");
            break;
        case 4:
            printf("THU");
            break;
        case 5:
            printf("FRI");
            break;
        case 6:
            printf("SAT");
            break;
    }
    
    return 0;
}
