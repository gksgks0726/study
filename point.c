#include <stdio.h>
#include <math.h>

struct point {
	int x;
	int y;
	int z;
};

int main(void)
{
	struct point p1, p2;
	int xdiff, ydiff, zdiff;
	double dist;

	printf("���� ��ǥ�� �Է��Ͻÿ�(x  y): ");
	scanf("%d %d %d", &p1.x, &p1.y, &p1.z);

	printf("���� ��ǥ�� �Է��Ͻÿ�(x  y): ");
	scanf("%d %d %d", &p2.x, &p2.y, &p2.z);
	
	xdiff = p1.x - p2.x;
	ydiff = p1.y - p2.y;
	zdiff = p1.z - p2.z;

	dist = sqrt((double)(xdiff * xdiff + ydiff * ydiff + zdiff * zdiff));

	printf("�� �������� �Ÿ��� %f�Դϴ�.\n", dist);
	
	return 0;
}