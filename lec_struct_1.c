#include <stdio.h>

struct point {
    int x;
    int y;
};

int main () {
    struct point p1 = {10, 20};
    struct point p2 = {30, 40};

    printf("%d %d\n", p1.x, p1.y);
    printf("%d %d\n", p2.x, p2.y);

    p2 = p1;
    
    printf("%d %d\n", p1.x, p1.y);
    printf("%d %d\n", p2.x, p2.y);

    return 0;
}