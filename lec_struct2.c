#include <stdio.h>

struct student {
    int number;
    char name[20];
    double grade;
};

int main () {
    struct student s = {23, "Lee", 3.02};
    struct student *p;

    p = &s;

    printf("�й� = %d �̸� = %s ���� = %lf\n", p -> number, p -> name, p -> grade);
    printf("�й� = %d �̸� = %s ���� = %lf\n", (*p).number, (*p).name, (*p).grade);
    printf("�й� = %d �̸� = %s ���� = %lf\n", s.number, s.name, s.grade);
    return 0;
}