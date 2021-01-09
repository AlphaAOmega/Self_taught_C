//
//  main.c
//  17-9 self reference structure
//
//  Created by 하동훈 on 2021/01/09.
//

#include <stdio.h>

struct list {  // 자기 참조 구조체
    int num;
    struct list *next;
};

int main(int argc, const char * argv[]) {
    struct list a = {10, 0}, b = {20, 0}, c = {30, 0};
    struct list *head = &a, *current;
    
    a.next = &b;
    b.next = &c;
    
    printf("head->num : %d\n", head->num);
    printf("head->next->num : %d\n", head->next->num);
    
    printf("list all : ");
    current = head;
    while (current != NULL) {
        printf("%d   ", current->num);
        current = current -> next;
    }
    printf("\n");
    
    
    return 0;
}
