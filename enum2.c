#include <stdio.h>

enum pizza { cheese = 1, potato = 2, bulgogi = 3,  pineapple = 4};
int main(void)
{
	enum pizza PIZZA;
	char code[100];
	printf("���� ���� �ڵ带 �Է��ϼ��� : ");
	scanf("%s", code);

	if(code == "cheese") 


	switch(PIZZA)
	{
		case cheese:
			printf("ġ�����ڸ� �����ϼ̽��ϴ�.\n");
			break;
		case potato:
			printf("�������� ���ڸ� �����ϼ̽��ϴ�.\n");
			break;
		case bulgogi:
			printf("�Ұ�� ���ڸ� �����ϼ̽��ϴ�.\n");
			break;
		case pineapple:
			printf("���ξ��� ���ڸ� �����ϼ̽��ϴ�.\n");
			break;
		default:
			printf("�ٽ� �����Ͽ� �ֽʽÿ�.\n");
			break;
	}

	return 0;
}
