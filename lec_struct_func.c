#include <stdio.h>

struct student {
    int number;
    char name[20];
    double grade;
};

int equal(struct student s1, struct student s2) {
    if(s1.number == s2.number) return 1;
    else return 0;
};

int main() {
    struct student a = {1998, "Lee", 3.02};
    struct student b = {1999, "Choi", 3.98};
    
    if(equal(a, b) == 1) printf("같은 학생입니다!\n");
    else printf("다른 학생입니다!\n");
      
    return 0;
}