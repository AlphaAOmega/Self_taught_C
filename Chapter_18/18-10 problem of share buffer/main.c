//
//  main.c
//  18-10 problem of share buffer
//
//  Created by 하동훈 on 2021/01/11.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    FILE *fp;
    int age;
    char name[20];
    
    fp = fopen("a.txt", "r");
    
    fscanf(fp, "%d", &age);
    fgetc(fp);
    fgets(name, sizeof(name), fp);
    
    printf("나이 : %d, 이름 : %s", age, name);
    fclose(fp);
    
    return 0;
}
