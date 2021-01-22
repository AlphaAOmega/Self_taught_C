//
//  main.c
//  12_library
//
//  Created by 하동훈 on 2021/01/22.
//

#include <stdio.h>

void add_book(char (*book)[4][40]);
void search_book(char book[][4][40]);
void borrow_book(char (*book)[4][40]);
void return_book(char (*book)[4][40]);
int str_cmp(char *pa, char *pb);

int main(int argc, const char * argv[]) {
    char Book[100][4][40];
    int func, i, j;
    
    for (i = 0; i < 100; i++) {
        for (j = 0; j < 4; j++) {
            Book[i][j][0] = '1';
            Book[i][j][1] = '\0';
        }
    }
    
    while (1) {
        printf("\n도서관 관리 프로그램입니다. 원하시는 업무를 선택해주세요.\n");
        printf("1. 도서 추가\n");
        printf("2. 도서 검색\n");
        printf("3. 도서 대여\n");
        printf("4. 도서 반납\n");
        printf("5. 프로그램 종료\n");
        scanf("%d", &func);
        
        switch (func) {
            case 1:
                add_book(Book);
                break;
            case 2:
                search_book(Book);
                break;
            case 3:
                borrow_book(Book);
                break;
            case 4:
                return_book(Book);
                break;
            case 5:
                return 0;
            default:
                printf("ERROR : 기능에 없는 번호입니다.\n\n");
                continue;
        
        }
    }
}

void add_book(char (*book)[4][40]) {
    static int num;
    int o;
    while (1) {
        printf("\n추가할 도서의 제목, 저자, 출판사를 순서대로 입력하여 주세요 : ");
        scanf("%s%s%s", book[num][0], book[num][1], book[num][2]);
        printf("제목 : %s, 저자 : %s, 출판사 : %s 도서가 추가되었습니다.\n", book[num][0], book[num][1], book[num][2]);
        num++;
        printf("계속 추가하길 원하시면 0번을 홈으로 가길 원하시면 아무 번호나 누르세요.");
        scanf("%d", &o);
        if (o != 0) break;
    }
    
}

void search_book(char book[][4][40]) {
    int func, i, o, k;
    char title[40];
    char author[40];
    char company[40];
    
    while (1) {
        k = 0;
        printf("\n1. 제목으로 도서 검색\n");
        printf("2. 저자로 도서 검색\n");
        printf("3. 출판사로 도서 검색\n");
        scanf("%d", &func);
        
        switch (func) {
            case 1:
                printf("제목을 입력해주세요 : ");
                scanf("%s", title);
                for (i = 0; i < 100; i++) {
                    if (str_cmp(book[i][0], title) == 1) {
                        printf("검색 결과  %d. 제목 : %s, 저자 : %s, 출판사 : %s\n", k+1, book[i][0], book[i][1], book[i][2]);
                        k++;
                    }
                }
                if (k == 0) printf("검색결과가 없습니다.\n");
                break;
            case 2:
                printf("저자를 입력해주세요 : ");
                scanf("%s", author);
                for (i = 0; i < 100; i++) {
                    if (str_cmp(book[i][1], title) == 1) {
                        printf("검색 결과  %d. 제목 : %s, 저자 : %s, 출판사 : %s\n", k+1, book[i][0], book[i][1], book[i][2]);
                        k++;
                    }
                }
                if (k == 0) printf("검색결과가 없습니다.\n");
                break;
            case 3:
                printf("출판사를 입력해주세요 : ");
                scanf("%s", company);
                for (i = 0; i < 100; i++) {
                    if (str_cmp(book[i][2], title) == 1) {
                        printf("검색 결과  %d. 제목 : %s, 저자 : %s, 출판사 : %s\n", k+1, book[i][0], book[i][1], book[i][2]);
                        k++;
                    }
                }
                if (k == 0) printf("검색결과가 없습니다.\n");
                break;
            default:
                printf("ERROR : 기능에 없는 번호입니다.\n\n");
                continue;
        }
        printf("재검색을 원하시면 0번을 홈으로 가길 원하시면 아무 번호나 누르세요.");
        scanf("%d", &o);
        if (o != 0) break;
    }
}

void borrow_book(char (*book)[4][40]) {
    char title[40];
    char num[2] = {'1'};
    int i, o;
    while (1) {
        printf("대여하고 싶은 도서의 제목을 입력해주세요 : ");
        scanf("%s", title);
        for (i = 0; i < 100; i++) {
            if (str_cmp(book[i][0], title) == 1) {
                if (str_cmp(book[i][3], num)) {
                    printf("%s 도서를 대여하였습니다.\n", title);
                    book[i][3][0] = '0';
                    break;
                }
                else {
                    printf("해당 도서는 대여중입니다.\n");
                    break;
                }
            }
        }
        printf("계속 대여하길 원하시면 0번을 홈으로 가길 원하시면 아무 번호나 누르세요.");
        scanf("%d", &o);
        if (o != 0) break;
    }
}
    
void return_book(char (*book)[4][40]) {
    char title[40];
    char num[2] = {'0'};
    int i, o;
    while (1) {
        printf("반납하실 도서의 제목을 입력해주세요 : ");
        scanf("%s", title);
        for (i = 0; i < 100; i++) {
            if (str_cmp(book[i][0], title) == 0) {
                if (str_cmp(book[i][3], num)) {
                    printf("%s 도서를 대여하였습니다.\n", title);
                    book[i][3][0] = '1';
                    break;
                }
                else {
                    printf("해당 도서는 대여상태가 아닙니다.\n");
                    break;
                }
            }
        }
        printf("계속 반납하길 원하시면 0번을 홈으로 가길 원하시면 아무 번호나 누르세요.");
        scanf("%d", &o);
        if (o != 0) break;
    }
}


int str_cmp(char *pa, char *pb) {
    while (*pa) {
        if (*pa != *pb) return 0;
        pa++;
        pb++;
    }
    
    if (*pb == '\0') return 1;
    
    return 0;
}
