//
//  main.c
//  12-2 str array with pointer
//
//  Created by 하동훈 on 2021/01/06.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char *dessert = "apple";
    
    printf("오늘 후식은 %s입니다.\n", dessert);
    dessert = "banana";
    printf("내일 후식은 %s입니다.\n", dessert);
    
    return 0;
}
