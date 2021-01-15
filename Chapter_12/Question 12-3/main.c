//
//  main.c
//  Question 12-3
//
//  Created by 하동훈 on 2021/01/06.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char ani[20];
    char why[80];
    
    printf("좋아하는 동물 : ");
    scanf("%s", ani);
    
    getchar();
    
    printf("좋아하는 이유 : ");
    fgets(why, sizeof(why), stdin);
    
    printf("%s is %s\n", ani, why);
    
    return 0;
}
