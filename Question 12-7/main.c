//
//  main.c
//  Question 12-7
//
//  Created by 하동훈 on 2021/01/06.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char max[10], mid[10], min[10];
    char temp[10] = {0};
    
    printf("세 단어 입력 : ");
    scanf("%s%s%s", max, mid, min);
    
    if (strcmp(max, mid) > 0) {  // == 1로 하면 왜 작동을 안할까?
        strcpy(temp, max);
        strcpy(max, mid);
        strcpy(mid, temp);
    }
    if (strcmp(mid, min) > 0) {
        strcpy(temp, mid);
        strcpy(mid, min);
        strcpy(min, temp);
    }
    if (strcmp(max, mid) > 0) {
        strcpy(temp, max);
        strcpy(max, mid);
        strcpy(mid, temp);
    }
    
    printf("%s %s %s\n", max, mid, min);
    
    return 0;
}
