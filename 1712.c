#include <stdio.h>
int main(){
	int a, b, c; // a = ������� b = �ΰǺ� c = ��Ʈ�� ����
	scanf("%d %d %d", &a, &b, &c);
	if(c <= b){
		printf("-1");
	}
	else{
		printf("%d\n", a / (c-b) + 1);
	}
} 