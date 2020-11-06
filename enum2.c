#include <stdio.h>

enum pizza { cheese = 1, potato = 2, bulgogi = 3,  pineapple = 4};
int main(void)
{
	enum pizza PIZZA;
	char code[100];
	printf("피자 종류 코드를 입력하세요 : ");
	scanf("%s", code);

	if(code == "cheese") 


	switch(PIZZA)
	{
		case cheese:
			printf("치즈피자를 선택하셨습니다.\n");
			break;
		case potato:
			printf("포테이포 피자를 선택하셨습니다.\n");
			break;
		case bulgogi:
			printf("불고기 피자를 선택하셨습니다.\n");
			break;
		case pineapple:
			printf("파인애플 피자를 선택하셨습니다.\n");
			break;
		default:
			printf("다시 선택하여 주십시오.\n");
			break;
	}

	return 0;
}
