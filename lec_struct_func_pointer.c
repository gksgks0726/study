#include <stdio.h>

struct student {
    int number;
    char name[20];
    double grade;
};

int equal(struct student *sP1, struct student *sP2) {
    if(sP1->number == sP2->number) return 1;
    else return 0;
}

int main () {
    struct student a = {1, "Hong", 4.3};
    struct student b = {2, "Park", 4.41};
    
    if(equal(&a, &b) == 1) printf("같은 학생입니다!\n");
    else printf("다른 학생입니다!\n");

    return 0;
}