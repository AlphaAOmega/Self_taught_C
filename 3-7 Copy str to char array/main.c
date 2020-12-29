//
//  main.c
//  3-7 Copy str to char array
//
//  Created by 하동훈 on 2020/12/29.
//

#include <stdio.h>
#include <string.h>

int main(void)
{
    char fruit[20] = "strawberry";
    
    printf("%s\n", fruit);
    strcpy(fruit, "banana");
    printf("%s\n", fruit);
    
    return 0;
}
