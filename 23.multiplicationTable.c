#include <stdio.h>

//원하는 단의 구구단을 출력하는 프로그램입니다.
int main(void){
	int x, i;
	printf("정수를 입력하세요 : ");
	scanf("%d", &x);
	for(i=0; i<=9; i++){
		printf("%d X %d = %d\n", x, i, x * i);
	}
	return 0;
}
