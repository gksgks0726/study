#include <stdio.h>
#include <stdlib.h>

struct Data {
    char c1;
    int *numptr;
};

int main () {
    int num1 = 10;
    struct Data d1; //구조체 변수
    struct Data *d2 = malloc(sizeof(struct Data)); //구조체 포인터에 메모리 할당

    d1.numptr = &num1; 
    d2 -> numptr = &num1;

    printf("%d\n", *d1.numptr); // 10: 구조체의 멤버를 역참조
    printf("%d\n", *d2 ->numptr); // 10: 구조체 포인터의 멤버를 역참조

    d2->c1 = 'a';

    // *구제초변수.멤버
    // *구조체포인터->멤버 

    printf("%c\n", (*d2).c1); // a: 구조체 포인터를 역참조하여 c1에 접근
                              // d2->c1과 같음
    printf("%d\n", *(*d2).numptr); // 10 : 구조체 포인터를 역참조하여 numptr에 접근한 뒤 다시 역참조
                                // *d2->numptr과 같음

    free(d2);

    return 0;
    
}