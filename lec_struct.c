#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Person {
    char name[20];
    int age;
    char address[100];
};

int main () {

    struct Person *p1 = malloc(sizeof(struct Person));

    //화살표 연산자로 구조체 멤버에 접근하여 값 할당
    strcpy(p1 -> name, "홍길동");
    p1 -> age = 30; //문자열 멤버는 할당 연산자로 저장할 수 없으므로 strcpy 함수를 사용
    strcpy(p1 -> address, "강원도 횡성군 우천면");

    //화살표 연산자로 구조체 멤버에 접근하여 값 출력
    printf("이름 : %s\n", p1 -> name);
    printf("나이 : %d\n", p1 -> age);
    printf("주소 : %s\n", p1 -> address);

    free(p1);
    //구조체에 메모리를 할당할 때는 malloc -> 사용 -> free 패턴을 기억!
    return 0;
}