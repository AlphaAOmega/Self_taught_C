//
//  main.c
//  Question 19-7
//
//  Created by 하동훈 on 2021/01/13.
//

#include <stdio.h>

#define SUM(a, b) ((a) + (b))
#define MUL(a, b) ((a) * (b))
#define SUB(a, b) ((a) - (b))
#define DIV(a, b) ((a) / (b))

#define input_(a, op, b) scanf("%d %c %d", &a, &op, &b)

int main(int argc, const char * argv[]) {
    int a, b, res;
    char op;

    while (1) {
        printf("수식 입력(종료 ctrl + d) : ");
        if(input_(a, op, b) < 0) break;

        switch(op) {
            case '+': res = SUM(a, b); break;
            case '-': res = SUB(a, b); break;
            case '*': res = MUL(a, b); break;
            case '/': res = DIV(a, b); break;
        }
        printf("%d %c %d = %d\n", a, op, b, res);
    }
    return 0;
}
