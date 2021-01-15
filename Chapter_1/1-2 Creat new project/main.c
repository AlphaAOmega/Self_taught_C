//
//  main.c
//  1-2 Create new project
//
//  Created by 하동훈 on 2020/12/28.
//  Copyright © 2020 P0tt3r. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>  //system 사용을 위해 추가한 코드

int main(void)
{
    printf("Be happy!\n");
    system("read -n 1 -s -p \"Press any key to continue...\"");
    //출력 후 입력을 받을 때 까지 파일을 끝내지 않음
    
    return 0;
}
