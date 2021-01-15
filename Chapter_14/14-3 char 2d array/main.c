//
//  main.c
//  14-3 char 2d array
//
//  Created by 하동훈 on 2021/01/07.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char animal[5][20];
    int i;
    int count;
    
    count = sizeof(animal) / sizeof(animal[0]);
    
    for (i = 0; i < count; i++) scanf("%s", animal[i]);

    for (i = 0; i < count; i++) printf("%s ", animal[i]);
    
    printf("\n");
    strcpy(animal[0], animal[1]);
    printf("%s\n", animal[0]);

    return 0;
}
