//
//  main.c
//  Question 17-2
//
//  Created by 하동훈 on 2021/01/09.
//

#include <stdio.h>

struct cracker {
    int price, calories;
};

int main(int argc, const char * argv[]) {
    struct cracker basasak;
    
    printf("바사삭의 가격과 열량을 입력하세요 : ");
    scanf("%d%d", &basasak.price, &basasak.calories);
    
    printf("바사삭의 가격 : %d원\n", basasak.price);
    printf("바사삭의 열량 : %dkcal\n", basasak.calories);
    
    
    return 0;
}
