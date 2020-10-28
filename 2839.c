#include <stdio.h>
int main(){
	int kg, cnt = 0;
	scanf("%d", &kg);
	while(0 < kg){
		if(kg % 5 == 0){
			kg -= 5;
			cnt++;
		}
		else if(kg % 3 == 0){
			kg -= 3;
			cnt++;
		}
		else if(kg > 5){
			kg -= 5;
			cnt++;
		}
		else{
			cnt = -1;
			break;
		}
	}
	printf("%d", cnt);
	return 0;
}