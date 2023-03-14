#include <stdio.h>

int main(void){
	int x = 100; //선언 및 초기화
	printf("10진수로 출력 : %d\n", x);
	printf("8진수로 출력 : %o\n", x); // 0 1 2 3 4 5 6 7 : 8가지 숫자만 가지고, 모든 숫자 체계를 표현하는 방식을 8진수라 한다. 
	printf("16진수로 출력 : %x\n", x);
	return 0;
}
