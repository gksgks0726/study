#include <stdio.h>

struct date {
    int montt;
    int day;
    int year;
};

struct student {
    int number;
    char name[20];
    double grade;
    struct date *dob;
};

int main() {
    struct date d = {3, 20, 1980};
    struct student s = {20171041, "Lee", 3.02};

    s.dob = &d;

    printf("�й� : %d\n", s.number);
    printf("�̸� : %s\n", s.name);
    printf("���� : %f\n", s.grade);
    printf("������� : %d�� %d�� %d��\n", s.dob->year, s.dob->montt, s.dob->day);
    return 0;
}