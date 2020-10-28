#include <stdio.h>
int main(){
	int a, b, c; // a = 고정비용 b = 인건비 c = 노트북 가격
	scanf("%d %d %d", &a, &b, &c);
	if(c <= b){
		printf("-1");
	}
	else{
		printf("%d\n", a / (c-b) + 1);
	}
} 